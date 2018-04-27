all: hashMap

hashMap: main.o list.o vector.o hashMap.o
	g++ -std=c++11 main.o list.o vector.o hashMap.o -o hashMap

main.o: main.cpp hashMap.hpp
	g++ -std=c++11 -c main.cpp

vector.o: vector.cpp vector.hpp list.hpp
	g++ -std=c++11 -c vector.cpp

list.o: list.cpp list.hpp
	g++ -std=c++11 -c list.cpp

hashMap.o: hashMap.cpp hashMap.hpp vector.hpp
	g++ -std=c++11 -c hashMap.cpp

clean:
	rm -rf *.o hashMap
