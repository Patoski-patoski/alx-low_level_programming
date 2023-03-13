#!/bin/bash
gcc -c *.c
ar rcs liball.a *.o
ar rcs libmy.a *.o
