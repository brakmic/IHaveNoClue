#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]

extern crate libc;

use libc::{int32_t};


#[repr(C)]
pub struct CarrierObject
{
    pub a_value: int32_t,
}

#[link(name = "IAmALibrary")]
extern "C" {
  fn SampleFunction(a: i32, b: i32) -> i32;
  fn WriteContent(obj: *mut CarrierObject); 
}




fn main() {

    let mut an_object = Box::new(CarrierObject{ a_value: 100 });
    
    unsafe { WriteContent(&mut *an_object); };

    let answer = unsafe { SampleFunction(40,2) };
    println!("The ultimate answer is {}", answer);
}