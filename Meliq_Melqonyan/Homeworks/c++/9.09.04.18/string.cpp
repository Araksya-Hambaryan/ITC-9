#include <iostream>
#include <string>

int main() {
	std::string str = "homework";
	char* p1 = NULL;
	char* p2 = NULL;
	for(int i = 0; i < 4; ++i) {
	p1 = &str[i];
	p2 = &str[8 - i - 1];
	char p = *p1;
        *p1 = *p2;
        *p2 = p;
	}	
	std::cout << str << '\n';
	return 0;
}
