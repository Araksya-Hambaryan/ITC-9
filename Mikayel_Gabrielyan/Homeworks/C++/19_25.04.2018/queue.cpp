#include "queue.hpp"

Queue::Queue() {
}

Queue::Queue(const int chap) {
    this -> size = chap;
    this -> count = 0;
    arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = 0;
    }
}

void Queue::push(const int value) {
    if (count == size) {
        std::cout << "\nQueue-n amboxjutyamb lcvac e\n" << std::endl;
        return;
    }
    arr[count] = value;
    ++count;
}

void Queue::pop() {
    if (0 == count) {
        std::cout << "\nQueue-nn amboxjutyamb datark e\n" << std::endl;
        return;
    }
    for(int i = 0; i < count - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    arr[count - 1] = 0;
    --count;
}

void Queue::print() {
    if (0 == count) {
        std::cout << "\nQueue-n amboxjutyamb datark e\n" << std::endl;
        return;
    }
    std::cout << "\n***** Queue *****\n";
    for (int i = 0; i < count; ++i) {
        std::cout << arr[i] << "  ";
    }
    std::cout << std::endl;
}

Queue::~Queue() {
    delete[] arr;
    arr = nullptr;
}
