#include <iostream>
 
class Queue {
 
private:
    int size;
    int count;
    int *arr;
public:
    Queue(int a = 5) {
        size = a;
        count = 0;
        arr = new int [size];
        for(int i = 0; i < size; ++i) {
            arr[i] = -1;
        }
    }
 
    int getCount() {
        return this -> count;
    }
 
    ~Queue() {
        delete[] arr;
    }
 
    void push(int el) {
        if(count >= size) {
            size+=5;
            int *tempArr = new int[size];
            for(int i = 0; i < size - 5; ++i) {
                tempArr[i] = arr[i];
            }
            for(int i = size- 5; i < size; ++i) {
                tempArr[i] = -1;
            }
            delete[] arr;
            arr = tempArr;
            tempArr = nullptr;
        }
            for(int i = count; i > 0; --i){
                arr[i] = arr[i - 1];
            }
            arr[0] = el;
        ++count;
    }
 
    void pop() {
        if(count == size - 5) {
            size -= 5;
            int *tempArr = new int[size];
            for(int i = 0; i < size; ++i) {
                tempArr[i] = arr[i];
            }
            delete[] arr;
            arr = tempArr;
            tempArr = nullptr;
        }
        arr[count - 1] = -1;
        --count;
    }
 
    void print() {
        for(int i = 0; i < count; ++i) {
            std::cout << "queue[" << i << "]=" << arr[i] << std::endl;
        }
        std::cout << "Count = " << count << std::endl;
        std::cout << "Size = " << size << std::endl;
        std::cout<<std::endl;
    }
};
 
int main() {
    Queue obj;
    for(int i = 15; i > 0; --i) {
        obj.push(i);
        obj.print();
    }
    for(int i = 12; i > 0; --i) {
        obj.pop();
        obj.print();
    }
    return 0;
}
