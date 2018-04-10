#include <iostream>
#include <string>
int main(){
	char temp;
	std::string str = "98745872";   
	char* p1 = &str[0];
	char* p2 = &str[str.size() - 1];
	for(int i = 0; i < str.size() / 2 ;i++){
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
		++p1;
		--p2;
	}
	std::cout << str;
	return 0;
}
