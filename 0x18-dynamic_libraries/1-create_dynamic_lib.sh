#!/bin/bash
gcc -wall -wextra -werror -pendantic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRAR_PATH
