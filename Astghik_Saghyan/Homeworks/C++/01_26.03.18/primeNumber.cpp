// // ******************Task 2_Prime number************
#include <iostream>

int main () {
    int number;
    std:: cout << "Enter an integer:";
    std:: cin >> number;
    if(number < 0) {
        std:: cout << "Please, enter a natural number!";//if the user enter float number, the programm use it us integer
        std:: cin >> number;
    }
    if (number == 1){
        std:: cout << "The number " << number << " isn't prime!";
    } else if (number == 2) {
        std:: cout << "The number " << number << " is prime!";
    } else {
        int i;
        for(i = 2; i < number; i++) { //changed i = 3 to i = 2
            if(number%i == 0) {
                std:: cout << "The number " << number << " isn't prime!";
                return 0;
            }  
        }
    }
    std:: cout << "The number " << number << " is prime!";
    return 0;
}

