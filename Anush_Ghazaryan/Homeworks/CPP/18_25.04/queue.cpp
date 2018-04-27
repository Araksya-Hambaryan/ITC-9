#include <iostream>
#include <cstring>
    class Queue {
        public:
            int size = 0;
        int sizeMinusFive = 0;
        int sizePlusFive = 0;
        int * arr = new int[sizePlusFive];
        void pushFront(int value) {
            if (isFull()) {
                replace('+');
            }
            for (int i = size; i > 0; --i) {
                arr[i] = arr[i - 1];
            }
            arr[0] = value;
            ++size;
            ++sizeMinusFive;
        }

        void popBack() {
            if (isEmpty()) {
                std::cout << "Queue is empty!" << std::endl;
		return;
            } else {
                if (size == sizeMinusFive) {
                    replace('-');
                }
                --size;
		--sizeMinusFive;
            }
        }

        bool isEmpty() {
            if (0 == size) {
                return true;
            } else {
                return false;
            }
        }
        bool isFull() {
            if (size == sizePlusFive) {
                return true;
            } else {
                return false;
            }
        }
        void replace(char c) {
            if ('+' == c) {
                sizePlusFive += 5;
                int * tempArr = new int[sizePlusFive];
                memcpy(tempArr, arr, sizePlusFive * sizeof(int));
                delete[] arr;
                arr = tempArr;
            } else {
                sizeMinusFive = size - 5;
                int * tempArr = new int[sizeMinusFive];
                memcpy(tempArr, arr, sizeMinusFive * sizeof(int));
                delete[] arr;
                arr = tempArr;
            }
        }

        void print() {
            std::cout << "Your array: ";
            for (int i = 0; i < size; i++) {
                std::cout << arr[i] << " ";
            }
            std::cout << "\n";
        }

        Queue(int size) {
            this -> size = size;
            sizePlusFive = size + 5;
            sizeMinusFive = size - 5;
            for (int i = 0; i < size; i++) {
                arr[i] = 0;
            }
        }

        ~Queue() {
            std::cout << "Destructor works!" << std::endl;
            delete[] arr;

        }

    };
int main() {
    Queue q(0);
    q.pushFront(1);
    q.pushFront(2);
    q.pushFront(3);
    q.pushFront(4);
    q.pushFront(5);
    q.pushFront(6);
    q.pushFront(7);
    q.pushFront(8);
    q.pushFront(9);
    q.pushFront(10);
    q.pushFront(11);
    q.popBack();
    q.popBack();
    q.popBack();
    q.popBack();
    q.popBack();
    q.popBack();
    q.print();
    return 0;
}
