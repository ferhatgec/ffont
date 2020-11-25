#!/bin/sh

sudo c++ -I./include/ -I./fonts/ ./src/fonts/ANSI_Regular.cpp ./src/fonts/Default.cpp ./src/FFont.cpp -o /bin/ffont 
