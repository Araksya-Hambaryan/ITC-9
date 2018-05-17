#include <iostream>

bool isSymmetric (int number) {

    int reversedNumber = 0;
    while (number > 0) {

        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit; 
   
 	if (0 == reversedNumber) {
	    return 0;
	} else {

            if (reversedNumber == number) {
                return true;
            }

            number /= 10;

            if (reversedNumber == number) {
                return true;
            }
        }
    }

    return false;
}

int main() {

    int number;

    std :: cout << "Enter a number : ";
    std :: cin >> number;
  
    while (number < 0) {
        std :: cin.clear ();
        std :: cout << "Something went wrong: Please input a positive number : ";
        std :: cin >> number;
    }

    if (true == isSymmetric (number)) {
	std :: cout << "This is a symmetrical  number." << std :: endl;
    } else {
	std :: cout << "This is not a symmetrical number." << std :: endl;
    }

    return 0;
}
