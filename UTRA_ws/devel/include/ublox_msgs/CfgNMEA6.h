// Generated by gencpp from file ublox_msgs/CfgNMEA6.msg
// DO NOT EDIT!


#ifndef UBLOX_MSGS_MESSAGE_CFGNMEA6_H
#define UBLOX_MSGS_MESSAGE_CFGNMEA6_H


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
struct CfgNMEA6_
{
  typedef CfgNMEA6_<ContainerAllocator> Type;

  CfgNMEA6_()
    : filter(0)
    , version(0)
    , numSV(0)
    , flags(0)  {
    }
  CfgNMEA6_(const ContainerAllocator& _alloc)
    : filter(0)
    , version(0)
    , numSV(0)
    , flags(0)  {
  (void)_alloc;
    }



   typedef uint8_t _filter_type;
  _filter_type filter;

   typedef uint8_t _version_type;
  _version_type version;

   typedef uint8_t _numSV_type;
  _numSV_type numSV;

   typedef uint8_t _flags_type;
  _flags_type flags;


    enum { CLASS_ID = 6u };
     enum { MESSAGE_ID = 23u };
     enum { FILTER_POS = 1u };
     enum { FILTER_MSK_POS = 2u };
     enum { FILTER_TIME = 4u };
     enum { FILTER_DATE = 8u };
     enum { FILTER_SBAS_FILT = 16u };
     enum { FILTER_TRACK = 32u };
     enum { NMEA_VERSION_2_3 = 35u };
     enum { NMEA_VERSION_2_1 = 33u };
     enum { FLAGS_COMPAT = 1u };
     enum { FLAGS_CONSIDER = 2u };
 

  typedef boost::shared_ptr< ::ublox_msgs::CfgNMEA6_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::CfgNMEA6_<ContainerAllocator> const> ConstPtr;

}; // struct CfgNMEA6_

typedef ::ublox_msgs::CfgNMEA6_<std::allocator<void> > CfgNMEA6;

typedef boost::shared_ptr< ::ublox_msgs::CfgNMEA6 > CfgNMEA6Ptr;
typedef boost::shared_ptr< ::ublox_msgs::CfgNMEA6 const> CfgNMEA6ConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ublox_msgs::CfgNMEA6_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ublox_msgs::CfgNMEA6_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::ublox_msgs::CfgNMEA6_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::CfgNMEA6_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::CfgNMEA6_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::CfgNMEA6_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::CfgNMEA6_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::CfgNMEA6_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::CfgNMEA6_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9ffbd21c832ce4472519430326bb44e3";
  }

  static const char* value(const ::ublox_msgs::CfgNMEA6_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9ffbd21c832ce447ULL;
  static const uint64_t static_value2 = 0x2519430326bb44e3ULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::CfgNMEA6_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ublox_msgs/CfgNMEA6";
  }

  static const char* value(const ::ublox_msgs::CfgNMEA6_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::CfgNMEA6_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# CFG-NMEA (0x06 0x17)\n\
# NMEA protocol configuration\n\
#\n\
# Set/Get the NMEA protocol configuration. See section NMEA Protocol \n\
# Configuration for a detailed description of the configuration effects on \n\
# NMEA output\n\
#\n\
# Supported on u-blox 6 from firmware version 6.00 up to version 7.03.\n\
#\n\
\n\
uint8 CLASS_ID = 6\n\
uint8 MESSAGE_ID = 23 \n\
\n\
uint8 filter                  # filter flags\n\
uint8 FILTER_POS = 1          # Disable position filtering\n\
uint8 FILTER_MSK_POS = 2      # Disable masked position filtering\n\
uint8 FILTER_TIME = 4         # Disable time filtering\n\
uint8 FILTER_DATE = 8         # Disable date filtering\n\
uint8 FILTER_SBAS_FILT = 16   # Enable SBAS filtering\n\
uint8 FILTER_TRACK = 32       # Disable track filtering\n\
\n\
uint8 version             # NMEA version\n\
uint8 NMEA_VERSION_2_3 = 35     # Version 2.3\n\
uint8 NMEA_VERSION_2_1 = 33     # Version 2.1\n\
\n\
uint8 numSV                   # Maximum Number of SVs to report in NMEA\n\
                              # protocol.\n\
                              # This does not affect the receiver's operation.\n\
                              # It only limits the number of SVs reported in\n\
                              # NMEA mode (this might be needed with older\n\
                              # mapping applications which only support 8- or\n\
                              # 12-channel receivers)\n\
\n\
uint8 flags                   # flags\n\
uint8 FLAGS_COMPAT = 1          # enable compatibility mode.\n\
                                # This might be needed for certain applications  \n\
                                # when customer's NMEA parser expects a fixed \n\
                                # number of  digits in position coordinates\n\
uint8 FLAGS_CONSIDER = 2        # enable considering mode\n\
";
  }

  static const char* value(const ::ublox_msgs::CfgNMEA6_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ublox_msgs::CfgNMEA6_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.filter);
      stream.next(m.version);
      stream.next(m.numSV);
      stream.next(m.flags);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CfgNMEA6_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::CfgNMEA6_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ublox_msgs::CfgNMEA6_<ContainerAllocator>& v)
  {
    s << indent << "filter: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.filter);
    s << indent << "version: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.version);
    s << indent << "numSV: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.numSV);
    s << indent << "flags: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.flags);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_CFGNMEA6_H
