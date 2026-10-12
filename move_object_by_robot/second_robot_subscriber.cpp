// message subscribe and callback

#include <memory>
#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"


class SecondRobotSubscriber: public rclcpp::Node{
public:
    SecondRobotSubscriber() : Node("second_robot_subscriber"){
        subscription_=this->create_subscription<geometry_msgs::msg::Twist>(name,Qos_10,
            std::bind(&SecondRobotSubscriber::topic_callback, this, std::placeholders::_1);

    }
    
private:
    void topic_callback(const geometry_msgs::msg::Twist::SharedPtr msg){
        RCLCPP_INFO(this->get.logger(),);
    }

    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr subscription_;


};

int main(int argc, char* argv[])
{
    rclcpp::init(argc,argv);
    rclcpp::spin(std::make_shared<SecondRobotSubscriber>());
    rclcpp::shutdown();

    return 0;
}