#[link(name = "IAmALibrary")]
extern {
  fn SampleFunction(a: i64, b: i64) -> i64;
}

fn main() {
    let answer = unsafe { SampleFunction(40,2) };
    println!("The ultimate answer is {}", answer);
}