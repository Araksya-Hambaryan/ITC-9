#include <iostream>

int main() {
	float num1 = 0;
	float num2 = 0;
	char simbol;
	std::cout<<"Calculator@ miacvac e, katareq dzer hashvark@ -> ";
	std::cin>>num1>>simbol>>num2;
	switch(simbol) {
		case '+': 
			std::cout<<num1<<" + "<<num2<<" = "<<num1 + num2<<"\n";
			break;
		case '-': 
			std::cout<<num1<<" - "<<num2<<" = "<<num1 - num2<<"\n";
			break;
		case '*': 
			std::cout<<num1<<" * "<<num2<<" = "<<num1 * num2<<"\n";
			break;
		case '/': 
			if(0 != num2) {
				std::cout<<num1<<" / "<<num2<<" = "<<num1 / num2<<"\n";
			} else {
				std::cout<<"Tiv@ bajanac e 0-i \n";
			}
			break;
		default:
			std::cout<<"Sxal gorcoxutyun \n";
			break;
	}
return 0;
}
