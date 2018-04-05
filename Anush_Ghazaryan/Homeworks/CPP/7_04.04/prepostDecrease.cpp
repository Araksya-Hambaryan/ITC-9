#include<iostream>
int preDecrease( int &i) {

	i = i - 1;
	return i;

}

int postDecrease( int &i) {

	int j = i;
	i - 1;
	return j;
} 

int main() {

	int i = 5;
//	std::cout << preDecrease(i);
	std::cout << postDecrease(i);

return 0;
}

