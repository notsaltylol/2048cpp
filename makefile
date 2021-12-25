
CC = g++
CFLAGS = -Wall -g

make:
	$(CC) $(CFLAGS) -o main main.cpp Board.cpp Game.cpp