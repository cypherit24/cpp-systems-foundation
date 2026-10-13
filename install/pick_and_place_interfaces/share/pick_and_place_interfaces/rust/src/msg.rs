#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to pick_and_place_interfaces__msg__JointControl

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointControl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub positions: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hold_time: f64,

}



impl Default for JointControl {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointControl::default())
  }
}

impl rosidl_runtime_rs::Message for JointControl {
  type RmwMsg = super::msg::rmw::JointControl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joint_names: msg.joint_names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        positions: msg.positions.as_slice().into(),
        hold_time: msg.hold_time,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joint_names: msg.joint_names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        positions: msg.positions.as_slice().into(),
      hold_time: msg.hold_time,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      joint_names: msg.joint_names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      positions: msg.positions.into(),
      hold_time: msg.hold_time,
    }
  }
}


