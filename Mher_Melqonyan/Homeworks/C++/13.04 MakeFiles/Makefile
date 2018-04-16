all: CreateMake

compiler = --std=c++11

CreateMake: main.o function1.o function2.o
	g++ $(compiler) main.o function1.o function2.o -o CreateMake

main.o: main.cpp
	g++ $(compiler) -c main.cpp

function1.o: function1.cpp
	g++ $(compiler) -c function1.cpp

function2.o: function2.cpp
	g++ $(compiler) -c function2.cpp

clean:
	rm -rf *o CreateMake
