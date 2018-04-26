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
                myQueue.push_back(value);
                myQueue.printQueue();
               break;
            case 2:
                myQueue.pop_front();
                myQueue.printQueue();
                break;
            case 3:
                if (myQueue.isEmpty()) {
                    std::cout << "\nList is empty!\n" << std::endl;
                } else {
                    std::cout << "\nList isn't empty!\n" << std::endl;
                }
                break;
            case 4:
                std::cout << "\nSize of list: " << myQueue.getSize() << std::endl << std::endl;
                break;
        }
		std::cout << "1 - push\n2 - pop\n3 - isEmpty\n4 - size\n";
        std::cin >> check; 
        validNumber(check);
    }
}

int main() {
    Queue myQueue;
    chooseFunction(myQueue);
    return 0;
}
