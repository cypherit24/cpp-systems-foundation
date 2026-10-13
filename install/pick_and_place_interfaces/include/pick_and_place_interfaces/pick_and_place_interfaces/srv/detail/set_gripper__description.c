// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from pick_and_place_interfaces:srv/SetGripper.idl
// generated code does not contain a copyright notice

#include "pick_and_place_interfaces/srv/detail/set_gripper__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_pick_and_place_interfaces
const rosidl_type_hash_t *
pick_and_place_interfaces__srv__SetGripper__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x95, 0x96, 0x40, 0xc5, 0x56, 0xad, 0xb6, 0x61,
      0x35, 0x1b, 0xef, 0xe0, 0x16, 0x0e, 0xb0, 0x6b,
      0x8f, 0x4b, 0x67, 0x50, 0x42, 0xac, 0xa3, 0xda,
      0x10, 0x2c, 0xa7, 0xb7, 0x83, 0xe8, 0x75, 0x71,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_pick_and_place_interfaces
const rosidl_type_hash_t *
pick_and_place_interfaces__srv__SetGripper_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2f, 0xed, 0xbe, 0x10, 0x98, 0x65, 0x55, 0xe8,
      0xda, 0x91, 0x0a, 0x12, 0xba, 0xa1, 0x9b, 0x3e,
      0xb8, 0x06, 0x77, 0xf8, 0x2f, 0x3d, 0xaa, 0xf8,
      0xc6, 0x06, 0x62, 0xd6, 0x95, 0x94, 0x7c, 0x56,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_pick_and_place_interfaces
const rosidl_type_hash_t *
pick_and_place_interfaces__srv__SetGripper_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8a, 0x37, 0x38, 0xad, 0xa0, 0x42, 0x3f, 0xba,
      0x90, 0xd5, 0x58, 0xff, 0xb2, 0xe0, 0x18, 0x87,
      0xdb, 0xfd, 0xd4, 0x4e, 0x10, 0xdd, 0x6e, 0x86,
      0xca, 0x8f, 0x15, 0xce, 0xb9, 0x64, 0x4b, 0x00,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_pick_and_place_interfaces
const rosidl_type_hash_t *
pick_and_place_interfaces__srv__SetGripper_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb8, 0xe4, 0x10, 0xaa, 0xa1, 0x7c, 0x35, 0x1e,
      0xda, 0x13, 0x61, 0x24, 0xb2, 0x88, 0x7d, 0x51,
      0xac, 0x02, 0xc3, 0x3f, 0x50, 0x88, 0x3a, 0xef,
      0xf6, 0x63, 0x0f, 0x08, 0xe1, 0xb5, 0xff, 0xce,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char pick_and_place_interfaces__srv__SetGripper__TYPE_NAME[] = "pick_and_place_interfaces/srv/SetGripper";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char pick_and_place_interfaces__srv__SetGripper_Event__TYPE_NAME[] = "pick_and_place_interfaces/srv/SetGripper_Event";
static char pick_and_place_interfaces__srv__SetGripper_Request__TYPE_NAME[] = "pick_and_place_interfaces/srv/SetGripper_Request";
static char pick_and_place_interfaces__srv__SetGripper_Response__TYPE_NAME[] = "pick_and_place_interfaces/srv/SetGripper_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char pick_and_place_interfaces__srv__SetGripper__FIELD_NAME__request_message[] = "request_message";
static char pick_and_place_interfaces__srv__SetGripper__FIELD_NAME__response_message[] = "response_message";
static char pick_and_place_interfaces__srv__SetGripper__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field pick_and_place_interfaces__srv__SetGripper__FIELDS[] = {
  {
    {pick_and_place_interfaces__srv__SetGripper__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {pick_and_place_interfaces__srv__SetGripper_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {pick_and_place_interfaces__srv__SetGripper__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {pick_and_place_interfaces__srv__SetGripper_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {pick_and_place_interfaces__srv__SetGripper__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {pick_and_place_interfaces__srv__SetGripper_Event__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription pick_and_place_interfaces__srv__SetGripper__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {pick_and_place_interfaces__srv__SetGripper_Event__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {pick_and_place_interfaces__srv__SetGripper_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {pick_and_place_interfaces__srv__SetGripper_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pick_and_place_interfaces__srv__SetGripper__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pick_and_place_interfaces__srv__SetGripper__TYPE_NAME, 40, 40},
      {pick_and_place_interfaces__srv__SetGripper__FIELDS, 3, 3},
    },
    {pick_and_place_interfaces__srv__SetGripper__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = pick_and_place_interfaces__srv__SetGripper_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = pick_and_place_interfaces__srv__SetGripper_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = pick_and_place_interfaces__srv__SetGripper_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char pick_and_place_interfaces__srv__SetGripper_Request__FIELD_NAME__position[] = "position";
static char pick_and_place_interfaces__srv__SetGripper_Request__FIELD_NAME__max_effort[] = "max_effort";

static rosidl_runtime_c__type_description__Field pick_and_place_interfaces__srv__SetGripper_Request__FIELDS[] = {
  {
    {pick_and_place_interfaces__srv__SetGripper_Request__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pick_and_place_interfaces__srv__SetGripper_Request__FIELD_NAME__max_effort, 10, 10},
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
pick_and_place_interfaces__srv__SetGripper_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pick_and_place_interfaces__srv__SetGripper_Request__TYPE_NAME, 48, 48},
      {pick_and_place_interfaces__srv__SetGripper_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char pick_and_place_interfaces__srv__SetGripper_Response__FIELD_NAME__success[] = "success";
static char pick_and_place_interfaces__srv__SetGripper_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field pick_and_place_interfaces__srv__SetGripper_Response__FIELDS[] = {
  {
    {pick_and_place_interfaces__srv__SetGripper_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pick_and_place_interfaces__srv__SetGripper_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pick_and_place_interfaces__srv__SetGripper_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pick_and_place_interfaces__srv__SetGripper_Response__TYPE_NAME, 49, 49},
      {pick_and_place_interfaces__srv__SetGripper_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char pick_and_place_interfaces__srv__SetGripper_Event__FIELD_NAME__info[] = "info";
static char pick_and_place_interfaces__srv__SetGripper_Event__FIELD_NAME__request[] = "request";
static char pick_and_place_interfaces__srv__SetGripper_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field pick_and_place_interfaces__srv__SetGripper_Event__FIELDS[] = {
  {
    {pick_and_place_interfaces__srv__SetGripper_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {pick_and_place_interfaces__srv__SetGripper_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {pick_and_place_interfaces__srv__SetGripper_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {pick_and_place_interfaces__srv__SetGripper_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {pick_and_place_interfaces__srv__SetGripper_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription pick_and_place_interfaces__srv__SetGripper_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {pick_and_place_interfaces__srv__SetGripper_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {pick_and_place_interfaces__srv__SetGripper_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pick_and_place_interfaces__srv__SetGripper_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pick_and_place_interfaces__srv__SetGripper_Event__TYPE_NAME, 46, 46},
      {pick_and_place_interfaces__srv__SetGripper_Event__FIELDS, 3, 3},
    },
    {pick_and_place_interfaces__srv__SetGripper_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = pick_and_place_interfaces__srv__SetGripper_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = pick_and_place_interfaces__srv__SetGripper_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 position\n"
  "float64 max_effort\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
pick_and_place_interfaces__srv__SetGripper__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pick_and_place_interfaces__srv__SetGripper__TYPE_NAME, 40, 40},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 67, 67},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
pick_and_place_interfaces__srv__SetGripper_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pick_and_place_interfaces__srv__SetGripper_Request__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
pick_and_place_interfaces__srv__SetGripper_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pick_and_place_interfaces__srv__SetGripper_Response__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
pick_and_place_interfaces__srv__SetGripper_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pick_and_place_interfaces__srv__SetGripper_Event__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pick_and_place_interfaces__srv__SetGripper__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pick_and_place_interfaces__srv__SetGripper__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *pick_and_place_interfaces__srv__SetGripper_Event__get_individual_type_description_source(NULL);
    sources[3] = *pick_and_place_interfaces__srv__SetGripper_Request__get_individual_type_description_source(NULL);
    sources[4] = *pick_and_place_interfaces__srv__SetGripper_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pick_and_place_interfaces__srv__SetGripper_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pick_and_place_interfaces__srv__SetGripper_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pick_and_place_interfaces__srv__SetGripper_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pick_and_place_interfaces__srv__SetGripper_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pick_and_place_interfaces__srv__SetGripper_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pick_and_place_interfaces__srv__SetGripper_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *pick_and_place_interfaces__srv__SetGripper_Request__get_individual_type_description_source(NULL);
    sources[3] = *pick_and_place_interfaces__srv__SetGripper_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
