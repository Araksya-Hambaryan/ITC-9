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
            int *tempArr = new int(size);
            for(int i = 0; i < size - 5; ++i) {
                tempArr[i] = arr[i];
            }
            for(int i = size- 5; i < size; ++i) {
                tempArr[i] = -1;
            }
            delete arr;
            arr = tempArr;
            tempArr = nullptr;

        }
            for(int i = count + 1; i > 0; --i){
                arr[i] = arr[i - 1];
            }
            arr[0] = el;

        ++count;
    }



    void pop() {
        if(count < size - 5) {
            size -= 5;
            int *tempArr = new int(size);
            for(int i = 0; i < size; ++i) {
                tempArr[i] = arr[i];
            }
            delete arr;
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
        std::cout<<std::endl;
    }





};

int main() {


    Queue obj(1);
    obj.push(1);
    obj.print();
    obj.push(2);
    obj.print();

//    obj.pop();
    obj.print();

    obj.push(3);
    obj.print();
    obj.push(4);
    obj.print();

    obj.push(5);
    obj.print();

    obj.push(6);
    obj.print();

    obj.push(7);
    obj.print();

    obj.push(7);
    obj.print();


    obj.push(7);
    obj.print();

    obj.push(7);
    obj.print();

    obj.push(7);
    obj.print();

    obj.push(7);
    obj.print();

    obj.push(7);
    obj.print();


    obj.push(8);
    obj.print();
//    obj.pop();
    obj.print();

    return 0;
}
