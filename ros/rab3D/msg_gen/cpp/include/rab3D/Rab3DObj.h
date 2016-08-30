/* Auto-generated by genmsg_cpp for file /home/pedro/ros/rab3D/msg/Rab3DObj.msg */
#ifndef RAB3D_MESSAGE_RAB3DOBJ_H
#define RAB3D_MESSAGE_RAB3DOBJ_H
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


namespace rab3D
{
template <class ContainerAllocator>
struct Rab3DObj_ {
  typedef Rab3DObj_<ContainerAllocator> Type;

  Rab3DObj_()
  : slot(0)
  , code(0)
  , adc1(0)
  , adc2(0)
  , adc3(0)
  , adc4(0)
  , adc5(0)
  , adc6(0)
  , adc7(0)
  , adc8(0)
  , adc9(0)
  , adc10(0)
  , adc11(0)
  , adc12(0)
  , adc13(0)
  , adc14(0)
  , adc15(0)
  , adc16(0)
  {
  }

  Rab3DObj_(const ContainerAllocator& _alloc)
  : slot(0)
  , code(0)
  , adc1(0)
  , adc2(0)
  , adc3(0)
  , adc4(0)
  , adc5(0)
  , adc6(0)
  , adc7(0)
  , adc8(0)
  , adc9(0)
  , adc10(0)
  , adc11(0)
  , adc12(0)
  , adc13(0)
  , adc14(0)
  , adc15(0)
  , adc16(0)
  {
  }

  typedef int16_t _slot_type;
  int16_t slot;

  typedef int32_t _code_type;
  int32_t code;

  typedef int16_t _adc1_type;
  int16_t adc1;

  typedef int16_t _adc2_type;
  int16_t adc2;

  typedef int16_t _adc3_type;
  int16_t adc3;

  typedef int16_t _adc4_type;
  int16_t adc4;

  typedef int16_t _adc5_type;
  int16_t adc5;

  typedef int16_t _adc6_type;
  int16_t adc6;

  typedef int16_t _adc7_type;
  int16_t adc7;

  typedef int16_t _adc8_type;
  int16_t adc8;

  typedef int16_t _adc9_type;
  int16_t adc9;

  typedef int16_t _adc10_type;
  int16_t adc10;

  typedef int16_t _adc11_type;
  int16_t adc11;

  typedef int16_t _adc12_type;
  int16_t adc12;

  typedef int16_t _adc13_type;
  int16_t adc13;

  typedef int16_t _adc14_type;
  int16_t adc14;

  typedef int16_t _adc15_type;
  int16_t adc15;

  typedef int16_t _adc16_type;
  int16_t adc16;


  typedef boost::shared_ptr< ::rab3D::Rab3DObj_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rab3D::Rab3DObj_<ContainerAllocator>  const> ConstPtr;
}; // struct Rab3DObj
typedef  ::rab3D::Rab3DObj_<std::allocator<void> > Rab3DObj;

typedef boost::shared_ptr< ::rab3D::Rab3DObj> Rab3DObjPtr;
typedef boost::shared_ptr< ::rab3D::Rab3DObj const> Rab3DObjConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::rab3D::Rab3DObj_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::rab3D::Rab3DObj_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace rab3D

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rab3D::Rab3DObj_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rab3D::Rab3DObj_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rab3D::Rab3DObj_<ContainerAllocator> > {
  static const char* value() 
  {
    return "24f96da6018bfad44f2cacae52c1832b";
  }

  static const char* value(const  ::rab3D::Rab3DObj_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x24f96da6018bfad4ULL;
  static const uint64_t static_value2 = 0x4f2cacae52c1832bULL;
};

template<class ContainerAllocator>
struct DataType< ::rab3D::Rab3DObj_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rab3D/Rab3DObj";
  }

  static const char* value(const  ::rab3D::Rab3DObj_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rab3D::Rab3DObj_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int16 slot\n\
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

  static const char* value(const  ::rab3D::Rab3DObj_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::rab3D::Rab3DObj_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rab3D::Rab3DObj_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.slot);
    stream.next(m.code);
    stream.next(m.adc1);
    stream.next(m.adc2);
    stream.next(m.adc3);
    stream.next(m.adc4);
    stream.next(m.adc5);
    stream.next(m.adc6);
    stream.next(m.adc7);
    stream.next(m.adc8);
    stream.next(m.adc9);
    stream.next(m.adc10);
    stream.next(m.adc11);
    stream.next(m.adc12);
    stream.next(m.adc13);
    stream.next(m.adc14);
    stream.next(m.adc15);
    stream.next(m.adc16);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Rab3DObj_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rab3D::Rab3DObj_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::rab3D::Rab3DObj_<ContainerAllocator> & v) 
  {
    s << indent << "slot: ";
    Printer<int16_t>::stream(s, indent + "  ", v.slot);
    s << indent << "code: ";
    Printer<int32_t>::stream(s, indent + "  ", v.code);
    s << indent << "adc1: ";
    Printer<int16_t>::stream(s, indent + "  ", v.adc1);
    s << indent << "adc2: ";
    Printer<int16_t>::stream(s, indent + "  ", v.adc2);
    s << indent << "adc3: ";
    Printer<int16_t>::stream(s, indent + "  ", v.adc3);
    s << indent << "adc4: ";
    Printer<int16_t>::stream(s, indent + "  ", v.adc4);
    s << indent << "adc5: ";
    Printer<int16_t>::stream(s, indent + "  ", v.adc5);
    s << indent << "adc6: ";
    Printer<int16_t>::stream(s, indent + "  ", v.adc6);
    s << indent << "adc7: ";
    Printer<int16_t>::stream(s, indent + "  ", v.adc7);
    s << indent << "adc8: ";
    Printer<int16_t>::stream(s, indent + "  ", v.adc8);
    s << indent << "adc9: ";
    Printer<int16_t>::stream(s, indent + "  ", v.adc9);
    s << indent << "adc10: ";
    Printer<int16_t>::stream(s, indent + "  ", v.adc10);
    s << indent << "adc11: ";
    Printer<int16_t>::stream(s, indent + "  ", v.adc11);
    s << indent << "adc12: ";
    Printer<int16_t>::stream(s, indent + "  ", v.adc12);
    s << indent << "adc13: ";
    Printer<int16_t>::stream(s, indent + "  ", v.adc13);
    s << indent << "adc14: ";
    Printer<int16_t>::stream(s, indent + "  ", v.adc14);
    s << indent << "adc15: ";
    Printer<int16_t>::stream(s, indent + "  ", v.adc15);
    s << indent << "adc16: ";
    Printer<int16_t>::stream(s, indent + "  ", v.adc16);
  }
};


} // namespace message_operations
} // namespace ros

#endif // RAB3D_MESSAGE_RAB3DOBJ_H

