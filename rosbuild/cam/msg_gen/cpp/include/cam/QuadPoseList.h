/* Auto-generated by genmsg_cpp for file /home/pedro/quadcopter/rosbuild/cam/msg/QuadPoseList.msg */
#ifndef CAM_MESSAGE_QUADPOSELIST_H
#define CAM_MESSAGE_QUADPOSELIST_H
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
#include "cam/QuadPose.h"

namespace cam
{
template <class ContainerAllocator>
struct QuadPoseList_ {
  typedef QuadPoseList_<ContainerAllocator> Type;

  QuadPoseList_()
  : header()
  , poses()
  {
  }

  QuadPoseList_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , poses(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::vector< ::cam::QuadPose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::cam::QuadPose_<ContainerAllocator> >::other >  _poses_type;
  std::vector< ::cam::QuadPose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::cam::QuadPose_<ContainerAllocator> >::other >  poses;


  typedef boost::shared_ptr< ::cam::QuadPoseList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cam::QuadPoseList_<ContainerAllocator>  const> ConstPtr;
}; // struct QuadPoseList
typedef  ::cam::QuadPoseList_<std::allocator<void> > QuadPoseList;

typedef boost::shared_ptr< ::cam::QuadPoseList> QuadPoseListPtr;
typedef boost::shared_ptr< ::cam::QuadPoseList const> QuadPoseListConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::cam::QuadPoseList_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::cam::QuadPoseList_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace cam

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::cam::QuadPoseList_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::cam::QuadPoseList_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::cam::QuadPoseList_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e14cd22ab2349681fc355becb7328751";
  }

  static const char* value(const  ::cam::QuadPoseList_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe14cd22ab2349681ULL;
  static const uint64_t static_value2 = 0xfc355becb7328751ULL;
};

template<class ContainerAllocator>
struct DataType< ::cam::QuadPoseList_<ContainerAllocator> > {
  static const char* value() 
  {
    return "cam/QuadPoseList";
  }

  static const char* value(const  ::cam::QuadPoseList_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::cam::QuadPoseList_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
QuadPose[] poses\n\
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
MSG: cam/QuadPose\n\
string name\n\
geometry_msgs/Point position\n\
geometry_msgs/Quaternion orientation\n\
int8 pose_updated\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
";
  }

  static const char* value(const  ::cam::QuadPoseList_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::cam::QuadPoseList_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::cam::QuadPoseList_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::cam::QuadPoseList_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.poses);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct QuadPoseList_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cam::QuadPoseList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::cam::QuadPoseList_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "poses[]" << std::endl;
    for (size_t i = 0; i < v.poses.size(); ++i)
    {
      s << indent << "  poses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::cam::QuadPose_<ContainerAllocator> >::stream(s, indent + "    ", v.poses[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // CAM_MESSAGE_QUADPOSELIST_H

