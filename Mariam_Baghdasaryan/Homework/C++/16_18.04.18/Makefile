compiler = --std=c++11
name = stack
all: $(name)

$(name): main.o vector.o stack.o
	g++ $(compiler) main.o vector.o stack.o -o $(name)

main.o: main.cpp
	g++ $(compiler) -c main.cpp

vector.o: vector.cpp
	g++ $(compiler) -c vector.cpp

stack.o: stack.cpp
	g++ $(compiler) -c stack.cpp

clean:
	rm -rf *.o $(name)
