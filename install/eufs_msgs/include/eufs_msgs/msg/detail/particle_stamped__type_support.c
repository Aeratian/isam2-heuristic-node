// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from eufs_msgs:msg/ParticleStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "eufs_msgs/msg/detail/particle_stamped__rosidl_typesupport_introspection_c.h"
#include "eufs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "eufs_msgs/msg/detail/particle_stamped__functions.h"
#include "eufs_msgs/msg/detail/particle_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `particle`
#include "eufs_msgs/msg/particle.h"
// Member `particle`
#include "eufs_msgs/msg/detail/particle__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ParticleStamped__rosidl_typesupport_introspection_c__ParticleStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  eufs_msgs__msg__ParticleStamped__init(message_memory);
}

void ParticleStamped__rosidl_typesupport_introspection_c__ParticleStamped_fini_function(void * message_memory)
{
  eufs_msgs__msg__ParticleStamped__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ParticleStamped__rosidl_typesupport_introspection_c__ParticleStamped_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__ParticleStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "particle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__ParticleStamped, particle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ParticleStamped__rosidl_typesupport_introspection_c__ParticleStamped_message_members = {
  "eufs_msgs__msg",  // message namespace
  "ParticleStamped",  // message name
  2,  // number of fields
  sizeof(eufs_msgs__msg__ParticleStamped),
  ParticleStamped__rosidl_typesupport_introspection_c__ParticleStamped_message_member_array,  // message members
  ParticleStamped__rosidl_typesupport_introspection_c__ParticleStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  ParticleStamped__rosidl_typesupport_introspection_c__ParticleStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ParticleStamped__rosidl_typesupport_introspection_c__ParticleStamped_message_type_support_handle = {
  0,
  &ParticleStamped__rosidl_typesupport_introspection_c__ParticleStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_eufs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eufs_msgs, msg, ParticleStamped)() {
  ParticleStamped__rosidl_typesupport_introspection_c__ParticleStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ParticleStamped__rosidl_typesupport_introspection_c__ParticleStamped_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eufs_msgs, msg, Particle)();
  if (!ParticleStamped__rosidl_typesupport_introspection_c__ParticleStamped_message_type_support_handle.typesupport_identifier) {
    ParticleStamped__rosidl_typesupport_introspection_c__ParticleStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ParticleStamped__rosidl_typesupport_introspection_c__ParticleStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
