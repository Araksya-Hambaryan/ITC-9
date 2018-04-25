#include "queue.hpp"

void validNumber(int& number) {
    while (std::cin.fail()) {    
        std::cout << "Invalid Value: Try again!" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Please enter the intager number: ";
        std::cin >> number;
    }
}

void chooseFunction(Queue& myQueue) {
    int check = -1;
    int index = 0;
    int value = 0;
    std::cout << "\n\t=====Choose Function=====\n" << std::endl;
    while (0 != check) {
        switch (check) {    
            case 0: 
                return;
            case 1:
                std::cout << "Enter value: ";
                std::cin >> value;
                validNumber(value);
                myQueue.push(value);
                myQueue.print();
               break;
            case 2:
                myQueue.pop();
                myQueue.print();
                break;
            case 3: 
                std::cout << "\nFront value: " << myQueue.front() << std::endl << std::endl;
                break;
            case 4:
                std::cout << "\nBack value: " << myQueue.back() << std::endl << std::endl;
                break;
            case 5:
                if (myQueue.isEmpty()) {
                    std::cout << "\nQueue is empty!\n" << std::endl;
                } else {
                    std::cout << "\nQueue isn't empty!\n" << std::endl;
                }
                break;
            case 6:
                if (myQueue.isFull()) {
                    std::cout << "\nQueue is full!\n" << std::endl;
                } else {
                    std::cout << "\nQueue isn't full!\n" << std::endl;
                }
                break;
            case 7:
                std::cout << "\nSize of queue: " << myQueue.getSize() << std::endl << std::endl;
                break;
        }
        std::cout << "1. push(value)\n2. pop()\n3. frint()\n4. back()\n5. isEmpty()\n6. isFull()\n7. getSize()\n0 for Exit: "; 
        std::cin >> check; 
        validNumber(check);
    }
}

int main() {
    int size = 0;
    do {
        std::cout << "Enter the size of the Queue: ";
        std::cin >> size;
        std::cin.clear();
        std::cin.ignore(256,'\n');
    } while(std::cin.fail() || 1 > size);
    Queue myQueue(size);
    chooseFunction(myQueue);
    return 0;
}
