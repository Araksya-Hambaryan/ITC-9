#include<iostream>
#include<math.h>

bool prime(int number) {
    for(int i = 2; i <= sqrt(number); ++i){
        if(number % i == 0) {
            return false;
        }
    }
    return true;
}

bool divisorsOfTwoNums(int first, int second) {
    int smth = 0;
    int bigger = first > second ? first : second;
    int smaller = first < second ? first : second;
    bool flag = 1;
    for (int i = 2; i <= bigger; ++i) {
        if (0 == smaller % i && prime(i)) {
            smth = i;
        }
        if (0 == bigger % i && prime(i) && smth != i && 0 != smth) {
            flag = 0;
            std :: cout << "  " << i;
        }
    }
    std :: cout <<"\n";
    return flag;
}

int main () {

	int first;
	int second;
	std::cout << " Input first number : ";
	std::cin >> first;
	std::" Input second number : ";
	std::cin >> second;
	std::cout << " Output : ";
	divisorsOfTwoNums ( first, second ) ;
	




return 0;
}
