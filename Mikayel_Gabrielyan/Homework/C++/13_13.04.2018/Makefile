compiler = -std=c++11

all: stringVector 

stringVector: main.o stringVector.o 
		g++ $(compiler)  main.o stringVector.o -o stringVector 

main.o: main.cpp
		g++ $(compiler) -c main.cpp

stringVector.o: stringVector.cpp
		g++ $(compiler) -c stringVector.cpp

clean:
	rm -rf *.o stringVector
