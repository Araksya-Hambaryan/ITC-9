compiler = --std=c++11
name = queue
all: $(name)

$(name): main.o queue.o
	g++ $(compiler) main.o queue.o -o $(name)

main.o: main.cpp
	g++ $(compiler) -c main.cpp

queue.o: queue.cpp
	g++ $(compiler) -c queue.cpp

clean:
	rm -rf *.o $(name)
