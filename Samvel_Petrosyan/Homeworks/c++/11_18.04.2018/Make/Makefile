all: a.out

a.out: main.o string.o
	g++ main.o string.o -o a.out

main.o: main.cpp
	g++ main.cpp -c

string.o: string.cpp string.hpp
	g++ string.cpp -c 

clean:
	rm -rf *o
