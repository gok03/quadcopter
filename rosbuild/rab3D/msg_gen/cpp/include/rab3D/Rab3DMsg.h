/* Auto-generated by genmsg_cpp for file /home/pedro/ros/rab3D/msg/Rab3DMsg.msg */
#ifndef RAB3D_MESSAGE_RAB3DMSG_H
#define RAB3D_MESSAGE_RAB3DMSG_H
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
#include "rab3D/Rab3DObj.h"

namespace rab3D
{
template <class ContainerAllocator>
struct Rab3DMsg_ {
  typedef Rab3DMsg_<ContainerAllocator> Type;

  Rab3DMsg_()
  : header()
  , spi1_miss(0)
  , spi2_miss(0)
  , uart_miss(0)
  , objects()
  {
  }

  Rab3DMsg_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , spi1_miss(0)
  , spi2_miss(0)
  , uart_miss(0)
  , objects(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef int8_t _spi1_miss_type;
  int8_t spi1_miss;

  typedef int8_t _spi2_miss_type;
  int8_t spi2_miss;

  typedef int8_t _uart_miss_type;
  int8_t uart_miss;

  typedef std::vector< ::rab3D::Rab3DObj_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::rab3D::Rab3DObj_<ContainerAllocator> >::other >  _objects_type;
  std::vector< ::rab3D::Rab3DObj_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::rab3D::Rab3DObj_<ContainerAllocator> >::other >  objects;


  typedef boost::shared_ptr< ::rab3D::Rab3DMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rab3D::Rab3DMsg_<ContainerAllocator>  const> ConstPtr;
}; // struct Rab3DMsg
typedef  ::rab3D::Rab3DMsg_<std::allocator<void> > Rab3DMsg;

typedef boost::shared_ptr< ::rab3D::Rab3DMsg> Rab3DMsgPtr;
typedef boost::shared_ptr< ::rab3D::Rab3DMsg const> Rab3DMsgConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::rab3D::Rab3DMsg_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::rab3D::Rab3DMsg_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace rab3D

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rab3D::Rab3DMsg_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rab3D::Rab3DMsg_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rab3D::Rab3DMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c50719e217d7b85248e8bb552deaaa75";
  }

  static const char* value(const  ::rab3D::Rab3DMsg_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xc50719e217d7b852ULL;
  static const uint64_t static_value2 = 0x48e8bb552deaaa75ULL;
};

template<class ContainerAllocator>
struct DataType< ::rab3D::Rab3DMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rab3D/Rab3DMsg";
  }

  static const char* value(const  ::rab3D::Rab3DMsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rab3D::Rab3DMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
\n\
int8 spi1_miss\n\
int8 spi2_miss\n\
int8 uart_miss	\n\
Rab3DObj[] objects\n\
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
MSG: rab3D/Rab3DObj\n\
int16 slot\n\
int32 code\n\
int16 adc1\n\
int16 adc2\n\
int16 adc3\n\
int16 adc4\n\
int16 adc5\n\
int16 adc6\n\
int16 adc7\n\
int16 adc8\n\
int16 adc9\n\
int16 adc10\n\
int16 adc11\n\
int16 adc12\n\
int16 adc13\n\
int16 adc14\n\
int16 adc15\n\
int16 adc16\n\
\n\
\n\
\n\
";
  }

  static const char* value(const  ::rab3D::Rab3DMsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::rab3D::Rab3DMsg_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::rab3D::Rab3DMsg_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rab3D::Rab3DMsg_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.spi1_miss);
    stream.next(m.spi2_miss);
    stream.next(m.uart_miss);
    stream.next(m.objects);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Rab3DMsg_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rab3D::Rab3DMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::rab3D::Rab3DMsg_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "spi1_miss: ";
    Printer<int8_t>::stream(s, indent + "  ", v.spi1_miss);
    s << indent << "spi2_miss: ";
    Printer<int8_t>::stream(s, indent + "  ", v.spi2_miss);
    s << indent << "uart_miss: ";
    Printer<int8_t>::stream(s, indent + "  ", v.uart_miss);
    s << indent << "objects[]" << std::endl;
    for (size_t i = 0; i < v.objects.size(); ++i)
    {
      s << indent << "  objects[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::rab3D::Rab3DObj_<ContainerAllocator> >::stream(s, indent + "    ", v.objects[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // RAB3D_MESSAGE_RAB3DMSG_H

