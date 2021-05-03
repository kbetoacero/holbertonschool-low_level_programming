#!/bin/bash
gcc -c -Wall -pedantic -Werror -Wextra -fPIC  -shared -o liball.so *.c
