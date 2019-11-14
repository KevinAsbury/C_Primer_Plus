# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/order order.c
win = -o order.exe order.c

ifeq ($(shell uname -s), Windows_NT)
order:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
order:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
order:
	$(CC) $(win)
else
order:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif