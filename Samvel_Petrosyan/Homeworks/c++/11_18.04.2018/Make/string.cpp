#include <iostream>
#include "string.hpp"
        String::String() {
                num = 15;
        }

        String:: String(String& s) {
                num = s.num;
		std::cout << "Copy works!" << std::endl;
        }

/*        String:: String(String&& s) {
                num = s.num;
        }
*/
        int String::getNum() {
                return num;
        }

	void String::setNum(int newValue) {
		num = newValue;
	}


