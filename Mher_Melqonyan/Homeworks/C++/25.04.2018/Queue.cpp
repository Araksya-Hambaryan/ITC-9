#include <iostream>
class Vector {
    private:
        int * arr;
        int len;
    public:
        int reserve = 5;
        Vector() {
            arr = (int * ) malloc(reserve * sizeof(int));
            len = 0;
        }
        Vector(int size) {
            arr = (int * ) malloc(size * sizeof(int));
            len = size;
        }
        Vector(const Vector& temp) {
            this->len = temp.len;
            this->arr = new int[len];
            for(int i = 0; i < len; ++i) {
                this->arr[i] = temp.arr[i];
            }
        }
        Vector(Vector&& temp) {
            this->arr = temp.arr;
            this->len = temp.len;
            temp.len = 0;
            temp.arr = nullptr;
        }
        ~Vector() {
            if (arr != NULL) {
                free(arr);
            }
        }
        void push(int value) {
            ++len;
            if(len < reserve) {
                arr[len - 1] = value;
            } else {
                reserve += 5;
                arr = (int * ) realloc(arr, reserve * sizeof(int));
                arr[len - 1] = value;
            }
        }
        int temp;
        int get() {
            temp = arr[0];
            for( int i = 0; i < len -1; ++i) {
                arr[i] = arr[i+1];
            } 
            --len;
            return temp;
        }
        int length() {
            return len;
        }
        void print() {
            std::cout << "\n arr = [ ";
            for(int i = 0 ; i < len ; ++i) {
                std::cout << arr[i] << " ";
            }
            std::cout << "]\n";
        }
};

int main() {
    Vector vector;
    vector.push(1);
    vector.push(2);
    vector.push(3);
    vector.push(4);
    vector.push(5);
    vector.push(6);
    vector.print();
    std::cout << "Vector length is_" << vector.length() << std::endl;
    for (int i = 0; i < vector.length(); ++i) {
        std::cout << vector.get() << " ";
    }
    vector.print();
    std::cout << "\nVector length is_" << vector.length() << std::endl;
    for (int i = 0; i < 18; i++) {
        vector.push(rand() % 30 + 1);
    }
    vector.print();
    std::cout << "Vector Get" << std::endl;
    for (int i = 0; i < vector.length(); ++i) {
        std::cout << vector.get() << " ";
    }
    std::cout << "\n& Vector length is_" << vector.length() << std::endl;
    vector.print();
    return 0;
}
