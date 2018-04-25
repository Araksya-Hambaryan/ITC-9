#include "queue.hpp"

int main() {
    int size = 0;
    std::cout << "Mutqagrel Queue-i chap@ -> ";
    std::cin >> size;
    Queue myQueue(size);
    int check = 0;
    int value = 0;
    while (4 != check) {
        std::cout << "\n1- push \n2- pop \n3- printQueue \n4- Exit"; 
        std::cout << "\n@ntrel gorcoxutyun@ -> ";
        std::cin >> check; 
        switch (check) {    
            case 1:
                std::cout << "\nMutqagrel arjeq@ -> ";
                std::cin >> value;
                myQueue.push(value);
               break;
            case 2:
                myQueue.pop();
                break;
            case 3:
               myQueue.print(); 
                break;
            case 4:
                break;
            default:
                std::cout << "\nSxal mutqagrum !!!\n";
        }
    }
    return 0;
}
