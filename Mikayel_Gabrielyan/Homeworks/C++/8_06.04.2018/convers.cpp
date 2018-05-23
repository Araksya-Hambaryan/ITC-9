#include <iostream>

int convers(int num, int system) {
	int result = 0;
	int i = 1;
	while (0 != num) {
		result = result + (num % system) * i;
		num = num / system;
		i = i * 10;
	}
	return result;
}

void convers1(int num, int system) {
	std::string result1;
	int i = 0;
	while(0 != num) {
		int balance = num % system;
        	switch(balance) {
			case (10):
				result1[i] = 'A';
				break;
			case (11):
				result1[i] = 'B';
				break;
			case (12):
				result1[i] = 'C';
				break;
			case (13):
				result1[i] = 'D';
				break;
			case (14):
				result1[i] = 'E';
				break;
			case (15):
				result1[i] = 'F';
				break;
			default:
				result1[i] = balance;
				break;
		}
		i++;
		num = num / system;
	}
	for(int j = i - 1; j >= 0; --j) {
		std::cout<<result1[i];
	}
}

int main() {
	int num = 0;
	int system = 0;
	std::cout<<"Mutqagrel tiv@ -> ";
	std::cin>>num;
	std::cout<<"Mutqagrel hamakarg@ ->";
	std::cin>>system;
	if(10 >= system){
		std::cout<<"Nor hamakargi tiv@ klini -> "<<convers(num, system)<<'\n';
	} else if(16 >= system || 10 < system) {
		std::cout<<"Nor hamakargi tiv@ klini -> ";
		convers1(num, system);
	} else {
		std::cout<<"Sxal mutqagrum \n";
	}
	return 0;
}
