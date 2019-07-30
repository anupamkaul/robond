// Generated by gencpp from file rll_msgs/MoveLinRequest.msg
// DO NOT EDIT!


#ifndef RLL_MSGS_MESSAGE_MOVELINREQUEST_H
#define RLL_MSGS_MESSAGE_MOVELINREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace rll_msgs
{
template <class ContainerAllocator>
struct MoveLinRequest_
{
  typedef MoveLinRequest_<ContainerAllocator> Type;

  MoveLinRequest_()
    : pose()
    , cartesian_time_parametrization(false)  {
    }
  MoveLinRequest_(const ContainerAllocator& _alloc)
    : pose(_alloc)
    , cartesian_time_parametrization(false)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef uint8_t _cartesian_time_parametrization_type;
  _cartesian_time_parametrization_type cartesian_time_parametrization;





  typedef boost::shared_ptr< ::rll_msgs::MoveLinRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rll_msgs::MoveLinRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MoveLinRequest_

typedef ::rll_msgs::MoveLinRequest_<std::allocator<void> > MoveLinRequest;

typedef boost::shared_ptr< ::rll_msgs::MoveLinRequest > MoveLinRequestPtr;
typedef boost::shared_ptr< ::rll_msgs::MoveLinRequest const> MoveLinRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rll_msgs::MoveLinRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rll_msgs::MoveLinRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rll_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'rll_msgs': ['/home/anupam/robond/samples/kuka_maze_planner/src/rll_sdk/rll_msgs/msg', '/home/anupam/robond/samples/kuka_maze_planner/devel/share/rll_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rll_msgs::MoveLinRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rll_msgs::MoveLinRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rll_msgs::MoveLinRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rll_msgs::MoveLinRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rll_msgs::MoveLinRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rll_msgs::MoveLinRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rll_msgs::MoveLinRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "79ccc14dfc101282c0b158417015ea02";
  }

  static const char* value(const ::rll_msgs::MoveLinRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x79ccc14dfc101282ULL;
  static const uint64_t static_value2 = 0xc0b158417015ea02ULL;
};

template<class ContainerAllocator>
struct DataType< ::rll_msgs::MoveLinRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rll_msgs/MoveLinRequest";
  }

  static const char* value(const ::rll_msgs::MoveLinRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rll_msgs::MoveLinRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Pose pose\n\
bool cartesian_time_parametrization\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::rll_msgs::MoveLinRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rll_msgs::MoveLinRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pose);
      stream.next(m.cartesian_time_parametrization);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveLinRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rll_msgs::MoveLinRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rll_msgs::MoveLinRequest_<ContainerAllocator>& v)
  {
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "cartesian_time_parametrization: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cartesian_time_parametrization);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RLL_MSGS_MESSAGE_MOVELINREQUEST_H
