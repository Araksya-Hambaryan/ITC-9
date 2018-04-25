#include <iostream>

class Q {
    private:
        int* arr;
        int number = 0;
    public:
        Q();
        void pop();
        void push(int);
        void print();
};

Q::Q() {
    this->arr = new int[5];
    for(int i = 0; i < 5; ++i) {
        this->arr[i] = -1;
    }
}


void Q::pop() {	
    for (int i = 0; i < number + 1 ; ++i) {
        arr[i] = arr[i + 1];
    }
    this->number = this->number - 1;
}

void Q::push(int value) {
    int size = sizeof(this->arr) / 4;
    this->arr[number] = value;
    this->number = this->number + 1;
    if (1 > (size % number) && 1 == (size / number)) {
        int* tmp = this->arr;
        this->arr = new int[size + 5];
        for (int i = 0; i < size; ++i) {
            arr[i] = tmp[i];
        }
        delete tmp;
    }
}

void Q::print() {
    for (int i = 0; i < number; ++i) {
        std::cout << this->arr[i] << "  ";
    }
    std::cout << std::endl;
}	

int main() {
    Q array;
    array.push(5);
    array.push(7);
    array.push(4);
    array.push(9);
    array.push(1);
    array.push(8);
    array.push(3);
    array.print();
    array.pop();
    array.pop();
    array.print();
    array.push(8);
    array.push(8);
    array.push(8);
    array.push(8);
    array.push(8);
    array.pop();
    array.pop();
    array.print();
    return 0;
}
