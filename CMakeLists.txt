cmake_minimum_required(VERSION 3.16)
project(cpp_study LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


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
    03.classes_structs/static_main.cpp
    03.classes_structs/static.cpp
)

target_include_directories(main PRIVATE include)