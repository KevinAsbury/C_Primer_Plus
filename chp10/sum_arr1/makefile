# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/sum_arr1 sum_arr1.c
win = -o sum_arr1.exe sum_arr1.c

ifeq ($(shell uname -s), Windows_NT)
sum_arr1:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
sum_arr1:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
sum_arr1:
	$(CC) $(win)
else
sum_arr1:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif