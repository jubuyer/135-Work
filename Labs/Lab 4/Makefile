#makefile Lab 4
main: main.o shapes.o
	g++ -Wall -o main main.o shapes.o

main.o: main.cpp shapes.h
	g++ -c main.cpp

shapes.o: shapes.cpp shapes.h
	g++ -c shapes.cpp

clean:
	rm -f main.o shapes.o main

help:
	@echo "Targets:"
	@echo " main : compiles files and creates main executable"
	@echo " clean : removes object files and executable"
