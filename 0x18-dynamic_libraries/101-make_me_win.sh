#!/bin/bash
gcc *.c -fPIC -shared -o library.so
export LD_PRELOAD=/tmp/library.so
