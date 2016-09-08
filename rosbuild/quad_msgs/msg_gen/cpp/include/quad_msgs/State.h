/* Auto-generated by genmsg_cpp for file /home/ubuntu/ros/quad_control_rosbuild/quad_msgs/msg/State.msg */
#ifndef QUAD_MSGS_MESSAGE_STATE_H
#define QUAD_MSGS_MESSAGE_STATE_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "geometry_msgs/Point.h"
#include "geometry_msgs/Point.h"

namespace quad_msgs
{
template <class ContainerAllocator>
struct State_ {
  typedef State_<ContainerAllocator> Type;

  State_()
  : position()
  , velocity()
  {
  }

  State_(const ContainerAllocator& _alloc)
  : position(_alloc)
  , velocity(_alloc)
  {
  }

  typedef  ::geometry_msgs::Point_<ContainerAllocator>  _position_type;
   ::geometry_msgs::Point_<ContainerAllocator>  position;

  typedef  ::geometry_msgs::Point_<ContainerAllocator>  _velocity_type;
   ::geometry_msgs::Point_<ContainerAllocator>  velocity;


  typedef boost::shared_ptr< ::quad_msgs::State_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::quad_msgs::State_<ContainerAllocator>  const> ConstPtr;
}; // struct State
typedef  ::quad_msgs::State_<std::allocator<void> > State;

typedef boost::shared_ptr< ::quad_msgs::State> StatePtr;
typedef boost::shared_ptr< ::quad_msgs::State const> StateConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::quad_msgs::State_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::quad_msgs::State_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace quad_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::quad_msgs::State_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::quad_msgs::State_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::quad_msgs::State_<ContainerAllocator> > {
  static const char* value() 
  {
    return "589dbd8c358d253de2ab5441acd36a2b";
  }

  static const char* value(const  ::quad_msgs::State_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x589dbd8c358d253dULL;
  static const uint64_t static_value2 = 0xe2ab5441acd36a2bULL;
};

template<class ContainerAllocator>
struct DataType< ::quad_msgs::State_<ContainerAllocator> > {
  static const char* value() 
  {
    return "quad_msgs/State";
  }

  static const char* value(const  ::quad_msgs::State_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::quad_msgs::State_<ContainerAllocator> > {
  static const char* value() 
  {
    return "geometry_msgs/Point position\n\
geometry_msgs/Point velocity\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
";
  }

  static const char* value(const  ::quad_msgs::State_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::quad_msgs::State_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::quad_msgs::State_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.position);
    stream.next(m.velocity);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct State_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::quad_msgs::State_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::quad_msgs::State_<ContainerAllocator> & v) 
  {
    s << indent << "position: ";
s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "velocity: ";
s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.velocity);
  }
};


} // namespace message_operations
} // namespace ros

#endif // QUAD_MSGS_MESSAGE_STATE_H
