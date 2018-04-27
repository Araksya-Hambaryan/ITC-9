compiler = --std=c++11
name = hashMap
all: $(name)

$(name): main.o hashmap.o
	g++ $(compiler) main.o hashmap.o -o $(name)

main.o: main.cpp
	g++ $(compiler) -c main.cpp

hashmap.o: hashmap.cpp
	g++ $(compiler) -c hashmap.cpp

clean:
	rm -rf *.o $(name)
