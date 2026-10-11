cmake_minimum_required(VERSION 3.8)
project(cpp_study)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 1. ROS 2 C++ 필수 라이브러리 검색
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)

# 2. 실행 파일 생성
add_executable(first_robot_node
    move_object_by_robot/firstrobotnode.cpp
)

# 3. 실행 파일에 ROS 2(rclcpp) 라이브러리 연결
ament_target_dependencies(first_robot_node
    rclcpp
)

# 4. colcon build 후 실행 파일이 설치될 경로 지정
install(TARGETS
    first_robot_node
    DESTINATION lib/${PROJECT_NAME}
)

# 5. CMake에서 여러 줄을 비활성화(주석) 처리하는 올바른 문법
if(FALSE)
    add_executable(main
        01_compilation_and_linking/log.cpp
        01_compilation_and_linking/main.cpp
    )

    add_executable(pointer
        02_pointers/main.cpp
    )

    add_executable(class_struct
        03.classes_structs/class.cpp
    )

    add_executable(static1
        03.classes_structs/static.cpp
    )

    target_include_directories(main PRIVATE include)
endif()

# 6. ROS 2 패키지 빌드 마무리 선언
ament_package()