#!/bin/sh

c++ -I./include/ -I./fonts/ ./src/fonts/ANSI_Regular.cpp ./src/fonts/Default.cpp ./src/FFont.cpp -o ffont 
