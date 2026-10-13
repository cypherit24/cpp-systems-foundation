# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target pick_and_place_interfaces::pick_and_place_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${pick_and_place_interfaces_TARGETS}.
if(pick_and_place_interfaces_TARGETS AND NOT TARGET pick_and_place_interfaces::pick_and_place_interfaces)
  add_library(pick_and_place_interfaces::pick_and_place_interfaces INTERFACE IMPORTED)
  set_target_properties(pick_and_place_interfaces::pick_and_place_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${pick_and_place_interfaces_TARGETS}")
endif()
