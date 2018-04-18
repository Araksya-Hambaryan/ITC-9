
#include <iostream>

    class Vector {
        int size = 0;
        int value = 0;
        int * arr = new int[size];
        public:
            void pop() {
                if (!checkForEmptiness()) {
                    arr[size - 1] = 0;
                    --size;
                }
            }
        bool checkForEmptiness() {
            if (0 == size) {
                return true;
            } else {
                return false;
            }
        }
        void getArr() {
            if (!checkForEmptiness()) {
                for (int i = 0; i < size; i++) {
                    std::cout << "Vector with element " << i << " is " << arr[i] << "." << std::endl;
                }
            } else {
                std::cout << "The vector is empty!" << std::endl;
            }
        }
        void getSize() {
            std::cout << "Size is " << size << "." << std::endl;
        }
        void push(int value) {
            arr[size] = value;
            ++size;
        }
        Vector() {
            size = 0;
            value = 0;
        }
        Vector(int size, int value) {
            std::cout << "Inside parameterized constructor." << std::endl;
            this -> size = size;
            this -> value = value;
            for (int i = 0; i < size; i++) {
                arr[i] = value;
            }
        }
        Vector(const Vector & v) {
            std::cout << "Inside copy constructor." << std::endl;
            this -> size = v.size;
            this -> value = v.value;
            for (int i = 0; i < size; i++) {
                arr[i] = value;
            }

        }
        Vector(Vector && v) {
            std::cout << "Inside move constructor." << std::endl;
            this -> size = v.size;
            this -> value = v.value;
            this -> arr = v.arr;
            v.arr = nullptr;
        }~Vector() {
            delete[] arr;
            arr = nullptr;
            std::cout << "Destructor is called." << std::endl;
        }
    };

void inputSizeValue(int & size, int & value) {
    std::cout << "Input size please: ";
    std::cin >> size;
    std::cout << "Input value please: ";
    std::cin >> value;
}

int main() {
    int size = 0;
    int value = 0;
    std::cout << "Vector 1" << std::endl;
    inputSizeValue(size, value);
    Vector vec1(size, value);
    vec1.push(9);
    vec1.push(7);
    vec1.pop();
    vec1.getArr();
    vec1.getSize();
    std::cout << "Vector 2" << std::endl;
    Vector vec2(vec1);
    vec2.getArr();
    vec2.getSize();
    std::cout << "Vector 3" << std::endl;
    Vector vec3(std::move(vec1));
    vec3.getArr();
    vec3.getSize();

    return 0;
}