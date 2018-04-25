#include <iostream>

class Vector {
    private:
        int erk;
        int* arr;
        int tamp ;
        int count = 0;
        int i = 0;
        int* newArr(int size, int& er) {
            int* array;
            if(size == 1) {
                array = new int [er * 2];
                for(int j = 0; j < i; ++j) {
                    array[j] = arr[j];
                }
                for(int j = i; j < i * 2; ++j) {
                    array[j] = tamp;
                }
                er = 2 * er;
            } else {
                array = new int [er - 1];
                for(int j = 0; j < er - 1; ++j) {
                    array[j] = arr[j];
                }
                er = er - 1;
            }
            delete []arr;
            return array;
        }

    public:
        Vector() {
            erk = 10;
            tamp = 0;
            for(int j = 0; j < erk; ++j) {
                arr[i] = tamp;
            }
        }
        Vector(int n, int a) {
            arr = new int [n];
            for(int j = 0; j < n; ++j) {
                arr[j] = a;
            }
            erk = n;
            tamp = a;
        }
            Vector(const Vector& obj) {
            erk = obj.erk;
            i = obj.i;
            arr = obj.arr;
            for(int j = 0; j < erk; ++j) {
                arr[j] = obj.arr[j];
            }
            }

            Vector(Vector&& obj) {
                erk = obj.erk;
                i = obj.i;
                arr = obj.arr;
                obj.arr = nullptr;
            }
            ~Vector() {
                delete []arr;
                arr = nullptr;
            }
            int push(int num) {
                if(i < erk) {
                    arr[i] = num;
                } else {
                    arr = newArr(1, erk);
                    arr[i] = num;
                }
                ++i;
            }
            void pop() {
                --i;
                arr[i] = tamp;
                arr = newArr(0, erk);
            }
        int get(int index) {
            return arr[index];
        }

        void print() {
            for(int j = 0; j < erk; ++j) {
                std :: cout << arr[j] << " ";
            }
        }   
};
int main() {
    int size, num;
    std :: cin >> size >> num;
    Vector v(size ,num);
    int tiv = 0;
    do {
        std :: cout << "durs galu hamar nermuceq 2018" << std :: endl;
        std :: cin >> tiv;
        v.push(tiv);
    } while (tiv != 2018);
    v.print();
    return 0;
}
