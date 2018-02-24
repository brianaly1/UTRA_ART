// Generated by gencpp from file ublox_msgs/CfgANT.msg
// DO NOT EDIT!


#ifndef UBLOX_MSGS_MESSAGE_CFGANT_H
#define UBLOX_MSGS_MESSAGE_CFGANT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ublox_msgs
{
template <class ContainerAllocator>
struct CfgANT_
{
  typedef CfgANT_<ContainerAllocator> Type;

  CfgANT_()
    : flags(0)
    , pins(0)  {
    }
  CfgANT_(const ContainerAllocator& _alloc)
    : flags(0)
    , pins(0)  {
  (void)_alloc;
    }



   typedef uint16_t _flags_type;
  _flags_type flags;

   typedef uint16_t _pins_type;
  _pins_type pins;


    enum { CLASS_ID = 6u };
     enum { MESSAGE_ID = 19u };
     enum { FLAGS_SVCS = 1u };
     enum { FLAGS_SCD = 2u };
     enum { FLAGS_OCD = 4u };
     enum { FLAGS_PDWN_ON_SCD = 8u };
     enum { FLAGS_RECOVERY = 16u };
     enum { PIN_SWITCH_MASK = 31u };
     enum { PIN_SCD_MASK = 992u };
     enum { PIN_OCD_MASK = 31744u };
     enum { PIN_RECONFIG = 32678u };
 

  typedef boost::shared_ptr< ::ublox_msgs::CfgANT_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::CfgANT_<ContainerAllocator> const> ConstPtr;

}; // struct CfgANT_

typedef ::ublox_msgs::CfgANT_<std::allocator<void> > CfgANT;

typedef boost::shared_ptr< ::ublox_msgs::CfgANT > CfgANTPtr;
typedef boost::shared_ptr< ::ublox_msgs::CfgANT const> CfgANTConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ublox_msgs::CfgANT_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ublox_msgs::CfgANT_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ublox_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'ublox_msgs': ['/home/utra-art/UTRA/UTRA_ws/src/ublox/ublox_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::CfgANT_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::CfgANT_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::CfgANT_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::CfgANT_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::CfgANT_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::CfgANT_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::CfgANT_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6c437e89b3ea397651d3a01434d681c7";
  }

  static const char* value(const ::ublox_msgs::CfgANT_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6c437e89b3ea3976ULL;
  static const uint64_t static_value2 = 0x51d3a01434d681c7ULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::CfgANT_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ublox_msgs/CfgANT";
  }

  static const char* value(const ::ublox_msgs::CfgANT_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::CfgANT_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# CFG-ANT (0x06 0x13)\n\
# Antenna Control Settings\n\
#\n\
\n\
uint8 CLASS_ID = 6\n\
uint8 MESSAGE_ID = 19\n\
\n\
uint16 flags            # Antenna Flag Mask\n\
uint16 FLAGS_SVCS = 1         # Enable Antenna Supply Voltage Control Signal\n\
uint16 FLAGS_SCD = 2          # Enable Short Circuit Detection\n\
uint16 FLAGS_OCD = 4          # Enable Open Circuit Detection\n\
uint16 FLAGS_PDWN_ON_SCD = 8  # Power Down Antenna supply if Short Circuit is \n\
                              # detected. (only in combination with Bit 1)\n\
uint16 FLAGS_RECOVERY = 16    # Enable automatic recovery from short state\n\
\n\
uint16 pins             # Antenna Pin Configuration\n\
uint16 PIN_SWITCH_MASK = 31    # PIO-Pin used for switching antenna supply \n\
                               # (internal to TIM-LP/TIM-LF)\n\
uint16 PIN_SCD_MASK = 992      # PIO-Pin used for detecting a short in the \n\
                               # antenna supply\n\
uint16 PIN_OCD_MASK = 31744    # PIO-Pin used for detecting open/not connected \n\
                               # antenna\n\
uint16 PIN_RECONFIG = 32678    # if set to one, and this command is sent to the \n\
                               # receiver, the receiver will reconfigure the \n\
                               # pins as specified.\n\
";
  }

  static const char* value(const ::ublox_msgs::CfgANT_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ublox_msgs::CfgANT_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.flags);
      stream.next(m.pins);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CfgANT_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::CfgANT_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ublox_msgs::CfgANT_<ContainerAllocator>& v)
  {
    s << indent << "flags: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.flags);
    s << indent << "pins: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.pins);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_CFGANT_H
