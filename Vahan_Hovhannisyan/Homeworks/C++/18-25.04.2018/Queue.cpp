
#include <iostream> 
#include <cstring>

    class Queue {
        private:
        int size = 0;
        int sizeMinusFive = 0;
        int sizePlusFive = 0;
        int* arr = new int[sizePlusFive]; //Creating an array with 5 additional elements
        public:
            void pushFront(int value) { //Push an element from front
                if (isFull()) {
                    replace('+');
                }
                for (int i = size; i > 0; --i) { //Shift elements
                    arr[i] = arr[i - 1];
                }
                arr[0] = value;
                ++size;
                ++sizeMinusFive;
            }

        void popBack() { //Pop an element from back

            if (isEmpty()) {
                return;
            } else if (size == sizeMinusFive && 5 < size) { //Check if we've decreased size five times in a row
                --size;
                replace('-');
            } else {
                --size;
            }
        }
        bool isEmpty() { // Check if the size is 0
            if (0 == size) {
                return true;
            } else {
                return false;
            }
        }

        bool isFull() { //Check if the reserved size is full
            if (size == sizePlusFive) {
                return true;
            } else {
                return false;
            }
        }
        void replace(char c) { //replace the array by another one with size +/- 5
            if ('+' == c) {
                sizePlusFive += 5;
                int* tempArr = new int[sizePlusFive];
                memcpy(tempArr, arr, sizePlusFive * sizeof(int));
                delete[] arr;
                arr = tempArr;
            } else {
                sizeMinusFive -= 5;
                sizePlusFive -= 5;
                int* tempArr = new int[size];
                memcpy(tempArr, arr, size * sizeof(int));
                delete[] arr;
                arr = tempArr;
            }
        }

        void print() {
            if (isEmpty()) {
                std::cout << "Queue is empty!" << std::endl;
            } else {
                std::cout << "Your queue: ";
                for (int i = 0; i < size; i++) {
                    std::cout << arr[i] << " ";
                }
                std::cout << "\n";
                std::cout << "size = " << size << std::endl;
            }
        }

        Queue(int size) {
            std::cout << "Inside user constructor" << std::endl;
            this -> size = size;
            sizePlusFive = size + 5;
            sizeMinusFive = size - 5;
            for (int i = 0; i < size; i++) {
                arr[i] = 0;
            }
        }
        Queue(const Queue& q) {
            std::cout << "Inside copy constructor." << std::endl;
            this -> size = q.size;
            sizePlusFive = size + 5;
            sizeMinusFive = size - 5;
            arr = new int[sizePlusFive];
            for (int i = 0; i < size; i++) {
                arr[i] = q.arr[i];
            }
        }
        Queue(Queue&& q) {
            std::cout << "Inside move constructor." << std::endl;
            this -> size = q.size;
            sizePlusFive = size + 5;
            sizeMinusFive = size - 5;
            this -> arr = q.arr;
            q.arr = nullptr;
        }
        ~Queue() {
            delete[] arr;
            arr = nullptr;
            std::cout << "Destructor is called." << std::endl;
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
    q.popBack();
    q.popBack();
    q.popBack();
    q.popBack();
    q.popBack();
    q.print();
    return 0;
}