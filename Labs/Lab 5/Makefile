main: main.o funcs.o
	g++ -o main main.o funcs.o

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o

funcs.o: funcs.cpp funcs.h
	g++ -Wall -c funcs.cpp

main.o: main.cpp funcs.h
	g++ -Wall -c main.cpp

tests.o: tests.cpp doctest.h funcs.h
	g++ -std=c++11 -c tests.cpp 

clean:
	rm -f main tests main.o funcs.o tests.o

help:
	@echo "Targets: "
	@echo " main (default) - compile main and run with ./main"
	@echo " tests - compile all tests and run with ./tests"
	@echo " clean - remove all object and executable files"
