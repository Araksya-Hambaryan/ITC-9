#include <iostream>

class Vector {            
private:
    int size;
    int number;
    int* array;

public:
    Vector();
    Vector(int, int);
    void push(int);
    void pop();
    int Size();
    int element(int);
    Vector(const Vector& obj);
    Vector(Vector&& obj);
};

Vector::Vector() {
    std::cout << "default" << std::endl;
    this->array = new int[2];
    array[1] = 0;
};

Vector::Vector(int size, int number) {
    size = this->size + 1;
    this->array = new int[size];  
    for (int i = 0; i < size; ++i) {
        array[i] = this->number;
    }
    this->size = size;
    std::cout << "parametr" << std::endl;
};

int Vector::Size() {
    std::cout << "size" << std::endl;
    return (this->size + 1); 
};

void Vector::push(int num) {
    size = this->size + 1;
    int* arr = new int[size];
    for(int i = 0; i < size - 1; ++i) {
        arr[i] = array[i];       
    }
    arr[size - 1] = num;
    this->size = size;
    delete[] this->array;
    this->array = arr;
    std::cout << "push" << std::endl;
};

int Vector::element(int num) {
    std::cout << "array" << std::endl;
    if(0 > num || this->size < num) {
        std::cout << "invalid number" << std::endl;
        return -1;
    }
    return this->array[num];
};

void Vector::pop () {
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
};
    
/*Vector::Vector(const Vector& obj) {
    std::cout << "copy" << std::endl;
    this->size = obj.size;
    this->number = obj.number;
    this->array = obj.array;
    for (int i = 0; i < size; ++i) {
        this->array[i] = obj.array[i];
    }
};*/

/*Vector::Vector(Vector&& obj) {
    std::cout << "move" << std::endl;
    this->size = obj.size;
    this->number = obj.number;
    this->array = obj.array;
    obj.size = 0;
    obj.number = 0;
    obj.array = nullptr;
};*/

int main() {
    Vector a();
    Vector a1(5,5);
    a1.push(5);
    a1.Size();
    a1.element(2);
    a1.pop(); 
//    Vector a2(a1);
//    Vector a3(std::move a1);
   return 0;
}
        
