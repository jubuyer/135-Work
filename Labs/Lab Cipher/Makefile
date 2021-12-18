main: main.o funcs.o
	g++ -o main main.o funcs.o

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o



funcs.o: funcs.cpp funcs.h
	g++ -c -std=c++11 -Wall funcs.cpp

main.o: main.cpp funcs.h
	g++ -c -std=c++11 -Wall main.cpp

tests.o: tests.cpp doctest.h funcs.h
	g++ -c -std=c++11 -Wall tests.cpp

clean:
	rm -f *o a.out main tests

help:
	@echo "Targets: "
	@echo " main (default) - compile main and run with ./main"
	@echo " tests - compile all tests and run with ./tests"
	@echo " clean - remove all object and executable files"
