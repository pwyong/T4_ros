// Generated by gencpp from file ros_mscl/GetRelativePositionReferenceResponse.msg
// DO NOT EDIT!


#ifndef ROS_MSCL_MESSAGE_GETRELATIVEPOSITIONREFERENCERESPONSE_H
#define ROS_MSCL_MESSAGE_GETRELATIVEPOSITIONREFERENCERESPONSE_H


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
struct GetRelativePositionReferenceResponse_
{
  typedef GetRelativePositionReferenceResponse_<ContainerAllocator> Type;

  GetRelativePositionReferenceResponse_()
    : source(0)
    , frame(0)
    , position()
    , success(false)  {
    }
  GetRelativePositionReferenceResponse_(const ContainerAllocator& _alloc)
    : source(0)
    , frame(0)
    , position(_alloc)
    , success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _source_type;
  _source_type source;

   typedef uint8_t _frame_type;
  _frame_type frame;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef uint8_t _success_type;
  _success_type success;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(SOURCE_AUTO)
  #undef SOURCE_AUTO
#endif
#if defined(_WIN32) && defined(SOURCE_MANUAL)
  #undef SOURCE_MANUAL
#endif
#if defined(_WIN32) && defined(FRAME_ECEF)
  #undef FRAME_ECEF
#endif
#if defined(_WIN32) && defined(FRAME_LLH)
  #undef FRAME_LLH
#endif

  enum {
    SOURCE_AUTO = 0u,
    SOURCE_MANUAL = 1u,
    FRAME_ECEF = 1u,
    FRAME_LLH = 2u,
  };


  typedef boost::shared_ptr< ::ros_mscl::GetRelativePositionReferenceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_mscl::GetRelativePositionReferenceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetRelativePositionReferenceResponse_

typedef ::ros_mscl::GetRelativePositionReferenceResponse_<std::allocator<void> > GetRelativePositionReferenceResponse;

typedef boost::shared_ptr< ::ros_mscl::GetRelativePositionReferenceResponse > GetRelativePositionReferenceResponsePtr;
typedef boost::shared_ptr< ::ros_mscl::GetRelativePositionReferenceResponse const> GetRelativePositionReferenceResponseConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_mscl::GetRelativePositionReferenceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_mscl::GetRelativePositionReferenceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_mscl::GetRelativePositionReferenceResponse_<ContainerAllocator1> & lhs, const ::ros_mscl::GetRelativePositionReferenceResponse_<ContainerAllocator2> & rhs)
{
  return lhs.source == rhs.source &&
    lhs.frame == rhs.frame &&
    lhs.position == rhs.position &&
    lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_mscl::GetRelativePositionReferenceResponse_<ContainerAllocator1> & lhs, const ::ros_mscl::GetRelativePositionReferenceResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_mscl

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ros_mscl::GetRelativePositionReferenceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_mscl::GetRelativePositionReferenceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_mscl::GetRelativePositionReferenceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_mscl::GetRelativePositionReferenceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_mscl::GetRelativePositionReferenceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_mscl::GetRelativePositionReferenceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_mscl::GetRelativePositionReferenceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7778d2daa4ab0de5ddac855cca257e01";
  }

  static const char* value(const ::ros_mscl::GetRelativePositionReferenceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7778d2daa4ab0de5ULL;
  static const uint64_t static_value2 = 0xddac855cca257e01ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_mscl::GetRelativePositionReferenceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_mscl/GetRelativePositionReferenceResponse";
  }

  static const char* value(const ::ros_mscl::GetRelativePositionReferenceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_mscl::GetRelativePositionReferenceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8  source\n"
"uint8  frame\n"
"geometry_msgs/Vector3 position\n"
"bool success\n"
"\n"
"uint8 SOURCE_AUTO   = 0  #RTK base station required  \n"
"uint8 SOURCE_MANUAL = 1  \n"
"uint8 FRAME_ECEF = 1  \n"
"uint8 FRAME_LLH  = 2  \n"
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

  static const char* value(const ::ros_mscl::GetRelativePositionReferenceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_mscl::GetRelativePositionReferenceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.source);
      stream.next(m.frame);
      stream.next(m.position);
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetRelativePositionReferenceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_mscl::GetRelativePositionReferenceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_mscl::GetRelativePositionReferenceResponse_<ContainerAllocator>& v)
  {
    s << indent << "source: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.source);
    s << indent << "frame: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.frame);
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_MSCL_MESSAGE_GETRELATIVEPOSITIONREFERENCERESPONSE_H
