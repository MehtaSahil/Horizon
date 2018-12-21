CC = g++
# CC = gcc

CFLAGS = -I. -Wall -lm -ldl -no-pie -std=c++11

OPTFLAG = -O2
EXEC_NAME = sim

all: simulation

simulation: person
	$(CC) -o $(EXEC_NAME) main.cpp Person.o $(CFLAGS)

person:
	$(CC) -c Person.cpp Person.hpp $(CFLAGS)

clean:
	rm -f sim
	rm -f *.gch
	rm -f *.o
