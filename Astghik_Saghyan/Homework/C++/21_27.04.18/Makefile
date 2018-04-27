compiler = -std=c++11
name = hMap

all: a.out

a.out: main.o $(name).o
	g++ $(compiler) main.o $(name).o -o a.out

main.o: main.cpp
	g++ $(compiler) main.cpp -c

$(name).o: $(name).cpp $(name).hpp
	g++ $(compiler) $(name).cpp -c 

clean:
	rm -rf *o
