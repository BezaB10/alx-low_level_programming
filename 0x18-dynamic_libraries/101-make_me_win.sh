#!/bin/bash
gcc *.o -shared -o win.so
LD_PRELOAD=$PWD/win.so
