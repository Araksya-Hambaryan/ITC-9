compiler = -std=c++11

all: a.out

a.out: main.o list.o
	g++ $(compiler) main.o list.o -o a.out

main.o: main.cpp
	g++ $(compiler) main.cpp -c

list.o: list.cpp list.hpp
	g++ $(compiler) list.cpp -c 

clean:
	rm -rf *o
