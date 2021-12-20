// Generated by gencpp from file ros_mscl/GetZeroVelocityUpdateThreshold.msg
// DO NOT EDIT!


#ifndef ROS_MSCL_MESSAGE_GETZEROVELOCITYUPDATETHRESHOLD_H
#define ROS_MSCL_MESSAGE_GETZEROVELOCITYUPDATETHRESHOLD_H

#include <ros/service_traits.h>


#include <ros_mscl/GetZeroVelocityUpdateThresholdRequest.h>
#include <ros_mscl/GetZeroVelocityUpdateThresholdResponse.h>


namespace ros_mscl
{

struct GetZeroVelocityUpdateThreshold
{

typedef GetZeroVelocityUpdateThresholdRequest Request;
typedef GetZeroVelocityUpdateThresholdResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetZeroVelocityUpdateThreshold
} // namespace ros_mscl


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ros_mscl::GetZeroVelocityUpdateThreshold > {
  static const char* value()
  {
    return "1d55bd0c555abfd31bce740efa684526";
  }

  static const char* value(const ::ros_mscl::GetZeroVelocityUpdateThreshold&) { return value(); }
};

template<>
struct DataType< ::ros_mscl::GetZeroVelocityUpdateThreshold > {
  static const char* value()
  {
    return "ros_mscl/GetZeroVelocityUpdateThreshold";
  }

  static const char* value(const ::ros_mscl::GetZeroVelocityUpdateThreshold&) { return value(); }
};


// service_traits::MD5Sum< ::ros_mscl::GetZeroVelocityUpdateThresholdRequest> should match
// service_traits::MD5Sum< ::ros_mscl::GetZeroVelocityUpdateThreshold >
template<>
struct MD5Sum< ::ros_mscl::GetZeroVelocityUpdateThresholdRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ros_mscl::GetZeroVelocityUpdateThreshold >::value();
  }
  static const char* value(const ::ros_mscl::GetZeroVelocityUpdateThresholdRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_mscl::GetZeroVelocityUpdateThresholdRequest> should match
// service_traits::DataType< ::ros_mscl::GetZeroVelocityUpdateThreshold >
template<>
struct DataType< ::ros_mscl::GetZeroVelocityUpdateThresholdRequest>
{
  static const char* value()
  {
    return DataType< ::ros_mscl::GetZeroVelocityUpdateThreshold >::value();
  }
  static const char* value(const ::ros_mscl::GetZeroVelocityUpdateThresholdRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ros_mscl::GetZeroVelocityUpdateThresholdResponse> should match
// service_traits::MD5Sum< ::ros_mscl::GetZeroVelocityUpdateThreshold >
template<>
struct MD5Sum< ::ros_mscl::GetZeroVelocityUpdateThresholdResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ros_mscl::GetZeroVelocityUpdateThreshold >::value();
  }
  static const char* value(const ::ros_mscl::GetZeroVelocityUpdateThresholdResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_mscl::GetZeroVelocityUpdateThresholdResponse> should match
// service_traits::DataType< ::ros_mscl::GetZeroVelocityUpdateThreshold >
template<>
struct DataType< ::ros_mscl::GetZeroVelocityUpdateThresholdResponse>
{
  static const char* value()
  {
    return DataType< ::ros_mscl::GetZeroVelocityUpdateThreshold >::value();
  }
  static const char* value(const ::ros_mscl::GetZeroVelocityUpdateThresholdResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROS_MSCL_MESSAGE_GETZEROVELOCITYUPDATETHRESHOLD_H