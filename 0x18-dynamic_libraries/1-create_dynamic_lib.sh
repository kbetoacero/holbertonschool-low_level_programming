#!/bin/bash
gcc -fpic -Wall -Werror -Wextra -pedantic -c *.c
gcc -shared -fpic -o liball.so *.o
