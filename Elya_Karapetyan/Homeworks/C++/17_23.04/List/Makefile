all: list 

list: main.o list.o
	g++ -std=c++11 main.o list.o -o list

main.o: main.cpp list.hpp
	g++ -std=c++11 -c main.cpp

list.o: list.cpp list.hpp 
	g++ -std=c++11 -c list.cpp

clean:
	rm -rf *.o list
