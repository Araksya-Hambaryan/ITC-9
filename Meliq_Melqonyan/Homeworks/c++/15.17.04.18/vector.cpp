#include <iostream>

class Vector {
    private:
        int size;
        int* arr;
        int tamp ;
        int count = 0;
        int i = 0;
    public:
        Vector(int n, int a) {
            arr = new int [n];
            for(int i = 0; i < n; ++i) {
                arr[i] = a;
            }
            size = n;
            tamp = a;
        }
    //mer vector@ krknorinakuma
        Vector(const Vector& obj) {
            size = obj.size;
            tamp = obj.tamp;
            arr = obj.arr;
        }
    //move ka
        Vector(Vector&& obj) {
            std :: cout << "move-ka" << std :: endl;
        }

        int push(int x) {
            if(i < size) {
                arr[i] = x;
                ++count;
            } else {
                int newsize = 2 * size;
                int* array = new int [newsize];
                for(int j = 0; j < size; ++j) {
                    array[j] = arr[j];
                }
                for(int j = size; j < newsize; ++j) {
                    array[j] = tamp;
                }
                delete arr;
                size = newsize;
                arr = array; 
                arr[i] = x;
                ++count;
            }
            ++i;
        } 

        int get(int index) {
            return arr[index];
        }

        void print() {
            for(int j = 0; j < size; ++j) {
                std :: cout << arr[j] << " ";
            }
        }   

        void jnjel() {
            delete arr;
        }

        void pop() {
            arr[i] = tamp;
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
