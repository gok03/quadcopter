/* Auto-generated by genmsg_cpp for file /home/pedro/ros/laser/msg/Attitude.msg */
#ifndef LASER_MESSAGE_ATTITUDE_H
#define LASER_MESSAGE_ATTITUDE_H
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


namespace laser
{
template <class ContainerAllocator>
struct Attitude_ {
  typedef Attitude_<ContainerAllocator> Type;

  Attitude_()
  : yaw(0.0)
  , pitch(0.0)
  , roll(0.0)
  {
  }

  Attitude_(const ContainerAllocator& _alloc)
  : yaw(0.0)
  , pitch(0.0)
  , roll(0.0)
  {
  }

  typedef double _yaw_type;
  double yaw;

  typedef double _pitch_type;
  double pitch;

  typedef double _roll_type;
  double roll;


  typedef boost::shared_ptr< ::laser::Attitude_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::laser::Attitude_<ContainerAllocator>  const> ConstPtr;
}; // struct Attitude
typedef  ::laser::Attitude_<std::allocator<void> > Attitude;

typedef boost::shared_ptr< ::laser::Attitude> AttitudePtr;
typedef boost::shared_ptr< ::laser::Attitude const> AttitudeConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::laser::Attitude_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::laser::Attitude_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace laser

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::laser::Attitude_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::laser::Attitude_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::laser::Attitude_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b6483fb20acb1cba981c486a35a1bdbd";
  }

  static const char* value(const  ::laser::Attitude_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb6483fb20acb1cbaULL;
  static const uint64_t static_value2 = 0x981c486a35a1bdbdULL;
};

template<class ContainerAllocator>
struct DataType< ::laser::Attitude_<ContainerAllocator> > {
  static const char* value() 
  {
    return "laser/Attitude";
  }

  static const char* value(const  ::laser::Attitude_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::laser::Attitude_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# Yaw [-pi .. pi] (0 = neutral)\n\
float64 yaw\n\
# Pitch [-pi/4 .. pi/4] (0 = neutral)\n\
float64 pitch\n\
# Roll  [-pi/4 .. pi/4] (0 = neutral)\n\
float64 roll\n\
\n\
";
  }

  static const char* value(const  ::laser::Attitude_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::laser::Attitude_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::laser::Attitude_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.yaw);
    stream.next(m.pitch);
    stream.next(m.roll);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Attitude_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::laser::Attitude_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::laser::Attitude_<ContainerAllocator> & v) 
  {
    s << indent << "yaw: ";
    Printer<double>::stream(s, indent + "  ", v.yaw);
    s << indent << "pitch: ";
    Printer<double>::stream(s, indent + "  ", v.pitch);
    s << indent << "roll: ";
    Printer<double>::stream(s, indent + "  ", v.roll);
  }
};


} // namespace message_operations
} // namespace ros

#endif // LASER_MESSAGE_ATTITUDE_H

