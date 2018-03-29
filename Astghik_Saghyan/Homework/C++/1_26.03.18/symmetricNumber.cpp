// // ******************Task 1_Symmetric number************
#include <iostream>

int main () {
    int number;
    std:: cout << "Enter an integer:";
    std:: cin >> number;
    if(number < 0) {
        std:: cout << "Please, enter a positive number!";
        std:: cin >> number;
    }
    int result = 0;
    int temp = number;
    while (temp >= 1) 
    {
        result = result*10+temp%10;
        temp = temp/10;
    }
    if (result == number) {
        std:: cout << "The number " << number << " is simetric!";
    } else {
        std:: cout << "The number " <<number << " isn't simetric!";
    } 
    return 0;
}

