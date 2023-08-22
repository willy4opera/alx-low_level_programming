#!/bin/bash
wget -P /tmp https://github.com/willy4opera/0x18-dynamic_libraries/blob/main/nrandom.so
export LD_PRELOAD=/tmp/nrandom.s
