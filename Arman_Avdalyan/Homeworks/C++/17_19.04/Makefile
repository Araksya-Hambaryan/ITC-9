compiler = --std=c++11
name = vector
all: $(name)

$(name): main.o vector.o var.o number.o string.o
	g++ $(compiler) main.o vector.o var.o number.o string.o -o $(name)

main.o: main.cpp
	g++ $(compiler) -c main.cpp

vector.o: ./Vector/vector.cpp
	g++ $(compiler) -c ./Vector/vector.cpp

var.o: ./var/var.cpp
	g++ $(compiler) -c ./var/var.cpp

number.o: ./var/number.cpp
	g++ $(compiler) -c ./var/number.cpp

string.o: ./var/string.cpp
	g++ $(compiler) -c ./var/string.cpp

clean:
	rm -rf *.o $(name)
