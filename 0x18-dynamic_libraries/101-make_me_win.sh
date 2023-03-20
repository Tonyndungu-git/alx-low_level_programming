#!/bin/bash
wget -O /tmp/libfix.so https://github.com/Tonyndungu-git/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libfix.so?raw=true
export LD_PRELOAD=/tmp/libfix.so
