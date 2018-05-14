#include <iostream>
#include "string.hpp"

String fun(){
	String a;
	std::cout << "a-num:\t" << a.getNum() << std::endl;
	return a;
}
int main() {
        String str1;
	String str2 = str1;
	str1.setNum(90);
        std::cout << "Num:\t" << str1.getNum() << std::endl;
        std::cout << "Num:\t" << str2.getNum() << std::endl;
//        String outher = &fun();
	return 0;
}

