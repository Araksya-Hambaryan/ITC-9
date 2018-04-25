#include "Vector.hpp"

Vector::Vector() {
    std::cout << "default" << std::endl;
    this->array = new int[2];
    array[0] = 0;
}

Vector::Vector(const int size, const int number) {
	this->size = size + 1;
	this->array = new int[this->size];
	for (int i = 0; i < this->size - 1; ++i) {
		this->array[i] = number;
	}
}

int Vector::Size() {
    std::cout << "size" << std::endl;
    return (this->size + 1); 
}

void Vector::insert(const int num, const int place) {
    size = this->size + 1;
    int* arr = new int[size];
    for(int i = place + 1; i < size - 2; ++i) {
        arr[i] = this->array[i - 1];
    }
    arr[place] = num;
    this->size = size;
    delete[] this->array;
    this->array = arr;
    std::cout << "insert" << std::endl;
}

void Vector::eraise(const int num) {
    size = this->size - 1;
    int* arr = new int[size];
    for(int i = num - 1; i < size ; ++i) {
        arr[i] = this->array[i + 1];
    }
    this->size = size;
    delete[] this->array;
    this->array = arr;
    std::cout << "eraise" << std::endl;
}
    
void Vector::push(const int num) {
    size = this->size + 1;
    int* arr = new int[size];
    for(int i = 0; i < size - 2; ++i) {
        arr[i] = array[i];       
    }
    arr[size - 2] = num;
    this->size = size;
    delete[] this->array;
    this->array = arr;
    std::cout << "push" << std::endl;
}

void Vector::pushFront(const int num) {
    size = this->size + 1;
    int* arr = new int[size];
    for(int i = 1; i < size - 1; ++i) {
        arr[i] = array[i - 1];       
    }
    arr[0] = num;
    this->size = size;
    delete[] this->array;
    this->array = arr;
    std::cout << "pushFront" << std::endl;
}

int Vector::element(const int num) {
    std::cout << "array" << std::endl;
    if(0 > num || this->size < num) {
        std::cout << "invalid number" << std::endl;
        return -1;
    }
    return this->array[num];
}

void Vector::pop() {
    size = this->size - 1;
    int* arr = new int[size];
    for(int i = 0; i < size - 1; ++i) {
        arr[i] = array[i];       
    }
    arr[size - 2] = array[size - 1];
    this->size = size;
    delete[] this->array;
    this->array = arr;
    std::cout << "pop" << std::endl;
}
    
void Vector::popFront() {
    size = this->size - 1;
    int* arr = new int[size];
    for(int i = 0; i < size - 1; ++i) {
        arr[i] = array[i + 1];       
    }
    this->size = size;
    delete[] this->array;
    this->array = arr;
    std::cout << "popFront" << std::endl;
}

Vector::Vector(const Vector& obj) {
    std::cout << "copy" << std::endl;
    this->size = obj.size;
    this->number = obj.number;
    this->array = new int[size];
    for (int i = 0; i < size; ++i) {
        this->array[i] = obj.array[i];
    }
}

Vector::Vector(Vector&& obj) {
    std::cout << "move" << std::endl;
    this->size = obj.size;
    this->number = obj.number;
    this->array = obj.array;
    obj.size = 0;
    obj.number = 0;
    obj.array = nullptr;
}

void Vector::printVector() const {
	std::cout << "Vector -> ";
	for (int i = 0; i < size - 1; ++i) {
		std::cout << array[i] << " ";
	}
}

        
