#!/bin/bash
gcc *.c -fPIC -shared -o librun.so
export LD_PRELOAD=$pwd/librun.so
