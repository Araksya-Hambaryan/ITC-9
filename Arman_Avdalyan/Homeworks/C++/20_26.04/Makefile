compiler = --std=c++11
name = tree
all: $(name)

$(name): main.o tree.o
	g++ $(compiler) main.o tree.o -o $(name)

main.o: main.cpp
	g++ $(compiler) -c main.cpp

tree.o: tree.cpp
	g++ $(compiler) -c tree.cpp

clean:
	rm -rf *.o $(name)
