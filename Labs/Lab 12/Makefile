#recipes
VPATH = src
SDIR = src
CC = g++
CFLAGS  = -std=c++11 -Wall

main: main.o vectors.o optimism.o fusion.o pairwise.o
	$(CC) $(CFLAGS) -o $@ $^

tests: tests.o vectors.o optimism.o fusion.o pairwise.o
	$(CC) $(CFLAGS) -o $@ $^

vectors.o: vectors.cpp
	$(CC) $(CFLAGS) -c $^

optimism.o: optimism.cpp
	$(CC) $(CFLAGS) -c $^

fusion.o: fusion.cpp
	$(CC) $(CFLAGS) -c $^

pairwise.o: pairwise.cpp
	$(CC) $(CFLAGS) -c $^

tests.o: tests.cpp doctest.h
	$(CC) $(CFLAGS) -c $<

main.o: main.cpp
	$(CC) $(CFLAGS) -c $^

.PHONY: clean

clean:
	rm -f *o src/*o main tests a.out
