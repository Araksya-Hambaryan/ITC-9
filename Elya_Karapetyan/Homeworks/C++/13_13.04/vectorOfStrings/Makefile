all: vectorOfStrings 

vectorOfStrings: main.o vectorOfStrings.o 
	g++ -std=c++11 main.o vectorOfStrings.o -o vectorOfStrings 

main.o: main.cpp vectorOfStrings.hpp
	g++ -std=c++11 -c main.cpp

vectorOfStrings.o: vectorOfStrings.cpp vectorOfStrings.hpp
	g++ -std=c++11 -c vectorOfStrings.cpp

clean:
	rm -rf *.o vectorOfStrings

