compiler = -std=c++11

all: a.out

a.out: main.o queue.o 
	g++ $(compiler) main.o queue.o -o a.out

main.o: main.cpp queue.hpp
	g++ $(compiler) main.cpp -c

queue.o: queue.cpp queue.hpp
	g++ $(compiler) queue.cpp -c 


clean:
	rm -rf *o
