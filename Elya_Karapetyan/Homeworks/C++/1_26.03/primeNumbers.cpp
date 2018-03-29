#include <iostream>

bool isPrime (int number) {
    if (1 == number || 2 == number || 3 == number) {
        return true;
    }
    for (int i = 2; i < number / 2; ++i) {
        if (0 == number % i) {
            return false;
        }
    }
    return true;
}

void validNumber(int& number)
{
    while (std::cin.fail() || 0 >= number)
    {    
        std::cout << "Invalid Value: Try again!" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Please enter the intager number: ";
        std::cin>> number;
    }
}

int main() {
    int number = 0;
    int check = 1;
    do {
        std::cout << "Enter any intager number: ";
        std::cin >> number;
        validNumber(number);
        if (isPrime(number)) {
            std::cout << number << " is a prime!" << std::endl;
        } else {
            std::cout << number << " is not a prime!" << std::endl;
        }
        do {
            std::cout << "To check another number press 1 or 0 for Exit! ";
            std::cin >> check;
            switch(check) {
                case 0:
                    return 0;
                case 1:
                    break;
            }
        } while(0 != check || 1 !=check);

    } while (check);
        return 0;
    }
