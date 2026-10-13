#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "pick_and_place_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pick_and_place_interfaces__srv__SetGripper_Request() -> *const std::ffi::c_void;
}

#[link(name = "pick_and_place_interfaces__rosidl_generator_c")]
extern "C" {
    fn pick_and_place_interfaces__srv__SetGripper_Request__init(msg: *mut SetGripper_Request) -> bool;
    fn pick_and_place_interfaces__srv__SetGripper_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetGripper_Request>, size: usize) -> bool;
    fn pick_and_place_interfaces__srv__SetGripper_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetGripper_Request>);
    fn pick_and_place_interfaces__srv__SetGripper_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetGripper_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetGripper_Request>) -> bool;
}

// Corresponds to pick_and_place_interfaces__srv__SetGripper_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGripper_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub position: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_effort: f64,

}



impl Default for SetGripper_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pick_and_place_interfaces__srv__SetGripper_Request__init(&mut msg as *mut _) {
        panic!("Call to pick_and_place_interfaces__srv__SetGripper_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetGripper_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_and_place_interfaces__srv__SetGripper_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_and_place_interfaces__srv__SetGripper_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_and_place_interfaces__srv__SetGripper_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetGripper_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetGripper_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pick_and_place_interfaces/srv/SetGripper_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pick_and_place_interfaces__srv__SetGripper_Request() }
  }
}


#[link(name = "pick_and_place_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pick_and_place_interfaces__srv__SetGripper_Response() -> *const std::ffi::c_void;
}

#[link(name = "pick_and_place_interfaces__rosidl_generator_c")]
extern "C" {
    fn pick_and_place_interfaces__srv__SetGripper_Response__init(msg: *mut SetGripper_Response) -> bool;
    fn pick_and_place_interfaces__srv__SetGripper_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetGripper_Response>, size: usize) -> bool;
    fn pick_and_place_interfaces__srv__SetGripper_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetGripper_Response>);
    fn pick_and_place_interfaces__srv__SetGripper_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetGripper_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetGripper_Response>) -> bool;
}

// Corresponds to pick_and_place_interfaces__srv__SetGripper_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGripper_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetGripper_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pick_and_place_interfaces__srv__SetGripper_Response__init(&mut msg as *mut _) {
        panic!("Call to pick_and_place_interfaces__srv__SetGripper_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetGripper_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_and_place_interfaces__srv__SetGripper_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_and_place_interfaces__srv__SetGripper_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_and_place_interfaces__srv__SetGripper_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetGripper_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetGripper_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pick_and_place_interfaces/srv/SetGripper_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pick_and_place_interfaces__srv__SetGripper_Response() }
  }
}






#[link(name = "pick_and_place_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pick_and_place_interfaces__srv__SetGripper() -> *const std::ffi::c_void;
}

// Corresponds to pick_and_place_interfaces__srv__SetGripper
#[allow(missing_docs, non_camel_case_types)]
pub struct SetGripper;

impl rosidl_runtime_rs::Service for SetGripper {
    type Request = SetGripper_Request;
    type Response = SetGripper_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pick_and_place_interfaces__srv__SetGripper() }
    }
}


