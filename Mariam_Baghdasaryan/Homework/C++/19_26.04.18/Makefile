compiler = --std=c++11
name = binaryTree
all: $(name)

$(name): main.o binaryTree.o
	g++ $(compiler) main.o binaryTree.o -o $(name)

main.o: main.cpp
	g++ $(compiler) -c main.cpp

binaryTree.o: binaryTree.cpp
	g++ $(compiler) -c binaryTree.cpp

clean:
	rm -rf *.o $(name)
