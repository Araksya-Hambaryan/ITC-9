all: binarySearch

binarySearch: main.o BinarySerch.o
	g++ -std=c++11 main.o BinarySerch.o -o binarySearch

main.o: main.cpp BinarySerch.hpp 
	g++ -std=c++11 -c main.cpp

BinarySerch.o: BinarySerch.cpp  BinarySerch.hpp
	g++ -std=c++11 -c BinarySerch.cpp

clean:
	rm -rf *.o binarySearch
