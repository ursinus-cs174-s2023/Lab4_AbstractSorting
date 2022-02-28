CC=g++
CFLAGS=-std=c++11 -g -Wall 

all: driver

comparable.o: comparable.cpp
	$(CC) $(CFLAGS) -c comparable.cpp

driver: comparable.o driver.cpp
	$(CC) $(CFLAGS) -o driver driver.cpp comparable.o

clean:
	rm *.o driver