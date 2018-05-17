#include <iostream>

int main () {
	
    float firstNumber;
    float secondNumber;
    char op;
	
    std :: cout << "Input expression : ";
    std :: cin >> firstNumber >> op >> secondNumber;
	
    while ((0 == secondNumber) && ('/' == op)) {
        std :: cin.clear ();
        std :: cout << "Something went wrong: Denominator can't be 0: Input again: ";
        std :: cin >> firstNumber >> op >> secondNumber;
    }
    
    switch (op) {
    	case '+': {
            std :: cout << firstNumber + secondNumber << std :: endl;
            break;
	}
		
	case '-': {
            std :: cout << firstNumber - secondNumber << std :: endl;
            break;
	}
		
       	case '*': {
    	    std :: cout << firstNumber * secondNumber << std :: endl;
	    break;
	}
		
	case '/': {
    	    std :: cout << firstNumber / secondNumber << std :: endl;
	    break;
	}
		
	default: {
	    std :: cout << "Error! operator is not correct" << std :: endl;
	    break;
	}
    }
    
    return 0;
}
