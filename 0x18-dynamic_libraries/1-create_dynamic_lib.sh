#!/bin/bash
gcc -c -fPIC *.c
gcc -shared *.o -o liball.so
nm -D liball.so
