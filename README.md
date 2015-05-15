**Calling a C-DLL from Rust**

This is a tiny experiment based on the new <a href="https://github.com/PistonDevelopers/VisualRust" target="_blank">VisualRust</a> Extension for Visual Studio 2013
from <a href="http://www.piston.rs/" target="_blank">PistonDevelopers</a>.

I have almost no <a href="http://www.rust-lang.org/" target="_blank">Rust</a> experience, so I thought I could learn a bit about it by creating a
client Exe that calls a C-DLL via <a href="https://doc.rust-lang.org/book/ffi.html" target="_blank">FFI</a>. As far as I know Rust can't call C++ DLLs therefore I modified the original C++ project to produce a pure C-DLL.

The target arch is *Windows x64*.

**VS-Compiling and Cargo usage**

Because there's currently no support for Rust's **Cargo** you have to manually create a proper *Cargo.toml* file and invoke
the build process via Console. Also don't forget to copy the DLL into Exe's **target** directory. Without the DLL the execution
of *cargo build* will fail with error that it *couldn't find the library*.

<img src="http://p71.imgup.net/cargo_tomlaa20.png">

In this <a href="https://github.com/PistonDevelopers/VisualRust/issues/3" target="_blank">Thread</a> from the VisualRust Team you can find more info
regarding the **Cargo integration**.

**Using VS External Tools**

I'd suggest to add two "External Tools" entries in your VS and configure them to invoke "Cargo build" respective "Cargo run".
This is how it looks on my machine:

<img src="http://w70.imgup.net/external_t0dcd.png" height="600" width="400">

To configure your own build/run Scripts go to *Tools/External* menu and add the following:

<img src="http://o14.imgup.net/cargo_buil8014.png"  height="600" width="500">

For the second option, **Cargo run**, settings are almost the same, just replace "build" with "run".

**Output**

<img src="http://r44.imgup.net/msvs_rust_31d0.png">

**License**

MIT