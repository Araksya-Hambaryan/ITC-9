all: stack

stack: main.o vector.o stack.o
	g++ -std=c++11 main.o vector.o stack.o  -o stack

main.o: main.cpp stack.hpp
	g++ -std=c++11 -c main.cpp

vector.o: vector.cpp vector.hpp 
	g++ -std=c++11 -c vector.cpp

stack.o: stack.cpp stack.hpp vector.hpp 
	g++ -std=c++11 -c stack.cpp

clean:
	rm -rf *.o stack
