all: Stack 

Stack: main.o Stack.o Vector.o
	g++ -std=c++11 main.o Vector.o Stack.o -o stack

main.o: main.cpp Stack.hpp
	g++ -std=c++11 -c main.cpp

Vector.o: Vector.cpp Vector.hpp 
	g++ -std=c++11 -c Vector.cpp

Stack.o: Stack.cpp Stack.hpp 
	g++ -std=c++11 -c Stack.cpp

clean:
	rm -rf *.o binarySearch
