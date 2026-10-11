#include <memory>   //std::shared_ptr를 사용하기 위한 헤더파일
#include <chrono>   //1ms, 1s같은 시간 단위를 사용하기 위한 헤더파일
#include "rclcpp/rclcpp.hpp"    //ROS2 c++ 라이브러리

using namespace std::chrono_literals;   

class FirstRobotNode: public rclcpp::Node { //부모 클래스를 상속받는 firstrobotnode 생성
public:
    FirstRobotNode() : Node("first_robot_node"){    //생성자함수도 함수이기에 ()사용.
        timer_ = this->create_wall_timer(   //멤버변수로 선언> }닫혀도 살아있음(firstnode 객체가 살아있는 한)
            1s, std::bind(&FirstRobotNode::timer_callback, this)
        );  //heap에 생성된 새로운 timer_객체의 주소값, 참조 카운터 정보를 return

        RCLCPP_INFO(this->get_logger(),"robot node successfully started!");
    }   //ROS 2 전용 std::cout. [출력시간대][노드 이름][메시지] 출력

private:
    void timer_callback(){
        RCLCPP_INFO(this->get_logger(), "checking robot sensor...");
    }

    rclcpp::TimerBase::SharedPtr timer_;
    // std::shared_ptr<rclcpp::TimerBase>
};

int main(int argc, char * argv[])
{
  // 1. ROS 2 통신 시스템 초기화
  rclcpp::init(argc, argv);

  // 2. 노드를 생성하고 spin(이벤트 대기 상태)에 진입시킨다.
  // 이 구문이 없으면 노드가 만들어진 직후 main 함수가 끝나며 바로 종료됩니다!
  rclcpp::spin(std::make_shared<FirstRobotNode>());

  // 3. 종료 처리
  rclcpp::shutdown();
  return 0;
}
// rclcpp : ROS2의 전용 라이브러리. c++ 표준 라이브러리가 std::를 붙이듯 rclcpp:: 를 붙인다(이름 충돌을 막기 위해)
// TimerBase : ROS2의 Base Class. (timer function)