CC = g++
# CC = gcc

CFLAGS = -I. -Wall -lm -ldl -no-pie -std=c++11

OPTFLAG = -O2
EXEC_NAME = sim

all: simulation tests

simulation: person
	$(CC) -o $(EXEC_NAME) main.cpp Person.o $(CFLAGS)

person:
	$(CC) -c Person.cpp Person.hpp $(CFLAGS)

tests: person
	$(CC) -o test_person test/TestPerson.cpp Person.o $(CFLAGS)

clean:
	rm -f sim
	rm -f *.gch
	rm -f *.o
	rm -f test_person
