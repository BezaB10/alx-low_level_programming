#!/bin/bash
gcc *.c -fPIC -shared -o libruin.so
export LD_PRELOAD=$PWD/libruin.so
