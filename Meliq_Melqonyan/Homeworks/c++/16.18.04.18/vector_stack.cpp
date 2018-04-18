#include <iostream>

class Vector {
    private:
        int erk = 0;
        int* arr;
        int tamp = 0;
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
            delete arr;            
            return array;
        }
    public:
            Vector(int n, int a) {
            arr = new int [n];
            for(int i = 0; i < n; ++i) {
                arr[i] = a;
            }
            erk = n;
            tamp = a;
        }
        int pushBack(int num) {
            if(i < erk) {
                arr[i] = num;
            } else {
                arr = newArr(1, erk);
                arr[i] = num;
            }
            ++i;
        }
        void popBack() {
            --i;
            arr[i] = tamp;
            arr = newArr(0, erk);
          //  delete arr;
        }
        void print() {
            for(int j = 0; j < erk; ++j) {
                std :: cout << arr[j] << " ";
            }
            std :: cout << '\n';
        }
};

class Stack : private Vector {
    private:
        int erk = 0;
        int* arr;
        int tamp = 0;
        int i = 0;
    public:    
       Stack(int n, int a):Vector(n, a) {
            erk = n;
            tamp = a;
        }
        void push(int num) {
            pushBack(num);
        }
        void pop() {
            popBack();
        }
        void printf () {
            print();
        }
};

int main() {
    int size, num;
    std :: cin >> size >> num;
    Vector v(size, num);
    v.pushBack(5);
    v.pushBack(1);
    v.pushBack(2);
    v.pushBack(3);
    v.pushBack(4);
    v.pushBack(9);
    v.print();
    v.popBack();
    v.print();
    Stack s = Stack(size, num);
    s.push(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(9);
    s.printf();
    s.pop();
    s.printf();
    return 0;
}


