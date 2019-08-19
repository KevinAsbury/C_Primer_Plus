# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/for_cube for_cube.c
win = -o for_cube.exe for_cube.c

ifeq ($(shell uname -s), Windows_NT)
for_cube:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
for_cube:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
for_cube:
	$(CC) $(win)
else
for_cube:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif