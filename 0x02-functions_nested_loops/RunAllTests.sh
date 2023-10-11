#!/bin/bash
echo ""
echo "[BETTY SAYS]:"
betty $1.c
echo "----------------------------------------------------"
echo ""
echo "[COMPILING AND LINKING WITH GCC]:"
echo ""
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 $1.c -o $1
echo "----------------------------------------------------"
echo ""
echo "[RUNNING GENERETED BINARY AND CLEANING UP]:"
echo ""
./$1 && rm -rf $1
echo ""
