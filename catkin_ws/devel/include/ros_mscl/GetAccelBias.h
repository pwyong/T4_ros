// Generated by gencpp from file ros_mscl/GetAccelBias.msg
// DO NOT EDIT!


#ifndef ROS_MSCL_MESSAGE_GETACCELBIAS_H
#define ROS_MSCL_MESSAGE_GETACCELBIAS_H

#include <ros/service_traits.h>


#include <ros_mscl/GetAccelBiasRequest.h>
#include <ros_mscl/GetAccelBiasResponse.h>


namespace ros_mscl
{

struct GetAccelBias
{

typedef GetAccelBiasRequest Request;
typedef GetAccelBiasResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetAccelBias
} // namespace ros_mscl


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ros_mscl::GetAccelBias > {
  static const char* value()
  {
    return "9427c94a8464f80e7ccfb4c788698d94";
  }

  static const char* value(const ::ros_mscl::GetAccelBias&) { return value(); }
};

template<>
struct DataType< ::ros_mscl::GetAccelBias > {
  static const char* value()
  {
    return "ros_mscl/GetAccelBias";
  }

  static const char* value(const ::ros_mscl::GetAccelBias&) { return value(); }
};


// service_traits::MD5Sum< ::ros_mscl::GetAccelBiasRequest> should match
// service_traits::MD5Sum< ::ros_mscl::GetAccelBias >
template<>
struct MD5Sum< ::ros_mscl::GetAccelBiasRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ros_mscl::GetAccelBias >::value();
  }
  static const char* value(const ::ros_mscl::GetAccelBiasRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_mscl::GetAccelBiasRequest> should match
// service_traits::DataType< ::ros_mscl::GetAccelBias >
template<>
struct DataType< ::ros_mscl::GetAccelBiasRequest>
{
  static const char* value()
  {
    return DataType< ::ros_mscl::GetAccelBias >::value();
  }
  static const char* value(const ::ros_mscl::GetAccelBiasRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ros_mscl::GetAccelBiasResponse> should match
// service_traits::MD5Sum< ::ros_mscl::GetAccelBias >
template<>
struct MD5Sum< ::ros_mscl::GetAccelBiasResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ros_mscl::GetAccelBias >::value();
  }
  static const char* value(const ::ros_mscl::GetAccelBiasResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_mscl::GetAccelBiasResponse> should match
// service_traits::DataType< ::ros_mscl::GetAccelBias >
template<>
struct DataType< ::ros_mscl::GetAccelBiasResponse>
{
  static const char* value()
  {
    return DataType< ::ros_mscl::GetAccelBias >::value();
  }
  static const char* value(const ::ros_mscl::GetAccelBiasResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROS_MSCL_MESSAGE_GETACCELBIAS_H