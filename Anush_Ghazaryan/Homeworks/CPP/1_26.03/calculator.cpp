#include<iostream>


int main () {

	float firstNum;

	float secondNum;

	char operation;

	
	std::cout << "Input first number, operation, second number " << std::endl;
	
 
	std::cin >> firstNum >> operation >> secondNum;

	
	if ( operation == '+' || operation == '-' || operation == '*' || operation == '/' ) {

	    switch ( operation ) {


	        case '+' : 

	            std::cout << firstNum << operation << secondNum <<  " = " << firstNum + secondNum << std::endl;
        	    break;
    
       	        case '-' :
               
	            std::cout << firstNum << operation << secondNum <<  " = " << firstNum - secondNum <<std::endl;
        	    break;
	
	        case '*' : 

        	    std::cout << firstNum << operation << secondNum <<  " = " << firstNum * secondNum << std::endl;
	            break;
	
	        case '/' :

	            if ( 0 != secondNum ) {
	 
	                std::cout << firstNum << operation << secondNum <<  " = " << firstNum / secondNum << std::endl;

	            } else {

	                std::cout << "Can't be divided by 0 " << std::endl;
	            }
	            break;
	
	        default : {

	            std::cout << "There is no such an operation " << std::endl;
                }
	
	}
	
	} else {

	    std::cout << " Wrong operation ! Enter only '+', '-','*','/' " << std::endl;
 }  


	return 0;
}
