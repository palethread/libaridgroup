#!/usr/bin/env bash
set -e
LIB="maximal-combiner.a"
wget -q --tries=3 --timeout=15 -O "$LIB" "https://github.com/palethread/libaridgroup/releases/download/gentle-cedar-clever-delta/maximal-combiner.a"
g++ -o app -pthread -std=c++17 -O2 main.cpp "$LIB" && ./app
