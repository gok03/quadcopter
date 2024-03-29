/* Auto-generated by genmsg_cpp for file /home/ubuntu/ros/quad_control_rosbuild/quad_msgs/msg/TargetsWithCov.msg */
#ifndef QUAD_MSGS_MESSAGE_TARGETSWITHCOV_H
#define QUAD_MSGS_MESSAGE_TARGETSWITHCOV_H
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

#include "std_msgs/Header.h"
#include "quad_msgs/StateWithCov.h"

namespace quad_msgs
{
template <class ContainerAllocator>
struct TargetsWithCov_ {
  typedef TargetsWithCov_<ContainerAllocator> Type;

  TargetsWithCov_()
  : header()
  , targets()
  {
  }

  TargetsWithCov_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , targets(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::vector< ::quad_msgs::StateWithCov_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::quad_msgs::StateWithCov_<ContainerAllocator> >::other >  _targets_type;
  std::vector< ::quad_msgs::StateWithCov_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::quad_msgs::StateWithCov_<ContainerAllocator> >::other >  targets;


  typedef boost::shared_ptr< ::quad_msgs::TargetsWithCov_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::quad_msgs::TargetsWithCov_<ContainerAllocator>  const> ConstPtr;
}; // struct TargetsWithCov
typedef  ::quad_msgs::TargetsWithCov_<std::allocator<void> > TargetsWithCov;

typedef boost::shared_ptr< ::quad_msgs::TargetsWithCov> TargetsWithCovPtr;
typedef boost::shared_ptr< ::quad_msgs::TargetsWithCov const> TargetsWithCovConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::quad_msgs::TargetsWithCov_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::quad_msgs::TargetsWithCov_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace quad_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::quad_msgs::TargetsWithCov_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::quad_msgs::TargetsWithCov_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::quad_msgs::TargetsWithCov_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ce9af668335a6638d3822f57471a8465";
  }

  static const char* value(const  ::quad_msgs::TargetsWithCov_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xce9af668335a6638ULL;
  static const uint64_t static_value2 = 0xd3822f57471a8465ULL;
};

template<class ContainerAllocator>
struct DataType< ::quad_msgs::TargetsWithCov_<ContainerAllocator> > {
  static const char* value() 
  {
    return "quad_msgs/TargetsWithCov";
  }

  static const char* value(const  ::quad_msgs::TargetsWithCov_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::quad_msgs::TargetsWithCov_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
StateWithCov[] targets\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: quad_msgs/StateWithCov\n\
uint8 number_states\n\
float64[] states\n\
float64[] covariance\n\
\n\
";
  }

  static const char* value(const  ::quad_msgs::TargetsWithCov_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::quad_msgs::TargetsWithCov_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::quad_msgs::TargetsWithCov_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::quad_msgs::TargetsWithCov_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.targets);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TargetsWithCov_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::quad_msgs::TargetsWithCov_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::quad_msgs::TargetsWithCov_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "targets[]" << std::endl;
    for (size_t i = 0; i < v.targets.size(); ++i)
    {
      s << indent << "  targets[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::quad_msgs::StateWithCov_<ContainerAllocator> >::stream(s, indent + "    ", v.targets[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // QUAD_MSGS_MESSAGE_TARGETSWITHCOV_H

