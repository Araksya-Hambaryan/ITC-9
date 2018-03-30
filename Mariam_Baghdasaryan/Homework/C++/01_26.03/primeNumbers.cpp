#include <iostream>

int main() {

    int number;
    int counter;
    bool prime = true;

    std :: cout << "Enter a positive integer : ";
    std :: cin >> number;

    while (number < 1) {
        std :: cin.clear ();
        std :: cout << "Something went wrong: Please input a positive number : ";
        std :: cin >> number;
    }

    if (1 == number) {
	std :: cout << "This is not a prime number." << std :: endl;
    } else {

        for (counter = 2; counter <= number / 2; counter++) {
	    if (0 == (number % counter)) {
	        prime = false;
	        break;
	    }
        }
  
        if (prime) {
	    std :: cout << "This is a prime number." << std :: endl;
        } else {
	    std :: cout << "This is not a prime number." << std :: endl;
        }
    }

    return 0;
}
