#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -Wall -pedantic -Werror -Wextra -fPIC -c *.c

# Create a dynamic library from all the object files
gcc -shared -o liball.so *.o
