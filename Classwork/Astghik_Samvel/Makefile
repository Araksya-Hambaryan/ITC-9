compiler = -std=c++11

all: a.out

a.out: main.o list.o queue.o
	g++ $(compiler) main.o list.o queue.o -o a.out

main.o: main.cpp queue.hpp
	g++ $(compiler) main.cpp -c

list.o: list.cpp list.hpp
	g++ $(compiler) list.cpp -c 

queue.o: queue.cpp queue.hpp list.hpp
	g++ $(compiler) queue.cpp -c

clean:
	rm -rf *o
