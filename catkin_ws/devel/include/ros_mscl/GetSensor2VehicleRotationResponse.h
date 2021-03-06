// Generated by gencpp from file ros_mscl/GetSensor2VehicleRotationResponse.msg
// DO NOT EDIT!


#ifndef ROS_MSCL_MESSAGE_GETSENSOR2VEHICLEROTATIONRESPONSE_H
#define ROS_MSCL_MESSAGE_GETSENSOR2VEHICLEROTATIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3.h>

namespace ros_mscl
{
template <class ContainerAllocator>
struct GetSensor2VehicleRotationResponse_
{
  typedef GetSensor2VehicleRotationResponse_<ContainerAllocator> Type;

  GetSensor2VehicleRotationResponse_()
    : angle()
    , success(false)  {
    }
  GetSensor2VehicleRotationResponse_(const ContainerAllocator& _alloc)
    : angle(_alloc)
    , success(false)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _angle_type;
  _angle_type angle;

   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::ros_mscl::GetSensor2VehicleRotationResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_mscl::GetSensor2VehicleRotationResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetSensor2VehicleRotationResponse_

typedef ::ros_mscl::GetSensor2VehicleRotationResponse_<std::allocator<void> > GetSensor2VehicleRotationResponse;

typedef boost::shared_ptr< ::ros_mscl::GetSensor2VehicleRotationResponse > GetSensor2VehicleRotationResponsePtr;
typedef boost::shared_ptr< ::ros_mscl::GetSensor2VehicleRotationResponse const> GetSensor2VehicleRotationResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_mscl::GetSensor2VehicleRotationResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_mscl::GetSensor2VehicleRotationResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_mscl::GetSensor2VehicleRotationResponse_<ContainerAllocator1> & lhs, const ::ros_mscl::GetSensor2VehicleRotationResponse_<ContainerAllocator2> & rhs)
{
  return lhs.angle == rhs.angle &&
    lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_mscl::GetSensor2VehicleRotationResponse_<ContainerAllocator1> & lhs, const ::ros_mscl::GetSensor2VehicleRotationResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_mscl

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ros_mscl::GetSensor2VehicleRotationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_mscl::GetSensor2VehicleRotationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_mscl::GetSensor2VehicleRotationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_mscl::GetSensor2VehicleRotationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_mscl::GetSensor2VehicleRotationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_mscl::GetSensor2VehicleRotationResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_mscl::GetSensor2VehicleRotationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f17f1953dd3d01dff314cf417fc7232c";
  }

  static const char* value(const ::ros_mscl::GetSensor2VehicleRotationResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf17f1953dd3d01dfULL;
  static const uint64_t static_value2 = 0xf314cf417fc7232cULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_mscl::GetSensor2VehicleRotationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_mscl/GetSensor2VehicleRotationResponse";
  }

  static const char* value(const ::ros_mscl::GetSensor2VehicleRotationResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_mscl::GetSensor2VehicleRotationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Vector3 angle\n"
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
;
  }

  static const char* value(const ::ros_mscl::GetSensor2VehicleRotationResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_mscl::GetSensor2VehicleRotationResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.angle);
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetSensor2VehicleRotationResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_mscl::GetSensor2VehicleRotationResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_mscl::GetSensor2VehicleRotationResponse_<ContainerAllocator>& v)
  {
    s << indent << "angle: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.angle);
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_MSCL_MESSAGE_GETSENSOR2VEHICLEROTATIONRESPONSE_H
