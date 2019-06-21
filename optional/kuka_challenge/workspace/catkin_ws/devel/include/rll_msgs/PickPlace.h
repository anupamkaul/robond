// Generated by gencpp from file rll_msgs/PickPlace.msg
// DO NOT EDIT!


#ifndef RLL_MSGS_MESSAGE_PICKPLACE_H
#define RLL_MSGS_MESSAGE_PICKPLACE_H

#include <ros/service_traits.h>


#include <rll_msgs/PickPlaceRequest.h>
#include <rll_msgs/PickPlaceResponse.h>


namespace rll_msgs
{

struct PickPlace
{

typedef PickPlaceRequest Request;
typedef PickPlaceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct PickPlace
} // namespace rll_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rll_msgs::PickPlace > {
  static const char* value()
  {
    return "f9e1ce2e36454c554259d3461e945fff";
  }

  static const char* value(const ::rll_msgs::PickPlace&) { return value(); }
};

template<>
struct DataType< ::rll_msgs::PickPlace > {
  static const char* value()
  {
    return "rll_msgs/PickPlace";
  }

  static const char* value(const ::rll_msgs::PickPlace&) { return value(); }
};


// service_traits::MD5Sum< ::rll_msgs::PickPlaceRequest> should match 
// service_traits::MD5Sum< ::rll_msgs::PickPlace > 
template<>
struct MD5Sum< ::rll_msgs::PickPlaceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rll_msgs::PickPlace >::value();
  }
  static const char* value(const ::rll_msgs::PickPlaceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rll_msgs::PickPlaceRequest> should match 
// service_traits::DataType< ::rll_msgs::PickPlace > 
template<>
struct DataType< ::rll_msgs::PickPlaceRequest>
{
  static const char* value()
  {
    return DataType< ::rll_msgs::PickPlace >::value();
  }
  static const char* value(const ::rll_msgs::PickPlaceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rll_msgs::PickPlaceResponse> should match 
// service_traits::MD5Sum< ::rll_msgs::PickPlace > 
template<>
struct MD5Sum< ::rll_msgs::PickPlaceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rll_msgs::PickPlace >::value();
  }
  static const char* value(const ::rll_msgs::PickPlaceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rll_msgs::PickPlaceResponse> should match 
// service_traits::DataType< ::rll_msgs::PickPlace > 
template<>
struct DataType< ::rll_msgs::PickPlaceResponse>
{
  static const char* value()
  {
    return DataType< ::rll_msgs::PickPlace >::value();
  }
  static const char* value(const ::rll_msgs::PickPlaceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // RLL_MSGS_MESSAGE_PICKPLACE_H
