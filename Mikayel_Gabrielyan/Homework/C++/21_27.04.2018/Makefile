all: hashTable

hashTable: main.o list.o hashTable.o
	g++ -std=c++11 main.o list.o hashTable.o -o hashTable

main.o: main.cpp hashTable.hpp
	g++ -std=c++11 -c main.cpp

list.o: list.cpp list.hpp
	g++ -std=c++11 -c list.cpp

hashTable.o: hashTable.cpp hashTable.hpp list.hpp
	g++ -std=c++11 -c hashTable.cpp

clean:
	rm -rf *.o hashTable
