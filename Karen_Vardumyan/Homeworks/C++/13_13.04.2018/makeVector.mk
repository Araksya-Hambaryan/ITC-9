all: makeVector

hello: main.o hello.o
        g++ -std=c++11 main.o vector.o -o makeVector

main.o: main.cpp
        g++ -std=c++11  -c main.cpp

hello.o: vector.cpp
        g++ -std=c++11 -c vector.cpp

clean:
	rm -rf *.o makeVector
