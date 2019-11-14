# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/ptr_ops ptr_ops.c
win = -o ptr_ops.exe ptr_ops.c

ifeq ($(shell uname -s), Windows_NT)
ptr_ops:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
ptr_ops:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
ptr_ops:
	$(CC) $(win)
else
ptr_ops:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif