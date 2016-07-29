/* === System includes === */
#include <iostream>
#include <string.h>
#include <math.h>

/* === Local includes === */
#include "egomotion_2.h"

using namespace std;

//defines
#define GRAVITY 9.81
#define THRUST_SCALE 0.07170
#define ABS(x) (((x)>0)?(x):-(x))

//egomotion states
MatrixXd x_self(7,1);
MatrixXd dx_self(7,1);
MatrixXd xold_self(7,1);
MatrixXd P_self(7,7);
MatrixXd dP_self(7,7);
MatrixXd Pold_self(7,7);

//egomotion ekf matrices and variables
MatrixXd A1_self(4,4);
MatrixXd A2_self(4,3);
MatrixXd At_self(7,7);
MatrixXd Wt_self(7,7);
MatrixXd Q_self(6,6);
MatrixXd C_OF_self(2,7);
MatrixXd R_OF_self(2,2);
MatrixXd K_OF_self(7,2);
MatrixXd C_Z_self(1,7);
MatrixXd R_Z_self(1,1);
MatrixXd K_Z_self(7,1);
MatrixXd A(7,7); //this matrix applies the self state to the relative estimates (7 states)
MatrixXd A1(7,3); //this matrix applies the self state to velocity estimates
double Qyaw;
MatrixXd eye7_self = MatrixXd::Identity(7,7);
string sensors_self;

//time and lag variables
double g_dt, g_dt_max;
int lag_count;
int lag_on;
double last_time;
short stamp_thrust, stamp_thrust_old, stamp_imu, stamp_imu_old;
double thrust_last_time, imu_last_time;
double timer_z, timer_of;
int self_initialized;
double z_old;

//egomotion actuation variables
double aux_x, aux_y, aux_z, aux_w;
double roll, pitch, yaw, g_omega;
double F;
double robot_mass, robot_calib_slope, robot_calib_bias;

//ROS message for which egomotion will be transmitted
quad_msgs::EstimateSingle s_single;

//initialize egomotion estimation variables
void egomotion_init(double dt, double dt_max, double w_th, double w_roll, double w_pitch, double w_change, double w_yaw, double v_Z, double v_OF, double lag, double mass, double calib_slope, double calib_bias){

	//save mass value
	robot_mass = mass;
	robot_calib_slope = calib_slope;
	robot_calib_bias = calib_bias;

	//save time step
	g_dt = dt;
	g_dt_max = dt_max; //this is the maximum time that one will wait for prediction input measurements

	//decide how many elements in the vector are necessary to make the computations neccessary for a lag specified in the lag variable
	lag_count = (int)(lag/dt);
	if(lag_count == 0) lag_on = 0;

	//static dynamic matrices (only include thrust predictions)
	A1_self << 1 , 0 , 0 , dt ,
	           0 , 1 , 0 ,  0 ,
	           0 , 0 , 1 ,  0 ,
	           0 , 0 , 0 ,  1 ;
	A2_self <<     0    ,     0    , 0.5*dt*dt ,
	               dt   ,     0    ,     0     ,
	               0    ,     dt   ,     0     ,
	               0    ,     0    ,    dt     ;
	At_self.block(0,0,4,4) << A1_self; //initialize most of what we can now
	At_self.block(4,4,3,3) << MatrixXd::Identity(3,3);
	At_self.block(4,0,3,4) << MatrixXd::Zero(3,4);
	Wt_self.block(4,3,3,3) << MatrixXd::Identity(3,3);
	Q_self = MatrixXd::Zero(7,6);
	Q_self(0,0) = w_roll*w_roll; Q_self(1,1) = w_pitch*w_pitch; Q_self(2,2) = w_th*w_th;
	Q_self(3,3) = Q_self(4,4) = Q_self(5,5) = w_change*w_change;
	Qyaw   = w_yaw;
	//matrices related to angular velocities will be created during the prediction step

	//matrix that applies the self state to the relative estimates (relative states are 7 dimentional)
	A << 0 , dt ,  0 ,  0 , 0 , 0 , 0 ,
	     0 ,  0 , dt ,  0 , 0 , 0 , 0 ,
	     0 ,  0 ,  0 , dt , 0 , 0 , 0 ,
	     0 ,  0 ,  0 ,  0 , 0 , 0 , 0 ,
	     0 ,  0 ,  0 ,  0 , 0 , 0 , 0 ,
	     0 ,  0 ,  0 ,  0 , 0 , 0 , 0 ,
	     0 ,  0 ,  0 ,  0 , 0 , 0 , 0 ;

	//this matrix applies the self state to velocity estimates
	A1 << 0 ,  0 ,  0 ,
	      0 ,  0 ,  0 ,
	      0 ,  0 ,  0 ,
	      0 ,  0 ,  0 ,
	      1 ,  0 ,  0 ,
	      0 ,  1 ,  0 ,
	      0 ,  0 ,  1 ,

	//observation models
	C_OF_self << 0, 1, 0, 0, 0, 0, 0,
	             0, 0, 1, 0, 0, 0, 0,
	R_OF_self << v_OF,  0  ,
	              0  , v_OF;
	C_Z_self  << 1, 0, 0, 0, 0, 0, 0;
	R_Z_self  << v_Z;
	//K matrices will be filled during the kalman filters

	//initialize self state estimate
	x_self << 0,0,0,0,0,0,0;
	P_self = MatrixXd::Identity(7,7)*(0.5*0.5);

	//the robot position starts uninitialized
	self_initialized = 0;
	z_old = 0; //this variable filters the height measurements

	//initialize vector with sensors used to update self estimate
	sensors_self = "";

}

//initialize an egomotion structure
egomotion* egomotion_init_structure(){

	egomotion* ego = new egomotion; //create structure (there should exist one structure for each estimated state)
	ego->vs = MatrixXd(3,MAX_STAMPS); //self velocity
	ego->xs = MatrixXd(3,MAX_STAMPS); //estimated state and covariance in the flying frame
	ego->Ps = new MatrixXd[MAX_STAMPS]; //the covariance needs to be initialized at the time of insertion
	ego->head = 0; //index where the next prediction will be saved

	return ego;

}
int counter = 0;
//egomotion predictions
void egomotion_predict_self()
{

	//check IMU data - no IMU data will invalidate the entire predticion
	if( (stamp_imu != stamp_imu_old) && (ros::Time::now().toSec() - imu_last_time <= g_dt_max) )
	{
		MatrixXd u(3,1);

		//get cosines and signs with compensations
		double cp = cos(roll + x_self(4)), sp = sin(roll + x_self(4)), ct = cos(pitch + x_self(5)), st = sin(pitch + x_self(5));

		//compensate thrust
		double F1 = F + x_self(6);

		//as long there are measurements and as long as those measurements are close to each other)
		//create actuation vector
		if( (stamp_thrust == stamp_thrust_old) && (ros::Time::now().toSec() - thrust_last_time > g_dt_max) )
			{u(0)=0; u(1)=0; u(2)=0; F1 = 0;}
		else
			{u << st*cp*F1, -sp*F1, ct*cp*F1; u(2) = u(2) - GRAVITY;} //egomotion vector

		//if landed we will fill a positive force sending us up
		if(u(2) < -5)
			{u(0)=0; u(1)=0; u(2)=0; F1 = 0; return;}

		//create new dynamics matrices
		MatrixXd B(3,3); //related to the compensation roll, pitch and thrust
		B << -st*sp*F1 , ct*cp*F1 , st*cp ,
		       -cp*F1  ,     0    ,  -sp  ,
		     -ct*sp*F1 , -st*cp*F1, ct*cp ;
		At_self.block(0,4,4,3) = A2_self*B;
		Wt_self.block(0,0,4,3) = A2_self*B;

		//perform the prediction
		xold_self = x_self; Pold_self = P_self;
		MatrixXd v1 = A1_self*x_self + A2_self*u;
		x_self.block(0,0,4,1) = v1;
		P_self = At_self*P_self*At_self.transpose() + Wt_self*Q_self*Wt_self.transpose();
		dP_self = P_self + Pold_self; dx_self = x_self - xold_self;

		//get ready for new measurements
		stamp_thrust_old = stamp_thrust; //measurement was consumed
		//since the imu measurement was not consumed in a predict, it does not get updated

	}

}

//egomotion updates
void egomotion_update_Z_self(double z)
{
	//filter sonar data
	if((z < 0.20) || (z > 3.0))
		return;
	if(self_initialized){
		if( (ros::Time::now().toSec() - timer_z) > 0.2)
	                self_initialized = 0;
		if(ABS(z - x_self(0)) > 0.35)
			return ;
		if(ABS(z - z_old) > 0.10)
			return;
	}

	//estimate with filtered sonar data
	MatrixXd R1 = C_Z_self*P_self*C_Z_self.transpose() + R_Z_self;
	MatrixXd z_v(1,1); z_v << z;
	K_Z_self = P_self*C_Z_self.transpose()*R1.inverse();
	x_self = x_self + K_Z_self*(z_v - C_Z_self*x_self);
	P_self = (eye7_self - K_Z_self*C_Z_self)*P_self;
	self_initialized = 1;
	z_old = z;
	timer_z = ros::Time::now().toSec();

}
void egomotion_update_OF_self(double vx, double vy) //NOTE: we assume these velocities to be in the flying frame
{

	MatrixXd R1 = C_OF_self*P_self*C_OF_self.transpose() + R_OF_self;
	MatrixXd of_v(2,1); of_v << vx, vy;
	K_OF_self = P_self*C_OF_self.transpose()*R1.inverse();
	x_self = x_self + K_OF_self*(of_v - C_OF_self*x_self);
	P_self = (eye7_self - K_OF_self*C_OF_self)*P_self;
	timer_of = ros::Time::now().toSec();

}

//convert to flying frame (some problems will occurr if the with bad roll and pitch)
void egomotion_convert_to_flying_frame(VectorXd& x, MatrixXd& P)
{
	//check IMU data - no IMU data will invalidate the entire operation (basically the object is assumed not to need a rotation)
	if( (stamp_imu != stamp_imu_old) || (ros::Time::now().toSec() - imu_last_time <= g_dt_max) ){

		//create the roll/pich matrix (WARNING: IMU errors are being compensated here - this might be unstable)
		geometry_msgs::Quaternion q = tf::createQuaternionMsgFromRollPitchYaw(roll + x_self(4),pitch + x_self(5),0);
		Matrix3d cRot=Eigen::Quaternion<double>(q.w,q.x,q.y,q.z).matrix();

		//extend matrix to cover x, y, z + yaw states
		Matrix4d cRot1;
		cRot1.block(0,0,3,3) = cRot;
		cRot1.block(0,3,3,1) << 0,0,0;
		cRot1.block(3,0,1,3) << 0,0,0;
		cRot1(3,3) = 1;

		//apply rotation matrix to the measurement / estimate. and its covariance (needs to be an (x,y,z) state)
		x = cRot1*x;
		P = cRot1*P*cRot1.transpose();
	}

}

//adds the egomotion prediction (should be the last predict to be made)
void egomotion_predict(egomotion* ego, VectorXd& x1, MatrixXd& P1){

	if(self_initialized == 0)
		return ;

	//check if there were IMU measurements
	double omega;
	if( (stamp_imu == stamp_imu_old) && (ros::Time::now().toSec() - imu_last_time > g_dt_max) )
		omega = 0;
	else
		omega = g_omega;

	//add egomotion to estimates
	VectorXd cr(7,1), dcr(7,1);
	cr<<g_dt*x1(1)*omega,-g_dt*x1(0)*omega,0,0,g_dt*x1(5)*omega,-g_dt*x1(4)*omega,0;
	dcr<<g_dt*x1(1),-g_dt*x1(0),0,0,g_dt*x1(5),-g_dt*x1(4),0;
	//x1 = x1 - A*x_self + cr;
	//P1 = P1 + A*P_self*A.transpose() + Qyaw*dcr*dcr.transpose();
	x1 = x1 - 0*A*x_self - 0*A1*dx_self.block(1,0,3,1) + cr;
	P1 = P1 + 0*A*P_self*A.transpose() + 0*A1*dP_self.block(1,1,3,3)*A1.transpose() + Qyaw*dcr*dcr.transpose();

	//saving measurments and states for lag purposes
	ego->vs.col(ego->head)=x_self;
	ego->xs.col(ego->head)=x1;
	ego->Ps[ego->head]=P1;
	ego->omegas[ego->head] = omega;
	ego->head=(ego->head+1)%MAX_STAMPS;
	if(ego->lag_count<=lag_count) //make sure we have enough egomotion measurements to account for the required lag
		ego->lag_count++;

	//get ready for new measurements
	stamp_imu_old = stamp_imu; //measurement was consumed
}

//adds the egomotion prediction (should be the last predict to be made)
void egomotion_predict_recover(egomotion* ego, VectorXd& x1, MatrixXd& P1, int ind){

	if( (ego->lag_count > lag_count) && (lag_on) ){ //if lag can already be computed

		//add egomotion to estimates
		double omega = ego->omegas[ind];
		VectorXd cr(6,1), dcr(6,1);
		cr<<g_dt*x1(1)*omega,-g_dt*x1(0)*omega,0,g_dt*x1(4)*omega,-g_dt*x1(3)*omega,0;
		dcr<<x1(1),-x1(0),0,x1(4),-x1(3),0;
		x1 = x1 - A*ego->vs.col((ind)%32) + cr;
		P1 = P1 + A*ego->Ps[ind]*A.transpose() + Qyaw*dcr*dcr.transpose();

		//re-update the lag list
		ego->xs.col( (ind + 1)%32 ) = x1;
		ego->Ps[ (ind + 1)%32 ] = P1;

	}

}

//get index of the estimate saved in the lag vector, that should be used to compesate for lag (-1 if lag can not be still compensated)
int egomotion_get_update_state(egomotion* ego){

	int ind_start = -1; //-1 means that lag can not be still compensated
	if( (ego->lag_count > lag_count) && (lag_on) ) //if lag can already be computed
	{
		if(ego->head >= lag_count) //be ware of the round robin list
			ind_start=ego->head - lag_count;
		else
			ind_start=MAX_STAMPS-lag_count+ego->head;
	}
	return ind_start;

}

//how mutch is the lag in the vector
int get_lag_count(){ return lag_count;}

//calbacks
void angle_callback(const sensor_msgs::Imu::ConstPtr& imu)
{
	//new input to be followed from this instant
	imu_last_time=ros::Time::now().toSec();

	//save data
	aux_x=imu->orientation.x;
	aux_y=imu->orientation.y;
	aux_z=imu->orientation.z;
	aux_w=imu->orientation.w;
	g_omega=imu->angular_velocity.z;

	//compute quadrotor roll and pitch
	roll=atan2(2*(aux_w*aux_x+aux_z*aux_y),(1-2*(aux_x*aux_x+aux_y*aux_y)));
	pitch=asin(2*(aux_w*aux_y-aux_x*aux_z));
	yaw=atan2(2*(aux_w*aux_z + aux_x*aux_y),(1 - 2*(aux_y*aux_y + aux_z*aux_z)));

	//signal new measurements (this is important to know if there is new rotations)
	stamp_imu++;
}
void control_callback(const asctec_hl_comm::mav_ctrl::ConstPtr& command)
{
	//new input to be followed from this instant
	thrust_last_time=ros::Time::now().toSec();
	
	//convert from thrust to acceleration
	F=((double)(command->z/robot_calib_slope) - robot_calib_bias/robot_calib_slope)/robot_mass;

	//signal new measurements (this is important to know that the controller is still on)
	stamp_thrust++;
}
void control_callback_px4(const mavros_msgs::AttitudeTarget::ConstPtr& command)
{
	//new input to be followed from this instant
	thrust_last_time=ros::Time::now().toSec();
	
	//convert from thrust to acceleration
	F=((double)(command->thrust/robot_calib_slope) - robot_calib_bias/robot_calib_slope)/robot_mass;

	//signal new measurements (this is important to know that the controller is still on)
	stamp_thrust++;
}

//generate egomotion ros message
quad_msgs::EstimateSingle* egomotion_get_ros_message(){

	//creating sensor list
	if( (ros::Time::now().toSec() - timer_z) <= 0.2)
		sensors_self = sensors_self + "z:";
	if( (ros::Time::now().toSec() - timer_of) <= 0.2)
		sensors_self = sensors_self + "of:";

	//fill estimate fields with the estimate results
	quad_msgs::Estimate s_self;
	s_self.position.x=0; s_self.position.y=0; s_self.position.z=x_self(0);
	s_self.velocity.x=x_self(1); s_self.velocity.y=x_self(2); s_self.velocity.z=x_self(3);
	s_self.perturbation.x=x_self(4); s_self.perturbation.y=x_self(5); s_self.perturbation.z=x_self(6);
	s_self.orientation.x=aux_x; s_self.orientation.y=aux_y; //WRNING: we assume orientation from imu is always related to the world frame (which is not the case)
	s_self.orientation.z=aux_z; s_self.orientation.w=aux_w;
	s_self.sensors.data = sensors_self;
	//reseting sensor list
	sensors_self = ""; //no sensors means that there was no sensor update performed during the last computation period

	//add estimate and time to the main message
	s_single.estimate = s_self;
	s_single.header.stamp = ros::Time::now();

	return &s_single;
}

//get roll, pitch, yaw
double get_self_roll() {return roll;}
double get_self_pitch() {return pitch;}
double get_self_yaw() {return yaw;}