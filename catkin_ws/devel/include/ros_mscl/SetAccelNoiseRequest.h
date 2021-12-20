// Generated by gencpp from file ros_mscl/SetAccelNoiseRequest.msg
// DO NOT EDIT!


#ifndef ROS_MSCL_MESSAGE_SETACCELNOISEREQUEST_H
#define ROS_MSCL_MESSAGE_SETACCELNOISEREQUEST_H


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
struct SetAccelNoiseRequest_
{
  typedef SetAccelNoiseRequest_<ContainerAllocator> Type;

  SetAccelNoiseRequest_()
    : noise()  {
    }
  SetAccelNoiseRequest_(const ContainerAllocator& _alloc)
    : noise(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _noise_type;
  _noise_type noise;





  typedef boost::shared_ptr< ::ros_mscl::SetAccelNoiseRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_mscl::SetAccelNoiseRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetAccelNoiseRequest_

typedef ::ros_mscl::SetAccelNoiseRequest_<std::allocator<void> > SetAccelNoiseRequest;

typedef boost::shared_ptr< ::ros_mscl::SetAccelNoiseRequest > SetAccelNoiseRequestPtr;
typedef boost::shared_ptr< ::ros_mscl::SetAccelNoiseRequest const> SetAccelNoiseRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_mscl::SetAccelNoiseRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_mscl::SetAccelNoiseRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_mscl::SetAccelNoiseRequest_<ContainerAllocator1> & lhs, const ::ros_mscl::SetAccelNoiseRequest_<ContainerAllocator2> & rhs)
{
  return lhs.noise == rhs.noise;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_mscl::SetAccelNoiseRequest_<ContainerAllocator1> & lhs, const ::ros_mscl::SetAccelNoiseRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_mscl

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ros_mscl::SetAccelNoiseRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_mscl::SetAccelNoiseRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_mscl::SetAccelNoiseRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_mscl::SetAccelNoiseRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_mscl::SetAccelNoiseRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_mscl::SetAccelNoiseRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_mscl::SetAccelNoiseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "722ffe5b1a889deb606916858b9a7f4f";
  }

  static const char* value(const ::ros_mscl::SetAccelNoiseRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x722ffe5b1a889debULL;
  static const uint64_t static_value2 = 0x606916858b9a7f4fULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_mscl::SetAccelNoiseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_mscl/SetAccelNoiseRequest";
  }

  static const char* value(const ::ros_mscl::SetAccelNoiseRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_mscl::SetAccelNoiseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Vector3 noise\n"
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

  static const char* value(const ::ros_mscl::SetAccelNoiseRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_mscl::SetAccelNoiseRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.noise);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetAccelNoiseRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_mscl::SetAccelNoiseRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_mscl::SetAccelNoiseRequest_<ContainerAllocator>& v)
  {
    s << indent << "noise: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.noise);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_MSCL_MESSAGE_SETACCELNOISEREQUEST_H
