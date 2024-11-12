# Libft - Custom C Standard Library

Libft is a custom implementation of functions commonly found in the C Standard Library, as well as some additional utility functions, designed for educational purposes. This project aims to replicate and understand the inner workings of these essential functions while enhancing skills in memory management, linked list manipulation, and string handling in C.

## Table of Contents
- [Overview](#overview)
- [File Structure](#file-structure)
- [Compilation](#compilation)
- [Functions](#functions)
- [Usage](#usage)
- [Contributing](#contributing)

## Overview

This project is organized as a personal C library (`libft.a`) containing a collection of functions. These include standard library functions like `atoi`, `strcpy`, and `memset`, as well as bonus functions for linked list manipulation. The library is designed to be reusable across multiple projects, providing a solid foundation of utility functions.

## File Structure

The project files are organized as follows:

```
Makefile                # Makefile for compiling the library
libft.h                 # Header file containing function prototypes
```

### Function Files
The functions are organized into logical groups:

- **String Manipulation**: `ft_strlen.c`, `ft_strcpy.c`, `ft_strncmp.c`, etc.
- **Memory Management**: `ft_calloc.c`, `ft_memcpy.c`, `ft_bzero.c`, etc.
- **Character Checking/Conversion**: `ft_isalpha.c`, `ft_tolower.c`, etc.
- **Linked List Operations** (Bonus): `ft_lstadd_back_bonus.c`, `ft_lstclear_bonus.c`, etc.

## Compilation

To compile the library, simply run:

```sh
make
```

This will produce `libft.a`, which you can link against in other C projects. To clean up object files and other temporary files, use:

```sh
make clean
```

To remove all generated files including `libft.a`, use:

```sh
make fclean
```

To recompile the library, use:

```sh
make re
```

## Functions

Here's a brief description of each function category and some key functions:

### String Manipulation
- `ft_strlen`: Calculates the length of a string.
- `ft_strjoin`: Concatenates two strings into a new one.
- `ft_strtrim`: Removes specified characters from the beginning and end of a string.
- `ft_split`: Splits a string into an array of strings based on a delimiter.

### Memory Management
- `ft_calloc`: Allocates memory for an array and initializes it to zero.
- `ft_memset`: Fills a block of memory with a specified value.
- `ft_bzero`: Zeroes out a block of memory.

### Character Checks and Conversions
- `ft_isalpha`: Checks if a character is alphabetic.
- `ft_isdigit`: Checks if a character is a digit.
- `ft_toupper`: Converts a character to uppercase.

### Linked List Operations (Bonus)
- `ft_lstnew_bonus`: Creates a new linked list node.
- `ft_lstadd_front_bonus`: Adds a node at the beginning of a list.
- `ft_lstclear_bonus`: Deletes and frees all nodes of a linked list.

## Usage

Include `libft.h` in your C files and compile your program with `libft.a`:

```c
#include "libft.h"

int main() {
    char *str = ft_strdup("Hello, Libft!");
    printf("%s\n", str);
    free(str);
    return 0;
}
```

Compile the above with:

```sh
cc main.c libft.a -o myprogram
```

## Contributing

Contributions to improve or extend the library are welcome. If you have ideas for additional functions or optimizations, please feel free to fork and submit a pull request.
