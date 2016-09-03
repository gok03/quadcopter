/* Auto-generated by genmsg_cpp for file /home/ubuntu/ros/quad_control_rosbuild/quad_msgs/msg/StateWithCov.msg */
#ifndef QUAD_MSGS_MESSAGE_STATEWITHCOV_H
#define QUAD_MSGS_MESSAGE_STATEWITHCOV_H
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


namespace quad_msgs
{
template <class ContainerAllocator>
struct StateWithCov_ {
  typedef StateWithCov_<ContainerAllocator> Type;

  StateWithCov_()
  : number_states(0)
  , states()
  , covariance()
  {
  }

  StateWithCov_(const ContainerAllocator& _alloc)
  : number_states(0)
  , states(_alloc)
  , covariance(_alloc)
  {
  }

  typedef uint8_t _number_states_type;
  uint8_t number_states;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _states_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  states;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _covariance_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  covariance;


  typedef boost::shared_ptr< ::quad_msgs::StateWithCov_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::quad_msgs::StateWithCov_<ContainerAllocator>  const> ConstPtr;
}; // struct StateWithCov
typedef  ::quad_msgs::StateWithCov_<std::allocator<void> > StateWithCov;

typedef boost::shared_ptr< ::quad_msgs::StateWithCov> StateWithCovPtr;
typedef boost::shared_ptr< ::quad_msgs::StateWithCov const> StateWithCovConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::quad_msgs::StateWithCov_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::quad_msgs::StateWithCov_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace quad_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::quad_msgs::StateWithCov_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::quad_msgs::StateWithCov_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::quad_msgs::StateWithCov_<ContainerAllocator> > {
  static const char* value() 
  {
    return "41fa857016d2ec7bb67ef495b90c109e";
  }

  static const char* value(const  ::quad_msgs::StateWithCov_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x41fa857016d2ec7bULL;
  static const uint64_t static_value2 = 0xb67ef495b90c109eULL;
};

template<class ContainerAllocator>
struct DataType< ::quad_msgs::StateWithCov_<ContainerAllocator> > {
  static const char* value() 
  {
    return "quad_msgs/StateWithCov";
  }

  static const char* value(const  ::quad_msgs::StateWithCov_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::quad_msgs::StateWithCov_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint8 number_states\n\
float64[] states\n\
float64[] covariance\n\
\n\
";
  }

  static const char* value(const  ::quad_msgs::StateWithCov_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::quad_msgs::StateWithCov_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.number_states);
    stream.next(m.states);
    stream.next(m.covariance);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct StateWithCov_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::quad_msgs::StateWithCov_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::quad_msgs::StateWithCov_<ContainerAllocator> & v) 
  {
    s << indent << "number_states: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.number_states);
    s << indent << "states[]" << std::endl;
    for (size_t i = 0; i < v.states.size(); ++i)
    {
      s << indent << "  states[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.states[i]);
    }
    s << indent << "covariance[]" << std::endl;
    for (size_t i = 0; i < v.covariance.size(); ++i)
    {
      s << indent << "  covariance[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.covariance[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // QUAD_MSGS_MESSAGE_STATEWITHCOV_H

