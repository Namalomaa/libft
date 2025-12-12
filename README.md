*This project has been created as part of the 42 curriculum by namaloma.*

# Libft

## Description

Libft is a foundational project of the 42 curriculum. The goal of this project is to recreate a personal C library by reimplementing a set of standard libc functions, along with additional utility functions and linked list manipulation tools.

By building this library from scratch, the project aims to strengthen understanding of:

* Low-level memory management
* String and memory manipulation
* Pointers and data structures
* Modular and reusable code design in C

The resulting static library, `libft.a`, is intended to be reused in future 42 projects.

---

## Instructions

### Compilation

To compile the library, run:

```bash
make
```

This will generate the static library `libft.a` at the root of the repository.

### Cleaning build files

* Remove object files:

  ```bash
  make clean
  ```

* Remove object files and the library:

  ```bash
  make fclean
  ```

* Recompile everything from scratch:

  ```bash
  make re
  ```

### Usage

To use the library in another project, include the header and link the library:

```c
#include "libft.h"
```

```bash
cc your_program.c libft.a
```

---

## Library Overview

The library is composed of three main parts:

### Part 1 – Libc Functions

Reimplementations of standard C library functions, all prefixed with `ft_`:

* Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
* String and memory: `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
* String utilities: `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
* Memory utilities: `ft_memchr`, `ft_memcmp`
* Conversion: `ft_atoi`
* Allocation-based: `ft_calloc`, `ft_strdup`

These functions replicate the behavior described in their respective man pages.

---

### Part 2 – Additional Functions

Utility functions not present in libc or provided in a different form:

* `ft_substr` – Extract a substring
* `ft_strjoin` – Concatenate two strings
* `ft_strtrim` – Trim characters from both ends of a string
* `ft_split` – Split a string using a delimiter
* `ft_itoa` – Convert an integer to a string
* `ft_strmapi` – Apply a function to each character of a string
* `ft_striteri` – Apply a function to each character by reference
* `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` – Output utilities using file descriptors

All allocation-based functions properly handle memory and edge cases.

---

### Part 3 – Linked List Functions

Functions to manipulate singly linked lists using the following structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
```

Implemented functions:

* `ft_lstnew` – Create a new node
* `ft_lstadd_front` – Add a node at the beginning
* `ft_lstsize` – Count nodes
* `ft_lstlast` – Get last node
* `ft_lstadd_back` – Add a node at the end
* `ft_lstdelone` – Delete a single node
* `ft_lstclear` – Delete an entire list
* `ft_lstiter` – Apply a function to each node
* `ft_lstmap` – Create a new list by applying a function

These functions ensure proper memory management and safe list manipulation.

---

## Resources

### References

* Linux man pages (`man strlen`, `man memcpy`, etc.)
* C Reference: cppreference.com
* GNU C Library documentation
* BSD libc documentation (for `strlcpy`, `strlcat`, `bzero`)
* Mike sahah C Programming Series https://youtube.com/playlist?list=PLvv0ScY6vfd8M-Mi_Vyrg7KgISTW3Sklt&si=Qk1EG9fp1UFRK4yy
* libft-war machine https://github.com/0x050f/libft-war-machine

### AI Usage

AI tools were used strictly as a learning aid, primarily for:

* Clarifying concepts related to pointers, memory management, and Makefiles
* Understanding edge cases and design decisions
* Reviewing and explaining existing code

All code was written, tested, and understood in compliance with the 42 AI usage guidelines.

---

## Notes

* All files are located at the root of the repository as required.
* The project follows the 42 Norm and is compiled with `-Wall -Wextra -Werror`.
* No global variables are used.

---

## Author : namaloma

* <namaloma>
