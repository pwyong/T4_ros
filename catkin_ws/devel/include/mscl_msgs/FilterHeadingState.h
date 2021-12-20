// Generated by gencpp from file mscl_msgs/FilterHeadingState.msg
// DO NOT EDIT!


#ifndef MSCL_MSGS_MESSAGE_FILTERHEADINGSTATE_H
#define MSCL_MSGS_MESSAGE_FILTERHEADINGSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mscl_msgs
{
template <class ContainerAllocator>
struct FilterHeadingState_
{
  typedef FilterHeadingState_<ContainerAllocator> Type;

  FilterHeadingState_()
    : heading_rad(0.0)
    , heading_uncertainty(0.0)
    , source(0)
    , status_flags(0)  {
    }
  FilterHeadingState_(const ContainerAllocator& _alloc)
    : heading_rad(0.0)
    , heading_uncertainty(0.0)
    , source(0)
    , status_flags(0)  {
  (void)_alloc;
    }



   typedef float _heading_rad_type;
  _heading_rad_type heading_rad;

   typedef float _heading_uncertainty_type;
  _heading_uncertainty_type heading_uncertainty;

   typedef uint16_t _source_type;
  _source_type source;

   typedef uint16_t _status_flags_type;
  _status_flags_type status_flags;





  typedef boost::shared_ptr< ::mscl_msgs::FilterHeadingState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mscl_msgs::FilterHeadingState_<ContainerAllocator> const> ConstPtr;

}; // struct FilterHeadingState_

typedef ::mscl_msgs::FilterHeadingState_<std::allocator<void> > FilterHeadingState;

typedef boost::shared_ptr< ::mscl_msgs::FilterHeadingState > FilterHeadingStatePtr;
typedef boost::shared_ptr< ::mscl_msgs::FilterHeadingState const> FilterHeadingStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mscl_msgs::FilterHeadingState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mscl_msgs::FilterHeadingState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mscl_msgs::FilterHeadingState_<ContainerAllocator1> & lhs, const ::mscl_msgs::FilterHeadingState_<ContainerAllocator2> & rhs)
{
  return lhs.heading_rad == rhs.heading_rad &&
    lhs.heading_uncertainty == rhs.heading_uncertainty &&
    lhs.source == rhs.source &&
    lhs.status_flags == rhs.status_flags;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mscl_msgs::FilterHeadingState_<ContainerAllocator1> & lhs, const ::mscl_msgs::FilterHeadingState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mscl_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mscl_msgs::FilterHeadingState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mscl_msgs::FilterHeadingState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mscl_msgs::FilterHeadingState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mscl_msgs::FilterHeadingState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mscl_msgs::FilterHeadingState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mscl_msgs::FilterHeadingState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mscl_msgs::FilterHeadingState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ca75e8c156e8551037af1d0f6d896ef2";
  }

  static const char* value(const ::mscl_msgs::FilterHeadingState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xca75e8c156e85510ULL;
  static const uint64_t static_value2 = 0x37af1d0f6d896ef2ULL;
};

template<class ContainerAllocator>
struct DataType< ::mscl_msgs::FilterHeadingState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mscl_msgs/FilterHeadingState";
  }

  static const char* value(const ::mscl_msgs::FilterHeadingState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mscl_msgs::FilterHeadingState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 heading_rad\n"
"\n"
"float32 heading_uncertainty\n"
"\n"
"uint16 source\n"
"\n"
"uint16 status_flags\n"
;
  }

  static const char* value(const ::mscl_msgs::FilterHeadingState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mscl_msgs::FilterHeadingState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.heading_rad);
      stream.next(m.heading_uncertainty);
      stream.next(m.source);
      stream.next(m.status_flags);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FilterHeadingState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mscl_msgs::FilterHeadingState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mscl_msgs::FilterHeadingState_<ContainerAllocator>& v)
  {
    s << indent << "heading_rad: ";
    Printer<float>::stream(s, indent + "  ", v.heading_rad);
    s << indent << "heading_uncertainty: ";
    Printer<float>::stream(s, indent + "  ", v.heading_uncertainty);
    s << indent << "source: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.source);
    s << indent << "status_flags: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.status_flags);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MSCL_MSGS_MESSAGE_FILTERHEADINGSTATE_H