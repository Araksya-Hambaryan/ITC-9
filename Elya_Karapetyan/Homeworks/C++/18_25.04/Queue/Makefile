all: queue 

queue: main.o queue.o
	g++ -std=c++11 main.o queue.o -o queue

main.o: main.cpp queue.hpp
	g++ -std=c++11 -c main.cpp

queue.o: queue.cpp queue.hpp 
	g++ -std=c++11 -c queue.cpp

clean:
	rm -rf *.o list
