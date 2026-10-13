#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "pick_and_place_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pick_and_place_interfaces__msg__JointControl() -> *const std::ffi::c_void;
}

#[link(name = "pick_and_place_interfaces__rosidl_generator_c")]
extern "C" {
    fn pick_and_place_interfaces__msg__JointControl__init(msg: *mut JointControl) -> bool;
    fn pick_and_place_interfaces__msg__JointControl__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointControl>, size: usize) -> bool;
    fn pick_and_place_interfaces__msg__JointControl__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointControl>);
    fn pick_and_place_interfaces__msg__JointControl__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointControl>, out_seq: *mut rosidl_runtime_rs::Sequence<JointControl>) -> bool;
}

// Corresponds to pick_and_place_interfaces__msg__JointControl
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointControl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub positions: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hold_time: f64,

}



impl Default for JointControl {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pick_and_place_interfaces__msg__JointControl__init(&mut msg as *mut _) {
        panic!("Call to pick_and_place_interfaces__msg__JointControl__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointControl {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_and_place_interfaces__msg__JointControl__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_and_place_interfaces__msg__JointControl__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_and_place_interfaces__msg__JointControl__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointControl {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointControl where Self: Sized {
  const TYPE_NAME: &'static str = "pick_and_place_interfaces/msg/JointControl";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pick_and_place_interfaces__msg__JointControl() }
  }
}


