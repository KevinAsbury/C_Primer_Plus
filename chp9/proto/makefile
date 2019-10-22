# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/proto proto.c
win = -o proto.exe proto.c

ifeq ($(shell uname -s), Windows_NT)
proto:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
proto:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
proto:
	$(CC) $(win)
else
proto:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif