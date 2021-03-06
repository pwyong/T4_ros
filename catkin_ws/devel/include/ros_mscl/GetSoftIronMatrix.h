// Generated by gencpp from file ros_mscl/GetSoftIronMatrix.msg
// DO NOT EDIT!


#ifndef ROS_MSCL_MESSAGE_GETSOFTIRONMATRIX_H
#define ROS_MSCL_MESSAGE_GETSOFTIRONMATRIX_H

#include <ros/service_traits.h>


#include <ros_mscl/GetSoftIronMatrixRequest.h>
#include <ros_mscl/GetSoftIronMatrixResponse.h>


namespace ros_mscl
{

struct GetSoftIronMatrix
{

typedef GetSoftIronMatrixRequest Request;
typedef GetSoftIronMatrixResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetSoftIronMatrix
} // namespace ros_mscl


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ros_mscl::GetSoftIronMatrix > {
  static const char* value()
  {
    return "028ca441ebb3dc279988e1ab8c3f73cf";
  }

  static const char* value(const ::ros_mscl::GetSoftIronMatrix&) { return value(); }
};

template<>
struct DataType< ::ros_mscl::GetSoftIronMatrix > {
  static const char* value()
  {
    return "ros_mscl/GetSoftIronMatrix";
  }

  static const char* value(const ::ros_mscl::GetSoftIronMatrix&) { return value(); }
};


// service_traits::MD5Sum< ::ros_mscl::GetSoftIronMatrixRequest> should match
// service_traits::MD5Sum< ::ros_mscl::GetSoftIronMatrix >
template<>
struct MD5Sum< ::ros_mscl::GetSoftIronMatrixRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ros_mscl::GetSoftIronMatrix >::value();
  }
  static const char* value(const ::ros_mscl::GetSoftIronMatrixRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_mscl::GetSoftIronMatrixRequest> should match
// service_traits::DataType< ::ros_mscl::GetSoftIronMatrix >
template<>
struct DataType< ::ros_mscl::GetSoftIronMatrixRequest>
{
  static const char* value()
  {
    return DataType< ::ros_mscl::GetSoftIronMatrix >::value();
  }
  static const char* value(const ::ros_mscl::GetSoftIronMatrixRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ros_mscl::GetSoftIronMatrixResponse> should match
// service_traits::MD5Sum< ::ros_mscl::GetSoftIronMatrix >
template<>
struct MD5Sum< ::ros_mscl::GetSoftIronMatrixResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ros_mscl::GetSoftIronMatrix >::value();
  }
  static const char* value(const ::ros_mscl::GetSoftIronMatrixResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_mscl::GetSoftIronMatrixResponse> should match
// service_traits::DataType< ::ros_mscl::GetSoftIronMatrix >
template<>
struct DataType< ::ros_mscl::GetSoftIronMatrixResponse>
{
  static const char* value()
  {
    return DataType< ::ros_mscl::GetSoftIronMatrix >::value();
  }
  static const char* value(const ::ros_mscl::GetSoftIronMatrixResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROS_MSCL_MESSAGE_GETSOFTIRONMATRIX_H
