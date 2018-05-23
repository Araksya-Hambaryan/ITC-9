all: binaryTree

binaryTree: main.o binaryTree.o
	g++ -std=c++11 main.o binaryTree.o -o binaryTree

main.o: main.cpp binaryTree.hpp
	g++ -std=c++11 -c main.cpp

binaryTree.o: binaryTree.cpp binaryTree.hpp 
	g++ -std=c++11 -c binaryTree.cpp

clean:
	rm -rf *.o binaryTree
