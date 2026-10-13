// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pick_and_place_interfaces:msg/JointControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pick_and_place_interfaces/msg/joint_control.h"


#ifndef PICK_AND_PLACE_INTERFACES__MSG__DETAIL__JOINT_CONTROL__FUNCTIONS_H_
#define PICK_AND_PLACE_INTERFACES__MSG__DETAIL__JOINT_CONTROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "pick_and_place_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "pick_and_place_interfaces/msg/detail/joint_control__struct.h"

/// Initialize msg/JointControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pick_and_place_interfaces__msg__JointControl
 * )) before or use
 * pick_and_place_interfaces__msg__JointControl__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pick_and_place_interfaces
bool
pick_and_place_interfaces__msg__JointControl__init(pick_and_place_interfaces__msg__JointControl * msg);

/// Finalize msg/JointControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pick_and_place_interfaces
void
pick_and_place_interfaces__msg__JointControl__fini(pick_and_place_interfaces__msg__JointControl * msg);

/// Create msg/JointControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pick_and_place_interfaces__msg__JointControl__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pick_and_place_interfaces
pick_and_place_interfaces__msg__JointControl *
pick_and_place_interfaces__msg__JointControl__create(void);

/// Destroy msg/JointControl message.
/**
 * It calls
 * pick_and_place_interfaces__msg__JointControl__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pick_and_place_interfaces
void
pick_and_place_interfaces__msg__JointControl__destroy(pick_and_place_interfaces__msg__JointControl * msg);

/// Check for msg/JointControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pick_and_place_interfaces
bool
pick_and_place_interfaces__msg__JointControl__are_equal(const pick_and_place_interfaces__msg__JointControl * lhs, const pick_and_place_interfaces__msg__JointControl * rhs);

/// Copy a msg/JointControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pick_and_place_interfaces
bool
pick_and_place_interfaces__msg__JointControl__copy(
  const pick_and_place_interfaces__msg__JointControl * input,
  pick_and_place_interfaces__msg__JointControl * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pick_and_place_interfaces
const rosidl_type_hash_t *
pick_and_place_interfaces__msg__JointControl__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pick_and_place_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
pick_and_place_interfaces__msg__JointControl__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_pick_and_place_interfaces
const rosidl_runtime_c__type_description__TypeSource *
pick_and_place_interfaces__msg__JointControl__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pick_and_place_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
pick_and_place_interfaces__msg__JointControl__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/JointControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * pick_and_place_interfaces__msg__JointControl__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pick_and_place_interfaces
bool
pick_and_place_interfaces__msg__JointControl__Sequence__init(pick_and_place_interfaces__msg__JointControl__Sequence * array, size_t size);

/// Finalize array of msg/JointControl messages.
/**
 * It calls
 * pick_and_place_interfaces__msg__JointControl__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pick_and_place_interfaces
void
pick_and_place_interfaces__msg__JointControl__Sequence__fini(pick_and_place_interfaces__msg__JointControl__Sequence * array);

/// Create array of msg/JointControl messages.
/**
 * It allocates the memory for the array and calls
 * pick_and_place_interfaces__msg__JointControl__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pick_and_place_interfaces
pick_and_place_interfaces__msg__JointControl__Sequence *
pick_and_place_interfaces__msg__JointControl__Sequence__create(size_t size);

/// Destroy array of msg/JointControl messages.
/**
 * It calls
 * pick_and_place_interfaces__msg__JointControl__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pick_and_place_interfaces
void
pick_and_place_interfaces__msg__JointControl__Sequence__destroy(pick_and_place_interfaces__msg__JointControl__Sequence * array);

/// Check for msg/JointControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pick_and_place_interfaces
bool
pick_and_place_interfaces__msg__JointControl__Sequence__are_equal(const pick_and_place_interfaces__msg__JointControl__Sequence * lhs, const pick_and_place_interfaces__msg__JointControl__Sequence * rhs);

/// Copy an array of msg/JointControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pick_and_place_interfaces
bool
pick_and_place_interfaces__msg__JointControl__Sequence__copy(
  const pick_and_place_interfaces__msg__JointControl__Sequence * input,
  pick_and_place_interfaces__msg__JointControl__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PICK_AND_PLACE_INTERFACES__MSG__DETAIL__JOINT_CONTROL__FUNCTIONS_H_
