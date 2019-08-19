# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/t_and_f t_and_f.c
win = -o t_and_f.exe t_and_f.c

ifeq ($(shell uname -s), Windows_NT)
t_and_f:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
t_and_f:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
t_and_f:
	$(CC) $(win)
else
t_and_f:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif