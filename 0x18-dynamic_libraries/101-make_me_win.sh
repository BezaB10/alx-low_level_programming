#!/bin/bash
gcc *.c -fPIC -shared -o libruin.so
LD_PRELOAD=$PWD/library.so
