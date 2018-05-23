compiler = --std=c++11
name = hashMap
all: $(name)

$(name): main.o hashMap.o
	g++ $(compiler) main.o hashMap.o -o $(name)

main.o: main.cpp
	g++ $(compiler) -c main.cpp

hashMap.o: hashMap.cpp
	g++ $(compiler) -c hashMap.cpp

clean:
	rm -rf *.o $(name)

