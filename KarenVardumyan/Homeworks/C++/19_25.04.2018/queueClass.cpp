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
    ~Queue() {
    	delete[] arr;
    }
    void push (int el) {
	if (count >= size) {
   	    int* temp;
	    temp = new int [size + 5];
	    for(int i = 0; i < size; ++i) {
		temp[i + 1] = arr[i];
	    }
	    for (int i = size; i < size + 5; ++i) {
		temp[i] = -1;
	    }
	    temp[0] = el;
	    delete [] arr;
	    arr = temp;
	    temp = NULL;
	    size = size + 5;
	} else {
	    for(int i = size - 1; i > 0; --i) {
                arr[i] = arr[i - 1];
	    }
	    arr[0] = el;
	}
	count++;
    }
    void pop (void) {
    	if ( count + 5 == size) {
	    int* temp;
	    temp = new int [count];
	    for (int i = 0; i < count; ++i ) {
		temp[i] = arr[i];
	    }
	    delete [] arr;
	    arr = temp;
	    temp = NULL;
	    size = count;
	} 
        arr[count - 1] = 0;
	--count;
    }
    void print() {
    	for(int i = 0; i < count; ++i) {
	    std::cout << "queue[" << i << "]=" << arr[i] << std::endl;
     	}
    	std::cout << "Count = " << count << std::endl;
    	std::cout << "Size = " << size <<std::endl;
	std::cout<< std::endl;
    }
};

 
int main() {
    Queue obj(5);

    obj.print();
    obj.push(1);
    obj.print();
    obj.push(2);
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
    obj.push(8);
    obj.print();
    obj.push(9);
    obj.print();
    obj.push(10);
    obj.print();
    obj.push(11);
    obj.print();

    obj.pop();
    obj.print();
    obj.pop();
    obj.print();
    obj.pop();
    obj.print();
    obj.pop();
    obj.print();
    obj.pop();
    obj.print();
    obj.pop();
    obj.print();
    obj.pop();
    obj.print();
    obj.pop();
    obj.print();
    return 0;
}
