#recipes
VPATH = src
SDIR = src
CC = g++
CFLAGS = -std=c++11 #-Wall

#targets
main: main.o recursion.o
	$(CC) $(CFLAGS) -o $@ $^

tests: tests.o recursion.o
	$(CC) $(CFLAGS) -o $@ $^

recursion.o: recursion.cpp
	$(CC) $(CFLAGS) -c $^

main.o: main.cpp
	$(CC) $(CFLAGS) -c $^

tests.o: tests.cpp doctest.h
	$(CC) $(CFLAGS) -c $<

.PHONY: clean

clean:
	rm -f *o *out $(SDIR)/*out main tests
