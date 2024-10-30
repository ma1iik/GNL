# Get Next Line

## Description

**Get Next Line** is a custom C function designed to read and return a line from a file descriptor. This project, part of the École 42 curriculum, enhances understanding of file handling and introduces the concept of static variables in C programming. It allows reading from a file, one line at a time, which is useful for text processing applications.

---

## Features

### Mandatory Part

The `get_next_line` function has the following prototype:

    char *get_next_line(int fd);

- **Parameters**:
  - `fd`: The file descriptor to read from.
- **Return Value**:
  - Returns a line read from the file descriptor, including the newline character (`\n`), if present.
  - Returns `NULL` if there is nothing left to read or if an error occurs.

- **Behavior**:
  - The function reads from the file descriptor one line at a time with each call.
  - It works with both files and standard input.
  - Lines are returned with the terminating newline character, unless the end of the file is reached without a newline.

- **Buffer Size**:
  - The buffer size can be set using the compiler flag `-D BUFFER_SIZE=n`, where `n` is the desired buffer size.
  - Example: `cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c`

### Bonus Part (Optional)

Additional functionality in the bonus part includes:

- **Static Variable** - The function uses only one static variable.
- **Multiple File Descriptors** - The function can manage multiple file descriptors simultaneously. This means `get_next_line` can be called for different file descriptors in any order without losing track of each file's position.

> **Note**: The bonus part will only be assessed if the mandatory part is fully functional and passes all requirements.

---

## Compilation and Usage

Compile the library using the provided Makefile:

    make

This will produce the `get_next_line.a` static library, which you can include in your own C projects. To compile with the bonus part, use:

    make bonus

---

## Project Structure

- **src/**: Contains the source files (`.c` files).
- **include/**: Contains the header files (`*.h` files).
- **Makefile**: Used for compiling the library and bonus part.

---

## How to Use

After compiling, include the `get_next_line.h` header in your project and link the `get_next_line.a` file during the compilation of your own code:

    #include "get_next_line.h"

Compile your program with the static library:

    gcc -Wall -Wextra -Werror -L. -lget_next_line my_program.c -o my_program

---

## Author

Project developed by [Malik](https://github.com/ma1iik) as part of the École 42 curriculum.
