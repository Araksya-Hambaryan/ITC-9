all: BinarySerch


BinarSerch: main.o BinarySerch.o
    g++ main.o BinarySerch.o -o BinarySerch

main.o: main.cpp BinarySerch.hpp
    g++ -c main.cpp

BinarySerch: BinarySerch.cpp BinarySerch.hpp
    g++ -c BinarySerch.cpp

clean:
    rm -rf *.o BinarySerch

