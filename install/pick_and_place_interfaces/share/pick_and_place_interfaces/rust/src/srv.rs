#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to pick_and_place_interfaces__srv__SetGripper_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetGripper_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetGripper_Request {
  type RmwMsg = super::srv::rmw::SetGripper_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position: msg.position,
        max_effort: msg.max_effort,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      position: msg.position,
      max_effort: msg.max_effort,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      position: msg.position,
      max_effort: msg.max_effort,
    }
  }
}


// Corresponds to pick_and_place_interfaces__srv__SetGripper_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGripper_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SetGripper_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetGripper_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetGripper_Response {
  type RmwMsg = super::srv::rmw::SetGripper_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
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


