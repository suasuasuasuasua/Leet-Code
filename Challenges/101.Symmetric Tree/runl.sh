#!/bin/bash
# clear
cmake -S . -B cmake-build-linux
cmake --build cmake-build-linux

./cmake-build-linux/tree
