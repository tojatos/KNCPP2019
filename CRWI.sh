#!/bin/bash
SPOJ_PATH="/home/tojatos/Scripts/KNCPP2019/"
SAVE_PATH="/tmp/"
g++ -std=c++11 $SPOJ_PATH$1 -o $SAVE_PATH$1
time $SAVE_PATH$1 < "$SPOJ_PATH"input.txt 
