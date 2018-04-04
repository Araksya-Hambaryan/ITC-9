#include <iostream>
#include <cstdlib>

int count(char **arr, int erk) {
	char sim;
	std::cout << "nermuceq simvol@ vor@ petqe hasvem:: ";
	std::cin >> sim;
	int qanak = 0;
	for(int i = 0; i < erk; ++i) {
		for(int j = 0; j < erk; ++j) {
			if(arr[i][j] == sim) {
				++qanak;
			}
		}
	}
	std::cout << qanak << '\n';
	return 0;
}

int replace(char **arr, char sim, int erk) {
	char sim2;
	char sim3;
	int i;
	int j;
	std::cout << "vor simvol@ poxem:: ";
	std::cin >> sim2;
	std::cout << "vor simvolov:: ";
	std::cin >> sim3;
	for(i = 0; i < erk; ++i) {
		for(j = 0; j < erk; ++j) {
			if(arr[i][j] == sim2) {
				arr[i][j] = sim3;
			}
		}
	}
	for(i = 0; i < erk; ++i) {
		std::cout << '\n';
		for(j = 0; j < erk; ++j) {
			std::cout << arr[i][j];
		}
	}
	std::cout << '\n';
	return 0;
}

int draw(char **arr, char sim) {
	int k;
	int i;
	int j;
	do {
		k = rand() % 23 + 10;
	} while(k % 2 == 0);
	char** array = new char* [k];
	for(i = 0; i < k; ++i) {
		arr[i] = new char [k];
	}
	for(i = 0; i < k; ++i) {
		arr[i][0] = sim; 
	}
	for(i = 0; i < k; ++i) {
		arr[i][k - 1] = sim; 
	}
	i = 1;
	for(j = 1; j < k - 1; ++j) {
		if(j < k / 2 - 0.5 ) {
			arr[i][j] = sim;
			++i;
		} else if(j < k - 1){
			arr[i][j] = sim;
			--i;
		}	
	}
	for(i = 0; i < k; ++i) {
		std::cout << '\n';
		for(j = 0; j < k; ++j) {
			if(arr[i][j] == sim) {
				std::cout << sim;
			} else {
				arr[i][j] = '_';
				std::cout << arr[i][j];
			}
		}
	}
	std::cout << '\n' << '\n';
	return k;
}
int main() {
	char** arr;
	char sim;
	std::cout << "nermuceq voreve simvol:: ";
	std::cin >> sim;
	int erk = draw(arr, sim);
	replace(arr, sim, erk);
	count(arr, erk);
	return 0;
		
}
