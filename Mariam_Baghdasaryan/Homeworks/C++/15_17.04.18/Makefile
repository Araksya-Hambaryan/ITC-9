compiler = --std=c++11
all: vector

vector: main.o vector.o
	g++ $(compiler) main.o vector.o -o vector

main.o: main.cpp
	g++ $(compiler) -c main.cpp

vector.o: vector.cpp
	g++ $(compiler) -c vector.cpp

clean:
	rm -rf *.o vector

