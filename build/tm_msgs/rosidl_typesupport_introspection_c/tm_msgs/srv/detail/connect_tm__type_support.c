// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tm_msgs:srv/ConnectTM.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tm_msgs/srv/detail/connect_tm__rosidl_typesupport_introspection_c.h"
#include "tm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tm_msgs/srv/detail/connect_tm__functions.h"
#include "tm_msgs/srv/detail/connect_tm__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tm_msgs__srv__ConnectTM_Request__rosidl_typesupport_introspection_c__ConnectTM_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tm_msgs__srv__ConnectTM_Request__init(message_memory);
}

void tm_msgs__srv__ConnectTM_Request__rosidl_typesupport_introspection_c__ConnectTM_Request_fini_function(void * message_memory)
{
  tm_msgs__srv__ConnectTM_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tm_msgs__srv__ConnectTM_Request__rosidl_typesupport_introspection_c__ConnectTM_Request_message_member_array[5] = {
  {
    "server",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__ConnectTM_Request, server),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "connect",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__ConnectTM_Request, connect),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reconnect",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__ConnectTM_Request, reconnect),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__ConnectTM_Request, timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timeval",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__ConnectTM_Request, timeval),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tm_msgs__srv__ConnectTM_Request__rosidl_typesupport_introspection_c__ConnectTM_Request_message_members = {
  "tm_msgs__srv",  // message namespace
  "ConnectTM_Request",  // message name
  5,  // number of fields
  sizeof(tm_msgs__srv__ConnectTM_Request),
  tm_msgs__srv__ConnectTM_Request__rosidl_typesupport_introspection_c__ConnectTM_Request_message_member_array,  // message members
  tm_msgs__srv__ConnectTM_Request__rosidl_typesupport_introspection_c__ConnectTM_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  tm_msgs__srv__ConnectTM_Request__rosidl_typesupport_introspection_c__ConnectTM_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tm_msgs__srv__ConnectTM_Request__rosidl_typesupport_introspection_c__ConnectTM_Request_message_type_support_handle = {
  0,
  &tm_msgs__srv__ConnectTM_Request__rosidl_typesupport_introspection_c__ConnectTM_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, ConnectTM_Request)() {
  if (!tm_msgs__srv__ConnectTM_Request__rosidl_typesupport_introspection_c__ConnectTM_Request_message_type_support_handle.typesupport_identifier) {
    tm_msgs__srv__ConnectTM_Request__rosidl_typesupport_introspection_c__ConnectTM_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tm_msgs__srv__ConnectTM_Request__rosidl_typesupport_introspection_c__ConnectTM_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tm_msgs/srv/detail/connect_tm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tm_msgs/srv/detail/connect_tm__functions.h"
// already included above
// #include "tm_msgs/srv/detail/connect_tm__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tm_msgs__srv__ConnectTM_Response__rosidl_typesupport_introspection_c__ConnectTM_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tm_msgs__srv__ConnectTM_Response__init(message_memory);
}

void tm_msgs__srv__ConnectTM_Response__rosidl_typesupport_introspection_c__ConnectTM_Response_fini_function(void * message_memory)
{
  tm_msgs__srv__ConnectTM_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tm_msgs__srv__ConnectTM_Response__rosidl_typesupport_introspection_c__ConnectTM_Response_message_member_array[1] = {
  {
    "ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__ConnectTM_Response, ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tm_msgs__srv__ConnectTM_Response__rosidl_typesupport_introspection_c__ConnectTM_Response_message_members = {
  "tm_msgs__srv",  // message namespace
  "ConnectTM_Response",  // message name
  1,  // number of fields
  sizeof(tm_msgs__srv__ConnectTM_Response),
  tm_msgs__srv__ConnectTM_Response__rosidl_typesupport_introspection_c__ConnectTM_Response_message_member_array,  // message members
  tm_msgs__srv__ConnectTM_Response__rosidl_typesupport_introspection_c__ConnectTM_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  tm_msgs__srv__ConnectTM_Response__rosidl_typesupport_introspection_c__ConnectTM_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tm_msgs__srv__ConnectTM_Response__rosidl_typesupport_introspection_c__ConnectTM_Response_message_type_support_handle = {
  0,
  &tm_msgs__srv__ConnectTM_Response__rosidl_typesupport_introspection_c__ConnectTM_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, ConnectTM_Response)() {
  if (!tm_msgs__srv__ConnectTM_Response__rosidl_typesupport_introspection_c__ConnectTM_Response_message_type_support_handle.typesupport_identifier) {
    tm_msgs__srv__ConnectTM_Response__rosidl_typesupport_introspection_c__ConnectTM_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tm_msgs__srv__ConnectTM_Response__rosidl_typesupport_introspection_c__ConnectTM_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tm_msgs/srv/detail/connect_tm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tm_msgs__srv__detail__connect_tm__rosidl_typesupport_introspection_c__ConnectTM_service_members = {
  "tm_msgs__srv",  // service namespace
  "ConnectTM",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tm_msgs__srv__detail__connect_tm__rosidl_typesupport_introspection_c__ConnectTM_Request_message_type_support_handle,
  NULL  // response message
  // tm_msgs__srv__detail__connect_tm__rosidl_typesupport_introspection_c__ConnectTM_Response_message_type_support_handle
};

static rosidl_service_type_support_t tm_msgs__srv__detail__connect_tm__rosidl_typesupport_introspection_c__ConnectTM_service_type_support_handle = {
  0,
  &tm_msgs__srv__detail__connect_tm__rosidl_typesupport_introspection_c__ConnectTM_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, ConnectTM_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, ConnectTM_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, ConnectTM)() {
  if (!tm_msgs__srv__detail__connect_tm__rosidl_typesupport_introspection_c__ConnectTM_service_type_support_handle.typesupport_identifier) {
    tm_msgs__srv__detail__connect_tm__rosidl_typesupport_introspection_c__ConnectTM_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tm_msgs__srv__detail__connect_tm__rosidl_typesupport_introspection_c__ConnectTM_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, ConnectTM_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, ConnectTM_Response)()->data;
  }

  return &tm_msgs__srv__detail__connect_tm__rosidl_typesupport_introspection_c__ConnectTM_service_type_support_handle;
}
