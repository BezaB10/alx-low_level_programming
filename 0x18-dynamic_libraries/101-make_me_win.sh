#!/bin/bash
gcc *.o -shared -o librun.so
LD_PRELOAD=$PWD/librun.so
