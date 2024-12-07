# Peers Q&A: Libft Project

This document addresses key questions, concepts, and technical details related to the `libft` project. It is designed to help peers understand the deeper workings of the code and Makefile mechanics.

---

## Q1: Why do you use `unsigned char` instead of `char`?

**Answer:**  
When performing operations on characters at the byte level, it's essential to handle values as unsigned to avoid unexpected results caused by negative ASCII values.  
- If `char` is signed (values range from `-128` to `127`), operations like `127 - (-127)` might yield illogical results due to char overflow or misinterpretation of negative numbers.  
- Using `unsigned char` ensures that all character values are treated within the range `0-255`, which avoids these errors and guarantees logical output.

---

## Q2: What is `#include` and similar constructs?

**Answer:**  
`#include` is a **preprocessor directive** in C that includes the content of another file (typically a header file) into the current file before compilation.  
- Header files contain declarations like functions, macros, and constants needed by the program.

---

## Q3: What about `#ifndef` and related constructs?

**Answer:**  
These are **include guards** used to prevent multiple inclusions of the same header file during compilation.  

Example:  
```c
#ifndef HEADER_NAME  
#define HEADER_NAME  
// Declarations go here  
#endif
```

How it works:  
1. **`#ifndef`** checks if the macro `HEADER_NAME` is not defined.  
2. If the macro is undefined, it defines it with `#define` and includes the declarations.  
3. On subsequent inclusions, the guard prevents redefinition errors by skipping the block.

---

## Q4: What happens in the compiler when compiling C code?

The process of compiling C code involves these steps:  
1. **Preprocessing**: Handles preprocessor directives like `#include` and `#define`.  
2. **Compilation**: Converts preprocessed code into assembly code.  
3. **Assembly**: Translates assembly code into machine code, producing object files (`.o`).  
4. **Linking**: Combines object files into an executable or library.

### Prove it in the terminal:
You can observe each step by running:  
```bash
# Preprocessing
cc -E source.c -o source.i

# Compilation to assembly
cc -S source.i -o source.s

# Assembly to object file
cc -c source.s -o source.o

# Linking to executable
cc source.o -o executable
```

---

## Q5: What is a wildcard in Makefile?

**Answer:**  
Wildcards allow you to match patterns of filenames in a directory. For example:  
```make
SRCS = $(wildcard *.c)
```
This includes all `.c` files in the current directory into the `SRCS` variable.

---

## Q6: Explanation of Makefile Components

### Variables:
- **`NAME = libft.a`**: Name of the output static library.  
- **`CC = cc`**: Specifies the compiler.  
- **`CFLAGS = -Wall -Wextra -Werror`**: Compiler flags for enabling warnings and treating them as errors.  
- **`AR = ar rcs`**: Archive command to create a static library.  
- **`RM = rm -f`**: Command to remove files.

### Targets:
- **`all`**: Default target to build the library (`libft.a`).  
- **`bonus`**: Builds the library with bonus files.  
- **`clean`**: Removes object files.  
- **`fclean`**: Removes object files and `libft.a`.  
- **`re`**: Cleans and rebuilds the project.

### Rules:
- **Pattern Rule**:  
  ```make
  %.o: %.c libft.h
      $(CC) $(CFLAGS) -c $< -o $@
  ```
  This converts each `.c` file into a corresponding `.o` file.  
  - `$<`: Refers to the first dependency (e.g., the `.c` file).  
  - `$@`: Refers to the target (e.g., the `.o` file).

---

## Q7: Implicit Rules and Variables

### Implicit Rules:
Makefiles automatically use a set of **implicit rules** if no explicit rule is defined. For example:  
- To compile `.c` into `.o`:  
  ```make
  foo.o: foo.c
      $(CC) $(CFLAGS) -c foo.c -o foo.o
  ```
  This rule is built-in, so you don't need to define it explicitly unless you need customization.

### Implicit Variables:
- **`CC`**: The C compiler, defaults to `cc`.  
- **`CFLAGS`**: Flags for the compiler.  
- **`RM`**: The remove command, defaults to `rm -f`.  
- **`AR`**: The archive command, usually `ar`.  
---
