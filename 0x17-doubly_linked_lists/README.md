# 0x17. C - Doubly linked lists

## Introduction
This project is part of the ALX Software Engineering curriculum. It focuses on the concept and implementation of doubly linked lists in C programming. The tasks cover creating, manipulating, and freeing doubly linked lists, providing practical experience in managing data structures and understanding their underlying operations.

## Environment
- **Language**: C
- **Compiler**: gcc 4.8.4
- **Style Guideline**: Betty Style
- **Development and Testing Environment**: Ubuntu 20.04 LTS

## Setup
To get started with these tasks, clone the ALX low level programming repository:

```bash
git clone https://github.com/Y4SS11N3/alx-higher_level_programming/
```

## Usage
Each task in this project is contained in a separate C file. To compile the tasks, use the gcc command as follows:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <filename.c> -o <outputname>
```

## Requirements
- All files are compiled on Ubuntu 20.04 LTS.
- All files end with a new line.
- Code uses the Betty style for checking.
- No more than 5 functions per file.
- The prototypes of all functions and the prototype of the structure dlistint_t should be included in the header file lists.h.
- All header files should be include guarded.

## Data Structure Used
```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Learning Objectives
- Understand and use doubly linked lists.
- Build and use libraries.
- Use data structures to solve real-world problems.
- Manage memory allocation and deallocation (malloc and free).

## Authors
Yassine Mtejjal
