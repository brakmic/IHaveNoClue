**Calling a C-DLL from Rust**

This is a tiny experiment based on the new <a href="https://github.com/PistonDevelopers/VisualRust" target="_blank">VisualRust</a> Extension for Visual Studio 2013
from <a href="http://www.piston.rs/" target="_blank">PistonDevelopers</a>.

I have almost no experience with Rust, so I thought I could learn a bit about it by creating a 
client Exe that calls some external C-DLL. As far as I know Rust can't call C++ DLLs (because of ABI, I suppose), so I created a 
simple C project within the solution. 

Target arch is *Windows x64*.

Because there's currently no support for Rust's Cargo you have to manually create a proper Cargo.toml file and invoke
the build process via Console. In this <a href="https://github.com/PistonDevelopers/VisualRust/issues/3" target="_blank">Thread</a> from the VisualRust Team you can find more info
regarding Cargo integration. 

I'd suggest to add two "External Tools" entries in your VS and configure them to invoke "Cargo build" respective "Cargo run".
This is how it looks on my machine:

<img src="http://w70.imgup.net/external_t0dcd.png">

To configure your own build/run Scripts go to Tools/External tools and add this:

<img src="http://w70.imgup.net/external_t0dcd.png">

for Cargo run just replace the "build" option with "run".

**Screenshot**

<img src="http://r44.imgup.net/msvs_rust_31d0.png">