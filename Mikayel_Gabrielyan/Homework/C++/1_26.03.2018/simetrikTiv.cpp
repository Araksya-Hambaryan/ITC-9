#include <iostream>

bool reverse(int number,int count) {
	int arr[count];
	for(int i = 0; i < count; ++i) {
                arr[i] = number % 10;
                number = number / 10;
        }
        for(int i = 0; i < count/2; ++i) {
                if(arr[i] != arr[count-1-i]) {
                        return false;
                        break;
                }
        }
}

int main() {
	int number = 0;
	int number1 = 0;
	int count = 0;
	bool truefalse = true;
        std::cout<<"Mutqagrel bnakan tiv -> ";
        std::cin>>number;
	if (0 < number) {
	        number1 = number;
	        while (0 != number1) {
                	number1 = number1 / 10;
                	count++;
       		}
		truefalse = reverse(number,count);
		if(truefalse) {
			std::cout<<"Tiv@ simetrik e \n";
		} else {
			std::cout<<"Tiv@ simetrik che \n";
       		}
 	} else {
			std::cout<<"Sxal mutqagrum \n";
	}
return 0;
}
