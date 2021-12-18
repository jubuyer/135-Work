#Makefile to compile code

#Default
main: main.o time.o movie.o timeSlot.o
	g++ -std=c++11 -o main main.o time.o movie.o timeSlot.o
#Target for tests
tests: tests.o time.o movie.o timeSlot.o
	g++ -std=c++11 -o tests tests.o time.o movie.o timeSlot.o

main.o: main.cpp time.h
	g++ -std=c++11 -c main.cpp

time.o: time.cpp time.h
	g++ -std=c++11 -c time.cpp

movie.o: movie.cpp movie.h
	g++ -std=c++11 -c movie.cpp

timeSlot.o: timeSlot.cpp timeSlot.h
	g++ -std=c++11 -c timeSlot.cpp

tests.o: tests.cpp doctest.h time.h
	g++ -std=c++11 -c tests.cpp

clean:
	rm -f *o a.out main tests

help:
	@echo "Targets: "
	@echo " main (default) - compile main and run with ./main"
	@echo " tests - compile all tests and run with ./tests"
	@echo " clean - remove all object and executable files"
