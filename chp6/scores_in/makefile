# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/scores_in scores_in.c
win = -o scores_in.exe scores_in.c

ifeq ($(shell uname -s), Windows_NT)
scores_in:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
scores_in:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
scores_in:
	$(CC) $(win)
else
scores_in:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif