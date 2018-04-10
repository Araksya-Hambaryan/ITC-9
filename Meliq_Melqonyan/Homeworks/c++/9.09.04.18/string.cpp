#include <iostream>
#include <string>

int main() {
	std::string str = "homework";
	char p;
	for(int i = 0; i < 4; ++i) {
	p = str[i];
	str[i] = str[7 - i];
	str[7 - i] = p;
	}	
	std::cout << str << '\n';
	return 0;
}
