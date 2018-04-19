all: varVector

varVector: main.o var.o number.o string.o vector.o
	    g++ -std=c++11 main.o var.o number.o string.o vector.o -o varVector

main.o: main.cpp var.hpp number.hpp string.hpp vector.hpp
	    g++ -std=c++11 -c main.cpp

var.o: var.cpp var.hpp
	    g++ -std=c++11 -c var.cpp

number.o: number.cpp number.hpp
	    g++ -std=c++11 -c number.cpp

string.o: string.cpp string.hpp
	    g++ -std=c++11 -c string.cpp

vector.o: vector.cpp vector.hpp
		g++ -std=c++11 -c vector.cpp
		g++ -std=c++11 -c vector.cpp
clean:
	    rm -rf *.o varVector             
