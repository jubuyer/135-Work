#Makefile to compile code

#Default
main: main.o profile.o network.o
	g++ -std=c++11 -o main main.o profile.o network.o

#Target for tests
tests: tests.o profile.o network.o
	g++ -std=c++11 -o tests tests.o profile.o network.o

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

tests.o: tests.cpp doctest.h
	g++ -std=c++11 -c tests.cpp

profile.o: profile.cpp profile.h
	g++ -std=c++11 -c profile.cpp

network.o: network.cpp network.h
	g++ -std=c++11 -c network.cpp

clean:
	rm -f *o a.out main tests
