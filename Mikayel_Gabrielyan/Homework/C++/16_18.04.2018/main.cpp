#include "stack.hpp"

void workedWithVectorAndStack(Vector& vector, Stack& s) {
    int check = 0;
    int value = 0;
    int index = 0;
    while(13 != check) {
        if(0 >= vector.getSize()){
            std::cout << "Vector@ kam Stack@ amboxjutyamb jnjeciq \n";
            return;
        }
        std::cout << " 1  - pushBack \n 2  - popBack \n 3  - pushFront \n 4  - popFront \n 5  - insert \n 6  - erase \n 7  - getValue \n 8  - getSize \n 9  - printVector \n 10 - push stack \n 11 - pop stack \n 12 - printStack \n 13 - EXIT \n -> ";
        std::cin >> check;
        switch(check) {
            case 1:
                std::cout << "Mutqagrel avelacvox element@ -> ";
                std::cin >> value;
                vector.pushBack(value);
                break;
            case 2:
                vector.popBack();
                break;
            case 3:
                std::cout << "Mutqagrel avelacvox element@ -> ";
                std::cin >> value;
                vector.pushFront(value);
                break;
            case 4:
                vector.popFront();
                break;
            case 5:
                std::cout << "Mutqagrel index@ -> ";
                std::cin >> index;
                std::cout << "Mutqagrel avelacvox element@ -> ";
                std::cin >> value;
                vector.insert(index, value);
                break;
            case 6:
                std::cout << "Mutqagrel index@ vor@ cankanum eq jnjel -> ";
                std::cin >> index;
                vector.erase(index);
                break;
            case 7:
                std::cout << "Mutqagrel index@ vori arjeq@ cankanum eq stanal -> ";
                std::cin >> index;
                std::cout << index <<"-rd elementn e -> " << vector.getVal(index) << std::endl;
                break;
            case 8:
                std::cout << "Vectori chapn e -> " << vector.getSize() << std::endl;
                break;
            case 9:
                std::cout << "\n\t\t=== Amboxjakan vektorn e === \n";
                vector.printVector();
                std::cout << std::endl;
                break;
            case 10:
                std::cout << " Mutqagrel avelacvox element@ -> ";
                std::cin >> value;
                s.push(value);
                break;
            case 11:
                s.pop();
                break;
            case 12:
                std::cout << "\n\t\t=== Amboxjakan stackn e === \n";
                s.printStack();
                std::cout << std::endl;
                break;
            case 13:
                break;
            default:
                std::cout << "Sxal mutqagrum, krkin porcel \n";
                break;
        }
    }
}

int main() {
    Vector vector(4, 17);
    Stack s = Stack();
    workedWithVectorAndStack(vector, s);
    Vector v(vector);
    std::cout << "\n\t\t=== Copy vektorn e === \n";
    vector.printVector();
    return 0;
}
