compiler = -std=c++11

all: a.out

a.out: main.o vector.o
	g++ $(compiler) main.o vector.o -o a.out

main.o: main.cpp
	g++ $(compiler) main.cpp -c

vector.o: vector.cpp vector.hpp
	g++ $(compiler) vector.cpp -c 

clean:
	rm -rf *o
