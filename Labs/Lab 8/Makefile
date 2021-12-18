main: main.o funcs.o imageio.o
	g++ -o main main.o funcs.o imageio.o

sample: sample.o imageio.o
	g++ -o sample sample.o imageio.o

main.o: main.cpp imageio.cpp funcs.h
	g++ -std=c++11 -c main.cpp imageio.cpp

funcs.o: funcs.cpp imageio.cpp funcs.h
	g++ -std=c++11 -c funcs.cpp imageio.cpp

sample.o: sample.cpp imageio.h
	g++ -std=c++11 -c sample.cpp imageio.cpp

imageio.o: imageio.cpp imageio.h
	g++ -std=c++11 -c imageio.cpp

clean:
	rm -f *o task* sample main
