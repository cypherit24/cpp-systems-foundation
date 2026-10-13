// message subscribe and callback

#include <memory>
#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"


class SecondRobotSubscriber: public rclcpp::Node{
public:
    SecondRobotSubscriber() : Node("second_robot_subscriber"){
        subscription_=this->create_subscription<geometry_msgs::msg::Twist>(
            "cmd_vel",
            10,
            std::bind(
                &SecondRobotSubscriber::topic_callback, //what member function to execute?
                this,   //what object instance it will run?
                std::placeholders::_1)  //나중에 수신기가 받는 msg 첫 번째 인자를 이 자리에 넣는다
        );
    }
    
private:
    void topic_callback(const geometry_msgs::msg::Twist::SharedPtr msg){
        RCLCPP_INFO(this->get_logger(),"subscribed velocity : 직진: %.2f m/s, 회전: %.2f rad/s",
            msg->linear.x, msg->angular.z);
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