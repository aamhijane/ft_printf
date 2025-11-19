# ft_printf

This project was an eye-opening journey into how the classic C `printf()` function works behind the scenes. Building `ft_printf` from scratch helped me understand several key concepts that are essential for systems-level programming and C mastery.

## What I Learned

- How to handle variable argument lists using `va_start`, `va_arg`, and related macros to process an unknown number of function parameters.
- The art of parsing format strings to correctly identify and respond to different specifiers like `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`.
- Managing output at a low level using only `write` without relying on buffering or higher-level I/O functions.
- The importance of strict coding standards and memory management to avoid leaks and undefined behavior, which is crucial in real-world software development.
- How detailed and careful implementation ensures your function behaves identically to the standard library’s version, down to the number of characters printed.

## What I Implemented

- Fully functional support for the required format specifiers, carefully printing characters, strings, pointers, signed and unsigned integers, and hexadecimal values.
- Mimicked the return behavior of `printf` by returning the total number of characters printed.
- Robust error handling and careful management of variadic arguments to maintain stability and correctness.
- Compliance with the 42 coding norms, ensuring clean, modular, and readable code.

## Final Advice for Beginners

When starting out with projects like this, don’t rush to handle all specifiers at once. Begin by supporting simple ones like `%c` and `%s`, then gradually add integer and pointer formats. Testing each part thoroughly and writing helper functions will make the project more manageable and your code easier to maintain. Most importantly, embrace the learning process—implementing a `printf` teaches you not only about output formatting but also about core C concepts that will serve you in many challenges ahead.

“Because sometimes, putnbr and putstr just aren’t enough.”
