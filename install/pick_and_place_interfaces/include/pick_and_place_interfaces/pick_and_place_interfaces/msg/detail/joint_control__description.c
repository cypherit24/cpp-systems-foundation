// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from pick_and_place_interfaces:msg/JointControl.idl
// generated code does not contain a copyright notice

#include "pick_and_place_interfaces/msg/detail/joint_control__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_pick_and_place_interfaces
const rosidl_type_hash_t *
pick_and_place_interfaces__msg__JointControl__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4f, 0xea, 0xd3, 0x75, 0x53, 0xbb, 0x82, 0xd4,
      0x30, 0xaa, 0x64, 0xcf, 0xa4, 0xf3, 0x0a, 0xb4,
      0xcd, 0x29, 0xe0, 0x74, 0xbd, 0xc4, 0x92, 0x9a,
      0x7d, 0x69, 0x57, 0xdb, 0xb0, 0x44, 0x0c, 0x96,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char pick_and_place_interfaces__msg__JointControl__TYPE_NAME[] = "pick_and_place_interfaces/msg/JointControl";

// Define type names, field names, and default values
static char pick_and_place_interfaces__msg__JointControl__FIELD_NAME__joint_names[] = "joint_names";
static char pick_and_place_interfaces__msg__JointControl__FIELD_NAME__positions[] = "positions";
static char pick_and_place_interfaces__msg__JointControl__FIELD_NAME__hold_time[] = "hold_time";

static rosidl_runtime_c__type_description__Field pick_and_place_interfaces__msg__JointControl__FIELDS[] = {
  {
    {pick_and_place_interfaces__msg__JointControl__FIELD_NAME__joint_names, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pick_and_place_interfaces__msg__JointControl__FIELD_NAME__positions, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pick_and_place_interfaces__msg__JointControl__FIELD_NAME__hold_time, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pick_and_place_interfaces__msg__JointControl__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pick_and_place_interfaces__msg__JointControl__TYPE_NAME, 42, 42},
      {pick_and_place_interfaces__msg__JointControl__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string[] joint_names\n"
  "float64[] positions\n"
  "float64 hold_time";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
pick_and_place_interfaces__msg__JointControl__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pick_and_place_interfaces__msg__JointControl__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 59, 59},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pick_and_place_interfaces__msg__JointControl__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pick_and_place_interfaces__msg__JointControl__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
