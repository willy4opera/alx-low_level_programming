#!/bin/bash
gcc -wall -wextra -werror -pedantic -fPIC -c *.c
gcc -shared -o liball.so *.o
export LD-LIBRARY_PATH=.:$LD_LIBRARY_PATH
