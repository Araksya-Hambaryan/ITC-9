#include <iostream>
//Fib.haj - 0.1.1.2.3.5.8.13......
//index   - 1 2 3 4 5 6 7 8
int Fib(int index){
	if(index == 1) {
		return (0);
	} else if(index == 2) {
		return (1);

	}  else if (index >2) {
		return (Fib(index - 1) + Fib(index - 2));
	}
}

int main()
{
	int Index;
	std::cout << "Mutqagreq Fibonachii hajordakanutyante vor indexin hamapatasxanox tivn eq uzum" << std::endl;
	std::cin >> Index;
	std::cout << Fib(Index);
	return 0;
}

