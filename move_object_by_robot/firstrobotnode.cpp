#include <memory>
#include <chrono>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"


using namespace std::chrono_literals;

class FirstRobotNode: public rclcpp::Node{
public:
    FirstRobotNode():Node("first_robot_node"){
        publisher_=this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel",10);

        timer_ = this->create_wall_timer(
            1s, std::bind(&FirstRobotNode::timer_callback, this));

        RCLCPP_INFO(this->get_logger(), "robot velocity Publisher Node Started");

    }
private:
    void timer_callback(){
        auto message=geometry_msgs::msg::Twist();
        
        message.linear.x=0.5;
        message.angular.z=0.2;

        publisher_->publish(message);
    }

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char * argv[]){
    rclcpp::init(argc,argv);
    rclcpp::spin(std::make_shared<FirstRobotNode>());
    rclcpp::shutdown();

    return 0;
}
