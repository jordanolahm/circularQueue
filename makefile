CC = g++
CFLAGS = -std=c++11

all: main

main: main.cpp CircularQueue.cpp
    $(CC) $(CFLAGS) -o main main.cpp CircularQueue.cpp

clean:
    rm -f main