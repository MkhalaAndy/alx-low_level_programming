#!/bin/bash
gcc -Wall -pedantic -Wexrror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
