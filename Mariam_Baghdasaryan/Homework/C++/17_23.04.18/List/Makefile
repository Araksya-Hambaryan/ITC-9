compiler = --std=c++11
name = list
all: $(name)

$(name): main.o list.o
	g++ $(compiler) main.o list.o -o $(name)

main.o: main.cpp
	g++ $(compiler) -c main.cpp

list.o: list.cpp
	g++ $(compiler) -c list.cpp

clean:
	rm -rf *.o $(name)
