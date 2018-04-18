all: vector

vector: main.o vector.o
	g++ -std=c++11 main.o vector.o -o vector

main.o: main.cpp vector.hpp
	g++ -std=c++11 -c main.cpp

vector.o: vector.cpp vector.hpp 
	g++ -std=c++11 -c vector.cpp

clean:
	rm -rf *.o vector
