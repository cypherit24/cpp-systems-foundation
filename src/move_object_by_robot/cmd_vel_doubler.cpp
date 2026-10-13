#include <memory>
#include <chrono>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include <iostream>

class CmdVelDoubler:public rclcpp::Node{
public:
    CmdVelDoubler():Node("cmd_vel_doubler")
    {
        subscriber_ = this->create_subscription<geometry_msgs::msg::Twist>(
            "cmd_vel",
            10,
            std::bind(&CmdVelDoubler::cmd_vel_callback, this, std::placeholders::_1)
        );

        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>(
            "cmd_vel_fast",10
        );
    }

private:
    void cmd_vel_callback(const geometry_msgs::msg::Twist::SharedPtr msg)
    {
        auto fast_msg=geometry_msgs::msg::Twist();  //구조체
        fast_msg.linear.x = msg->linear.x * 2.0;
        fast_msg.angular.z= msg->angular.z * 2.0;
        publisher_->publish(fast_msg);
        RCLCPP_INFO(this->get_logger(),"원래 속도 %.2f -> 가공 속도 %.2f", 
        msg->linear.x, fast_msg.linear.x);

    }
    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr subscriber_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;  

};

int main(int argc, char * argv[])
{
    rclcpp::init(argc,argv);
    rclcpp::spin(std::make_shared<CmdVelDoubler>());
    rclcpp::shutdown();
}