#!/bin/bash
ar -rc liball.a *.c
gcc -o main main.c -L. -lall
