compiler = -std=c++11

all: a.out

a.out: main.o vector.o stack.o
	g++ $(compiler) main.o vector.o stack.o -o a.out

main.o: main.cpp stack.hpp
	g++ $(compiler) main.cpp -c

vector.o: vector.cpp vector.hpp
	g++ $(compiler) vector.cpp -c 

stack.o: stack.cpp stack.hpp vector.hpp
	g++ $(compiler) stack.cpp -c 



clean:
	rm -rf *o
