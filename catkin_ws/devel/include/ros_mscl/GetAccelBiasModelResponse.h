// Generated by gencpp from file ros_mscl/GetAccelBiasModelResponse.msg
// DO NOT EDIT!


#ifndef ROS_MSCL_MESSAGE_GETACCELBIASMODELRESPONSE_H
#define ROS_MSCL_MESSAGE_GETACCELBIASMODELRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace ros_mscl
{
template <class ContainerAllocator>
struct GetAccelBiasModelResponse_
{
  typedef GetAccelBiasModelResponse_<ContainerAllocator> Type;

  GetAccelBiasModelResponse_()
    : noise_vector()
    , beta_vector()
    , success(false)  {
    }
  GetAccelBiasModelResponse_(const ContainerAllocator& _alloc)
    : noise_vector(_alloc)
    , beta_vector(_alloc)
    , success(false)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _noise_vector_type;
  _noise_vector_type noise_vector;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _beta_vector_type;
  _beta_vector_type beta_vector;

   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::ros_mscl::GetAccelBiasModelResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_mscl::GetAccelBiasModelResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetAccelBiasModelResponse_

typedef ::ros_mscl::GetAccelBiasModelResponse_<std::allocator<void> > GetAccelBiasModelResponse;

typedef boost::shared_ptr< ::ros_mscl::GetAccelBiasModelResponse > GetAccelBiasModelResponsePtr;
typedef boost::shared_ptr< ::ros_mscl::GetAccelBiasModelResponse const> GetAccelBiasModelResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_mscl::GetAccelBiasModelResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_mscl::GetAccelBiasModelResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_mscl::GetAccelBiasModelResponse_<ContainerAllocator1> & lhs, const ::ros_mscl::GetAccelBiasModelResponse_<ContainerAllocator2> & rhs)
{
  return lhs.noise_vector == rhs.noise_vector &&
    lhs.beta_vector == rhs.beta_vector &&
    lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_mscl::GetAccelBiasModelResponse_<ContainerAllocator1> & lhs, const ::ros_mscl::GetAccelBiasModelResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_mscl

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ros_mscl::GetAccelBiasModelResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_mscl::GetAccelBiasModelResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_mscl::GetAccelBiasModelResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_mscl::GetAccelBiasModelResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_mscl::GetAccelBiasModelResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_mscl::GetAccelBiasModelResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_mscl::GetAccelBiasModelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b507c17fd666c16c0721d62595a47085";
  }

  static const char* value(const ::ros_mscl::GetAccelBiasModelResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb507c17fd666c16cULL;
  static const uint64_t static_value2 = 0x0721d62595a47085ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_mscl::GetAccelBiasModelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_mscl/GetAccelBiasModelResponse";
  }

  static const char* value(const ::ros_mscl::GetAccelBiasModelResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_mscl::GetAccelBiasModelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Vector3 noise_vector\n"
"geometry_msgs/Vector3 beta_vector\n"
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

  static const char* value(const ::ros_mscl::GetAccelBiasModelResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_mscl::GetAccelBiasModelResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.noise_vector);
      stream.next(m.beta_vector);
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetAccelBiasModelResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_mscl::GetAccelBiasModelResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_mscl::GetAccelBiasModelResponse_<ContainerAllocator>& v)
  {
    s << indent << "noise_vector: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.noise_vector);
    s << indent << "beta_vector: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.beta_vector);
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_MSCL_MESSAGE_GETACCELBIASMODELRESPONSE_H
