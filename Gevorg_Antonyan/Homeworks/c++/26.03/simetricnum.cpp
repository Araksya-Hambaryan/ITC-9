#include <iostream>

int main() {
    int num = 0;
    int element = 0;
    bool check = 1;
    std::cout << "mutcheckagrel tiv" << std::endl;
    std::cin >> num ;   
    int m = num;
    while (0 != m) {
        m = m / 10;
        ++element;
	}
    int arr[element];
    for (int i = 0; i < element; ++i) {
	    arr[i] = num % 10;
	    num = num / 10;
	}
    for(int j = 0; j < (element / 2); ++j) {
    	if (arr[j] != arr[element - 1 - j]) {
        	check = 0;
        	break;
    	}
    }
    if (0 == check) {
        std::cout << "asimetric";
    } else {
            std::cout << "simetric";
        }
    return 0;
}
