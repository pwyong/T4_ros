// Generated by gencpp from file ros_mscl/GetSensor2VehicleTransformationResponse.msg
// DO NOT EDIT!


#ifndef ROS_MSCL_MESSAGE_GETSENSOR2VEHICLETRANSFORMATIONRESPONSE_H
#define ROS_MSCL_MESSAGE_GETSENSOR2VEHICLETRANSFORMATIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Quaternion.h>

namespace ros_mscl
{
template <class ContainerAllocator>
struct GetSensor2VehicleTransformationResponse_
{
  typedef GetSensor2VehicleTransformationResponse_<ContainerAllocator> Type;

  GetSensor2VehicleTransformationResponse_()
    : offset()
    , rotation()
    , success(false)  {
    }
  GetSensor2VehicleTransformationResponse_(const ContainerAllocator& _alloc)
    : offset(_alloc)
    , rotation(_alloc)
    , success(false)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _offset_type;
  _offset_type offset;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _rotation_type;
  _rotation_type rotation;

   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::ros_mscl::GetSensor2VehicleTransformationResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_mscl::GetSensor2VehicleTransformationResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetSensor2VehicleTransformationResponse_

typedef ::ros_mscl::GetSensor2VehicleTransformationResponse_<std::allocator<void> > GetSensor2VehicleTransformationResponse;

typedef boost::shared_ptr< ::ros_mscl::GetSensor2VehicleTransformationResponse > GetSensor2VehicleTransformationResponsePtr;
typedef boost::shared_ptr< ::ros_mscl::GetSensor2VehicleTransformationResponse const> GetSensor2VehicleTransformationResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_mscl::GetSensor2VehicleTransformationResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_mscl::GetSensor2VehicleTransformationResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_mscl::GetSensor2VehicleTransformationResponse_<ContainerAllocator1> & lhs, const ::ros_mscl::GetSensor2VehicleTransformationResponse_<ContainerAllocator2> & rhs)
{
  return lhs.offset == rhs.offset &&
    lhs.rotation == rhs.rotation &&
    lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_mscl::GetSensor2VehicleTransformationResponse_<ContainerAllocator1> & lhs, const ::ros_mscl::GetSensor2VehicleTransformationResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_mscl

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ros_mscl::GetSensor2VehicleTransformationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_mscl::GetSensor2VehicleTransformationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_mscl::GetSensor2VehicleTransformationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_mscl::GetSensor2VehicleTransformationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_mscl::GetSensor2VehicleTransformationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_mscl::GetSensor2VehicleTransformationResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_mscl::GetSensor2VehicleTransformationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "004f75cd783f40825cb5e1db7049f127";
  }

  static const char* value(const ::ros_mscl::GetSensor2VehicleTransformationResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x004f75cd783f4082ULL;
  static const uint64_t static_value2 = 0x5cb5e1db7049f127ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_mscl::GetSensor2VehicleTransformationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_mscl/GetSensor2VehicleTransformationResponse";
  }

  static const char* value(const ::ros_mscl::GetSensor2VehicleTransformationResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_mscl::GetSensor2VehicleTransformationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Vector3 offset\n"
"geometry_msgs/Quaternion rotation\n"
"bool success\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::ros_mscl::GetSensor2VehicleTransformationResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_mscl::GetSensor2VehicleTransformationResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.offset);
      stream.next(m.rotation);
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetSensor2VehicleTransformationResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_mscl::GetSensor2VehicleTransformationResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_mscl::GetSensor2VehicleTransformationResponse_<ContainerAllocator>& v)
  {
    s << indent << "offset: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.offset);
    s << indent << "rotation: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.rotation);
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_MSCL_MESSAGE_GETSENSOR2VEHICLETRANSFORMATIONRESPONSE_H
