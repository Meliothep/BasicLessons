# Lesson 1: Basics of C Programming

- [Lesson 1: Basics of C Programming](#lesson-1-basics-of-c-programming)
  - [The Compiler](#the-compiler)
    - [What's a Compiler?](#whats-a-compiler)
    - [How to Install GCC](#how-to-install-gcc)
    - [Documentation](#documentation)
  - [Your First Programs](#your-first-programs)
    - [Hello World](#hello-world)
    - [Breaking Down the Code](#breaking-down-the-code)
    - [How to Run Your C Program](#how-to-run-your-c-program)
      - [1. Making an Output Folder (optional but best practice)](#1-making-an-output-folder-optional-but-best-practice)
      - [2. Compile the Code](#2-compile-the-code)
      - [3. Execute the Code](#3-execute-the-code)
  - [Exercise: Working with Different Data Types](#exercise-working-with-different-data-types)
    - [Hints:](#hints)
    - [Submission Instructions](#submission-instructions)
  - [Key Takeaways](#key-takeaways)
  - [Additional Resources](#additional-resources)


## The Compiler

C is a compiled language, which means the program you write needs to be translated into a computer-friendly language called binary.

### What's a Compiler?

A compiler is a tool that translates your code from human-readable language to binary code that the computer can execute. In this course, we're using GCC (GNU Compiler Collection), the most widely known and used C/C++ compiler.

### How to Install GCC

**For Windows Users:**
```bash
# Windows users can install GCC through MinGW or WSL
# Option 1: Using MinGW (Minimalist GNU for Windows)
# Download the installer from https://sourceforge.net/projects/mingw/
# Follow installation instructions and add to PATH

# Option 2: Using Windows Subsystem for Linux (WSL)
# Install WSL through Windows features
# Then in WSL terminal:
sudo apt update
sudo apt install gcc
```

**For Linux Users:**
```bash
sudo apt update
sudo apt install gcc
```

**For Mac Users:**
```bash
# Install Homebrew first if you don't have it
# /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
brew install gcc
```

### Documentation

To access the documentation, you can either:
- Search on the web for "GCC documentation" or "C language reference"
- Use `man gcc` in your terminal, with `man` standing for "manual"
- For specific functions, use `man function_name` (e.g., `man printf`)

## Your First Programs

### Hello World

In the resources folder, you should find a file named `helloworld.c`. Open it and examine its contents:

```c
#include <stdio.h>

int main() {
   // printf() displays the string inside quotation
   printf("Hello, World!\n");
   return 0;
}
```

### Breaking Down the Code

`#include <stdio.h>`
- `#` indicates a preprocessor directive (executed before compilation)
- `include` is used to import code from an external file or library
- `<stdio.h>` follows the `<external_library_header_file>` syntax and allows you to use standard input/output functions

`int main() {...}`
- This is how we declare a function in C:
  - Starts with the return type (here, `int` for integer)
  - The function name, which must be `main` for the program's entry point
  - The parameters, inside parentheses (here, none)
  - Braces `{}` to define the function's body

`printf("Hello, World!\n");`
- `printf` is a function from stdio.h that prints text to the terminal
- The text to be printed is inside quotation marks
- `\n` is a newline character, which moves the cursor to the next line
- `;` marks the end of the instruction

`return 0;`
- `return` is used to exit the function and return a value to the caller
- `0` indicates successful program execution; other values signal errors

### How to Run Your C Program

Compilation and execution involve the following steps:

#### 1. Making an Output Folder (optional but best practice)

Create a dedicated folder for compiled binaries:
```bash
mkdir out
```

#### 2. Compile the Code

Use the GCC compiler in your terminal:
```bash
gcc helloworld.c -o out/helloworld
```

This command does the following:
- `gcc` invokes the compiler
- `helloworld.c` is the source file to compile
- `-o out/helloworld` specifies the output file path and name

#### 3. Execute the Code

Run your compiled program:
```bash
./out/helloworld
```

Now look at the output – you've successfully executed your first C program!

## Exercise: Working with Different Data Types

Create a new C file named `variables.c` and write a program that displays the following variables using `printf`:

```c
int a = 125, b = 12345;
long ax = 1234567890;
short s = 4043;
float x = 2.13459;
double dx = 1.1415927;
char c = 'W';
unsigned long ux = 2541567890;
```

### Hints:
- You'll need to use different format specifiers for different data types in `printf`
- Common format specifiers include:
  - `%d` for integers
  - `%ld` for long integers
  - `%f` for floats
  - `%lf` for doubles
  - `%c` for characters
  - `%lu` for unsigned long
  - `%s` for strings
- Example: `printf("Integer value: %d\n", a);`

### Submission Instructions

After completing the exercise:
1. Compile your code: `gcc variables.c -o out/variables`
2. Test your program: `./out/variables`
3. Ensure all variables are displayed correctly

## Key Takeaways

- C is a compiled language that requires translation into binary
- The GCC compiler is a tool to convert C code into executable programs
- Every C program must have a `main()` function as its entry point
- C programs follow a structured syntax with specific rules
- The compilation process converts source code (`.c` files) into executable files

## Additional Resources

- [C Programming Language Documentation](https://devdocs.io/c/)
- [GCC Documentation](https://gcc.gnu.org/onlinedocs/)
- [Format Specifiers in C](https://en.wikipedia.org/wiki/Printf_format_string)