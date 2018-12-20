CC = g++
# CC = gcc

CFLAGS = -I. -Wall -lm -ldl -no-pie -std=c++11

OPTFLAG = -O2
EXEC_NAME = sim

all: simulation

simulation: adder
	$(CC) -o $(EXEC_NAME) main.cpp adder.o $(CFLAGS)

adder: adder.cpp adder.hpp
	$(CC) -c adder.cpp adder.hpp $(CFLAGS)

clean:
	rm -f sim
	rm -f *.gch
	rm -f *.o
