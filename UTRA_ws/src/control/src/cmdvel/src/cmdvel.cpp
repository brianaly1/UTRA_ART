#include "ros/ros.h"
#include "std_msgs/Float64.h"
#include "nav_msgs/Odometry.h"
#include "geometry_msgs/Twist.h"

double vx,wz;
double wheelbase = 0.91; // meters
double manual_control = 1.0;

void targetcb(const geometry_msgs::Twist& msg)
{
  if(manual_control == 1.0){
    vx = msg.linear.x;
    wz = msg.angular.z;
  }
}

void targetcb2(const geometry_msgs::Twist& msg)
{
  if(manual_control == 0.0){
    vx = msg.linear.x;
    wz = msg.angular.z;
  }
}

void controlcb(const std_msgs::Float64& msg)
{
  manual_control = msg.data;
}

double convertr(double vel)
{
  double mcommand = 127 + (80.5*vel);
  return mcommand;
}

double convertl(double vel)
{
  double mcommand = 127 + (80.5*vel);
  return mcommand;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "cmdvel");
  ros::NodeHandle n;
  ros::Time current_time,prev_time;
  current_time = ros::Time::now();

  ros::Subscriber sub1 = n.subscribe("/cmd_vel", 1000, targetcb);
  ros::Subscriber sub2 = n.subscribe("/cmd_vel2", 1000, targetcb2);
  ros::Publisher rvel_pub = n.advertise<std_msgs::Float64>("/right_wheel/command", 1);
  ros::Publisher lvel_pub = n.advertise<std_msgs::Float64>("/left_wheel/command", 1);
  ros::Rate loop_rate(10);

  std_msgs::Float64 rvelmsg;
  std_msgs::Float64 lvelmsg;	

  double v,vl,vr,rcommand,lcommand;
  

  while(n.ok())
  { 
    ros::spinOnce(); //check for msgs, updates xi,yi,azi,x,y,z

    //the following expressions are derived from unicycle kinematics
    vr = vx + (wheelbase*wz)/2 ;
    vl = vx - (wheelbase*wz)/2 ;
    rvelmsg.data = convertr(vr);
    lvelmsg.data = convertl(vl); 

    rvel_pub.publish(rvelmsg);
    lvel_pub.publish(lvelmsg);
  }
  return 0;
}

