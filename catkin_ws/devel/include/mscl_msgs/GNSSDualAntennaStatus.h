// Generated by gencpp from file mscl_msgs/GNSSDualAntennaStatus.msg
// DO NOT EDIT!


#ifndef MSCL_MSGS_MESSAGE_GNSSDUALANTENNASTATUS_H
#define MSCL_MSGS_MESSAGE_GNSSDUALANTENNASTATUS_H


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
struct GNSSDualAntennaStatus_
{
  typedef GNSSDualAntennaStatus_<ContainerAllocator> Type;

  GNSSDualAntennaStatus_()
    : gps_tow(0.0)
    , heading(0.0)
    , heading_uncertainty(0.0)
    , fix_type(0)
    , rcv_1_valid(0)
    , rcv_2_valid(0)
    , antenna_offsets_valid(0)  {
    }
  GNSSDualAntennaStatus_(const ContainerAllocator& _alloc)
    : gps_tow(0.0)
    , heading(0.0)
    , heading_uncertainty(0.0)
    , fix_type(0)
    , rcv_1_valid(0)
    , rcv_2_valid(0)
    , antenna_offsets_valid(0)  {
  (void)_alloc;
    }



   typedef float _gps_tow_type;
  _gps_tow_type gps_tow;

   typedef float _heading_type;
  _heading_type heading;

   typedef float _heading_uncertainty_type;
  _heading_uncertainty_type heading_uncertainty;

   typedef uint8_t _fix_type_type;
  _fix_type_type fix_type;

   typedef uint8_t _rcv_1_valid_type;
  _rcv_1_valid_type rcv_1_valid;

   typedef uint8_t _rcv_2_valid_type;
  _rcv_2_valid_type rcv_2_valid;

   typedef uint8_t _antenna_offsets_valid_type;
  _antenna_offsets_valid_type antenna_offsets_valid;





  typedef boost::shared_ptr< ::mscl_msgs::GNSSDualAntennaStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mscl_msgs::GNSSDualAntennaStatus_<ContainerAllocator> const> ConstPtr;

}; // struct GNSSDualAntennaStatus_

typedef ::mscl_msgs::GNSSDualAntennaStatus_<std::allocator<void> > GNSSDualAntennaStatus;

typedef boost::shared_ptr< ::mscl_msgs::GNSSDualAntennaStatus > GNSSDualAntennaStatusPtr;
typedef boost::shared_ptr< ::mscl_msgs::GNSSDualAntennaStatus const> GNSSDualAntennaStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mscl_msgs::GNSSDualAntennaStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mscl_msgs::GNSSDualAntennaStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mscl_msgs::GNSSDualAntennaStatus_<ContainerAllocator1> & lhs, const ::mscl_msgs::GNSSDualAntennaStatus_<ContainerAllocator2> & rhs)
{
  return lhs.gps_tow == rhs.gps_tow &&
    lhs.heading == rhs.heading &&
    lhs.heading_uncertainty == rhs.heading_uncertainty &&
    lhs.fix_type == rhs.fix_type &&
    lhs.rcv_1_valid == rhs.rcv_1_valid &&
    lhs.rcv_2_valid == rhs.rcv_2_valid &&
    lhs.antenna_offsets_valid == rhs.antenna_offsets_valid;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mscl_msgs::GNSSDualAntennaStatus_<ContainerAllocator1> & lhs, const ::mscl_msgs::GNSSDualAntennaStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mscl_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mscl_msgs::GNSSDualAntennaStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mscl_msgs::GNSSDualAntennaStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mscl_msgs::GNSSDualAntennaStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mscl_msgs::GNSSDualAntennaStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mscl_msgs::GNSSDualAntennaStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mscl_msgs::GNSSDualAntennaStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mscl_msgs::GNSSDualAntennaStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "efecf4f9bdf572f04f6f06ccc9c1095a";
  }

  static const char* value(const ::mscl_msgs::GNSSDualAntennaStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xefecf4f9bdf572f0ULL;
  static const uint64_t static_value2 = 0x4f6f06ccc9c1095aULL;
};

template<class ContainerAllocator>
struct DataType< ::mscl_msgs::GNSSDualAntennaStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mscl_msgs/GNSSDualAntennaStatus";
  }

  static const char* value(const ::mscl_msgs::GNSSDualAntennaStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mscl_msgs::GNSSDualAntennaStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 gps_tow\n"
"float32 heading\n"
"float32 heading_uncertainty\n"
"uint8   fix_type\n"
"uint8   rcv_1_valid\n"
"uint8   rcv_2_valid\n"
"uint8   antenna_offsets_valid\n"
;
  }

  static const char* value(const ::mscl_msgs::GNSSDualAntennaStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mscl_msgs::GNSSDualAntennaStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.gps_tow);
      stream.next(m.heading);
      stream.next(m.heading_uncertainty);
      stream.next(m.fix_type);
      stream.next(m.rcv_1_valid);
      stream.next(m.rcv_2_valid);
      stream.next(m.antenna_offsets_valid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GNSSDualAntennaStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mscl_msgs::GNSSDualAntennaStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mscl_msgs::GNSSDualAntennaStatus_<ContainerAllocator>& v)
  {
    s << indent << "gps_tow: ";
    Printer<float>::stream(s, indent + "  ", v.gps_tow);
    s << indent << "heading: ";
    Printer<float>::stream(s, indent + "  ", v.heading);
    s << indent << "heading_uncertainty: ";
    Printer<float>::stream(s, indent + "  ", v.heading_uncertainty);
    s << indent << "fix_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fix_type);
    s << indent << "rcv_1_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rcv_1_valid);
    s << indent << "rcv_2_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rcv_2_valid);
    s << indent << "antenna_offsets_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.antenna_offsets_valid);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MSCL_MSGS_MESSAGE_GNSSDUALANTENNASTATUS_H