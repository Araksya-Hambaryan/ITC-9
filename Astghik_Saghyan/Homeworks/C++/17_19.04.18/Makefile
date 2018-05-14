compiler = -std=c++11

all: a.out

a.out: main.o vector.o var.o number.o string.o
	g++ $(compiler) main.o vector.o var.o number.o string.o -o a.out

main.o: main.cpp
	g++ $(compiler) main.cpp -c

vector.o: vector.cpp vector.hpp
	g++ $(compiler) vector.cpp -c 

var.o: var.cpp var.hpp
	g++ $(compiler) var.cpp -c
 
number.o: number.cpp number.hpp
	g++ $(compiler) number.cpp -c

string.o: string.cpp string.hpp
	g++ $(compiler) string.cpp -c
clean:
	rm -rf *o
