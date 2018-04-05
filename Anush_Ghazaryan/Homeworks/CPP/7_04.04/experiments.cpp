#include<iostream>

void func(int one, float two ,char three) {
	std::cout << one << " " <<  two << " " <<  three <<  "   int, float, char function" << std::endl;
}

void func(float one, int two, char three) {
	std::cout << one <<  " "  << two << " "  << three <<  "    float, int, char function" << std::endl;
}

void func(char one, int two, float three) {
	std::cout << one << " " <<  two << " " <<  three << "   char, int, float function" << std::endl;
}

void func(float arg) {
	std::cout << arg << "    float function" << std::endl; 
}

void func(int arg) {
	std::cout << arg << "    int function" << std::endl;
}
void func(char  arg) {
	std::cout << arg <<  "    char function " << std::endl;
}
void func(double arg) {
	std::cout << arg <<  "     double function " << std::endl;
}
int main() {

	func(4) ;
	func(4.2);
	func('4', 4.5, 5);
//	func(4, 4,'5');
	func(4.55);
return 0;
}
