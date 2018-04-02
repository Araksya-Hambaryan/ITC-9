#include <iostream>
#include <cmath>
#include <stack>

bool checkPrime(int num) {
    if (num == 1){
	return false;
    } else if (num == 2) {
        return true;
    } else {
        int i;
        for(i = 2; i <= sqrt(num); i++) {
            if(num%i == 0) {
                return false;
            }  
        }
    }
    return true;
}

int main() {
	int number;
	int pair;
	std::stack<int> primeDivisors;	
	std::cout << "Please, enter two numbers:  ";
	std::cin >> number >> pair;
	for( int i = 1; i <= number; i++) {
		if(number%i == 0 && checkPrime(i)) {
			primeDivisors.push(i);
		}
	}
	for ( int j = 0; j < primeDivisors.size(); j++) {
		if(pair%primeDivisors[j] != 0) { //????????????
			std::cout << primeDivisors[j]; 
		}
	} 
	return 0;
}


