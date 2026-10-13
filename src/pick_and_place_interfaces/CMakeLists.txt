cmake_minimum_required(VERSION 3.8)
project(pick_and_place_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# 파이썬 생성기를 제외하고 C / C++ 헤더 생성기만 활성화
set(ROSIDL_GENERATOR_PACKAGES "rosidl_generator_c;rosidl_generator_cpp")

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/JointControl.msg"
  "srv/SetGripper.srv"

)

ament_package()