#include <iostream>

int main() {
    unsigned int num;
    std::cout << "To finish the program, please enter any text or symbol" << std::endl;
    while(std::cout << "num = ", std::cin >> num) {
        unsigned int numCopy, amount = 0, p = 0, ln;
        numCopy = num;
        if (num * 0 != 0) {
            std::cout << "ERROR: write only numbers";
        }
        while(numCopy) {
            amount++;
            numCopy /= 10;
        }
        if (amount % 2 == 1) {
            ln = (amount / 2) + 1;
        } else {
            ln = amount / 2;
        }
        int arr[amount];
        for (int i = 0; i < amount; i++) {
            arr[i] = num % 10;
            num /= 10;
        }
        for (int i = 0; i < ln; i++) {
            if (arr[i] == arr[amount - 1 - i]) {
                p++;
            }
        }
        if (p == ln) {
            std::cout << "True" << std::endl;
        } else {
	    std::cout << "False" << std::endl;
        }
    }
    return 0;
 }
