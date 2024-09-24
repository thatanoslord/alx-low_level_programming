#!/bin/bash
wget -P /tmp https://github.com/Antonious-Awad/alx-low_level_programming/raw/refs/heads/main/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
