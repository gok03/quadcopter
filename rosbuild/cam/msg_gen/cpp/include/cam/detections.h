/* Auto-generated by genmsg_cpp for file /home/pedro/quadcopter/rosbuild/cam/msg/detections.msg */
#ifndef CAM_MESSAGE_DETECTIONS_H
#define CAM_MESSAGE_DETECTIONS_H
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

namespace cam
{
template <class ContainerAllocator>
struct detections_ {
  typedef detections_<ContainerAllocator> Type;

  detections_()
  : header()
  , pos_x()
  , pos_y()
  , size()
  , blob_count(0)
  {
  }

  detections_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , pos_x(_alloc)
  , pos_y(_alloc)
  , size(_alloc)
  , blob_count(0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _pos_x_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  pos_x;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _pos_y_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  pos_y;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _size_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  size;

  typedef int64_t _blob_count_type;
  int64_t blob_count;


  typedef boost::shared_ptr< ::cam::detections_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cam::detections_<ContainerAllocator>  const> ConstPtr;
}; // struct detections
typedef  ::cam::detections_<std::allocator<void> > detections;

typedef boost::shared_ptr< ::cam::detections> detectionsPtr;
typedef boost::shared_ptr< ::cam::detections const> detectionsConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::cam::detections_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::cam::detections_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace cam

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::cam::detections_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::cam::detections_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::cam::detections_<ContainerAllocator> > {
  static const char* value() 
  {
    return "9f8d0da318389e02fa0ae192e003123c";
  }

  static const char* value(const  ::cam::detections_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x9f8d0da318389e02ULL;
  static const uint64_t static_value2 = 0xfa0ae192e003123cULL;
};

template<class ContainerAllocator>
struct DataType< ::cam::detections_<ContainerAllocator> > {
  static const char* value() 
  {
    return "cam/detections";
  }

  static const char* value(const  ::cam::detections_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::cam::detections_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
float32[] pos_x\n\
float32[] pos_y\n\
float32[] size\n\
int64 blob_count\n\
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
";
  }

  static const char* value(const  ::cam::detections_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::cam::detections_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::cam::detections_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::cam::detections_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.pos_x);
    stream.next(m.pos_y);
    stream.next(m.size);
    stream.next(m.blob_count);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct detections_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cam::detections_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::cam::detections_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pos_x[]" << std::endl;
    for (size_t i = 0; i < v.pos_x.size(); ++i)
    {
      s << indent << "  pos_x[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.pos_x[i]);
    }
    s << indent << "pos_y[]" << std::endl;
    for (size_t i = 0; i < v.pos_y.size(); ++i)
    {
      s << indent << "  pos_y[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.pos_y[i]);
    }
    s << indent << "size[]" << std::endl;
    for (size_t i = 0; i < v.size.size(); ++i)
    {
      s << indent << "  size[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.size[i]);
    }
    s << indent << "blob_count: ";
    Printer<int64_t>::stream(s, indent + "  ", v.blob_count);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CAM_MESSAGE_DETECTIONS_H

