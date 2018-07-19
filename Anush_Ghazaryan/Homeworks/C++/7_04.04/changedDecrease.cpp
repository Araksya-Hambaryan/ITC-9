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

	int i;
	std::cout << " Enter a number ";
	std::cin >> i;
	std::cout << preDecrease(i);
	std::cout << "\n";
	std::cout << postDecrease(i);

return 0;
}
