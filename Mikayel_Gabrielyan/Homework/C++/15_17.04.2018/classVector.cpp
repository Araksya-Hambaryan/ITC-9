#include <iostream>

class Vector {
    private:
        int size;
        int* vec;
    public:
        Vector() {
            size = 0;
            vec = nullptr;
        }
        Vector(int qanak, int arjeq) {
            if (0 < qanak) {
                int* newVec = vec;
                vec = new int[qanak];
                for(int i =0; i < qanak; ++i) {
                    vec[i] = arjeq;
                }
                size = qanak;
                delete []newVec;
            }
        }
        Vector(Vector& v) {
            this->size = v.size;
            this->vec = new int[getSize()];
            for(int i = 0; i < getSize(); ++i) {
                this->vec[i] = v.vec[i];
            }
        }
        Vector(Vector&& obj) {
            this->vec = obj.vec;
            this->size = obj.size;
            obj.size = 0;
            obj.vec = nullptr;
        }
        void push(int val) {
            ++size;
            int* newVec = vec;
            vec = new int[size];
            for(int i =0; i < size - 1; ++i) {
                vec[i] = newVec[i];
            }
            vec[size - 1] = val;
            delete []newVec;
        }
        void pop() {
            --size;
            int* newVec = vec;
            vec = new int[size];
            for(int i =0; i < size; ++i) {
                vec[i] = newVec[i];
            }
            delete []newVec;
        }
        int getSize() {
            return size;
        }
        int getVal(int i) {
            return vec[i];
        }
        ~Vector() {
            delete []this -> vec;
        }
};

void printVector(Vector& v) {
    for(int i = 0; i < v.getSize(); ++i) {
        std::cout << v.getVal(i) << "  ";
    }
    std::cout << std::endl;
}

int main() {
    Vector vector(4, 17);
    int check = 0;
    int value = 0;
    int index = 0;
    while(6 != check) {
        if(0 >= vector.getSize()){
            std::cout << "Vector@ amboxjutyamb jnjeciq \n";
            return 0;
        }
        std::cout << " 1 - push, 2 - pop, 3 - getValue, 4 - getSize, 5 - printVector, 6 - EXIT -> ";
        std::cin >> check;
        switch(check) {
            case 1:
                std::cout << "Mutqagrel vectori element@ -> ";
                std::cin >> value;
                vector.push(value);
                break;
            case 2:
                vector.pop();
                break;
            case 3:
                std::cout << "Mutqagrel index@ vori arjeq@ cankanum eq stanal -> ";
                std::cin >> index;
                std::cout << index <<"-rd elementn e -> " << vector.getVal(index) << std::endl;
                break;
            case 4:
                std::cout << "Vectori chapn e -> " << vector.getSize() << std::endl;
                break;
            case 5:
                std::cout << "\n\t\t=== Amboxjakan vektorn e === \n";
                printVector(vector);
                break;
            case 6:
                break;
            default:
                std::cout << "Sxal mutqagrum, krkin porcel \n";
                break;
        }
    }
    Vector v(vector);
    std::cout << "\n\t\t=== Copy vektorn e === \n";
    printVector(vector);
    return 0;
}
