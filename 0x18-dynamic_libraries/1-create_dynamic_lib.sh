#!/bin/bash
gcc -c fPIC 100-operations.c
gcc -shared -o 100-operations.so 100-operations.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
