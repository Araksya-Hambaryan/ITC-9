all: a.out

a.out: main.o animal.o
	g++ main.o animal.o -o a.out

main.o: main.cpp
	g++ main.cpp -c

animal.o: animal.cpp animal.hpp
	g++ animal.cpp -c 

clean:
	rm -rf *o
