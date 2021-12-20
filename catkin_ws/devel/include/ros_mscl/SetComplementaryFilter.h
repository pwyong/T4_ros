// Generated by gencpp from file ros_mscl/SetComplementaryFilter.msg
// DO NOT EDIT!


#ifndef ROS_MSCL_MESSAGE_SETCOMPLEMENTARYFILTER_H
#define ROS_MSCL_MESSAGE_SETCOMPLEMENTARYFILTER_H

#include <ros/service_traits.h>


#include <ros_mscl/SetComplementaryFilterRequest.h>
#include <ros_mscl/SetComplementaryFilterResponse.h>


namespace ros_mscl
{

struct SetComplementaryFilter
{

typedef SetComplementaryFilterRequest Request;
typedef SetComplementaryFilterResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetComplementaryFilter
} // namespace ros_mscl


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ros_mscl::SetComplementaryFilter > {
  static const char* value()
  {
    return "f2496add5126d026ef6c94d30c11db4c";
  }

  static const char* value(const ::ros_mscl::SetComplementaryFilter&) { return value(); }
};

template<>
struct DataType< ::ros_mscl::SetComplementaryFilter > {
  static const char* value()
  {
    return "ros_mscl/SetComplementaryFilter";
  }

  static const char* value(const ::ros_mscl::SetComplementaryFilter&) { return value(); }
};


// service_traits::MD5Sum< ::ros_mscl::SetComplementaryFilterRequest> should match
// service_traits::MD5Sum< ::ros_mscl::SetComplementaryFilter >
template<>
struct MD5Sum< ::ros_mscl::SetComplementaryFilterRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ros_mscl::SetComplementaryFilter >::value();
  }
  static const char* value(const ::ros_mscl::SetComplementaryFilterRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_mscl::SetComplementaryFilterRequest> should match
// service_traits::DataType< ::ros_mscl::SetComplementaryFilter >
template<>
struct DataType< ::ros_mscl::SetComplementaryFilterRequest>
{
  static const char* value()
  {
    return DataType< ::ros_mscl::SetComplementaryFilter >::value();
  }
  static const char* value(const ::ros_mscl::SetComplementaryFilterRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ros_mscl::SetComplementaryFilterResponse> should match
// service_traits::MD5Sum< ::ros_mscl::SetComplementaryFilter >
template<>
struct MD5Sum< ::ros_mscl::SetComplementaryFilterResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ros_mscl::SetComplementaryFilter >::value();
  }
  static const char* value(const ::ros_mscl::SetComplementaryFilterResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_mscl::SetComplementaryFilterResponse> should match
// service_traits::DataType< ::ros_mscl::SetComplementaryFilter >
template<>
struct DataType< ::ros_mscl::SetComplementaryFilterResponse>
{
  static const char* value()
  {
    return DataType< ::ros_mscl::SetComplementaryFilter >::value();
  }
  static const char* value(const ::ros_mscl::SetComplementaryFilterResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROS_MSCL_MESSAGE_SETCOMPLEMENTARYFILTER_H
