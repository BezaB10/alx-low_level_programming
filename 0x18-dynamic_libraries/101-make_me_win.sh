#!/bin/bash
gcc *.c -fPIC -shared -o librun.so
LD_PRELOAD=$PWD/librun.so
