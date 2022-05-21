#!/bin/sh
set -e

gcc main.c
diff -u main.c <(./a.out)
diff -u main.c <(python3 main.c)
