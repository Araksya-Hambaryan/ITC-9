#include "queue.hpp"
#include <iostream>

Queue :: Queue() {
    size = 0;
    arr = nullptr;
    
}
Queue :: Queue(int n,int a){
	std :: cout << "parametrakan constructor" << std :: endl;
	size = n;
	arr = new int[size];
	for(int i = 0;i < size;++i){
	arr[i] = a;
	}

}

Queue :: Queue(const Queue& object) {
    std :: cout << "copy constructor" << std :: endl;
    this -> size = object.size;
    this -> arr = new int[size];
    for (int i = 0; i < size; ++i) {
        this -> arr[i] = object.arr[i];
    }
}

Queue :: ~Queue() {
    std :: cout << "destructor" << std :: endl;
    delete[] arr;
}

void Queue :: push(int value) {
    int* temp = arr;
    arr = new int[++size];
    for (int i = 0; i < size - 1; ++i) {
       arr[i] = temp[i];
  }
    arr[size - 1] = value;
    delete[] temp;
    temp = nullptr;
}

void Queue :: pop() {
    int* temp = arr;
    arr = new int[--size];
    for (int i = 0; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    delete[] temp;
    temp = nullptr;
}

void Queue :: print() {
    for (int i = 0; i < size; ++i) {
        std :: cout << arr[i] << " ";
    }
    std :: cout << std :: endl;
}

void Queue :: getSize() {
    std :: cout << size << std :: endl;
}
