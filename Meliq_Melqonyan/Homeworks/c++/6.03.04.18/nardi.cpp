#include <iostream>
#include <cstdlib>
#include <ctime>

int zar(int n, int k) {
	static int pop = 0;
	static int pop2 = k;
	if(pop2 == 0) {
		pop2 = k;
	}
       	char arr[3][3];
	for(int i = 0; i < 3; ++i) {
		for(int j = 0; j < 3; ++j) {
			arr[i][j] = ' ';
		}
	}
	switch(n) {
		case 1:
			arr[1][1] = '*';
			break;
		case 2:
			arr[0][0] = '*';
			arr[2][2] = '*';
			break;
		case 3:
			arr[0][0] = '*';
			arr[1][1] = '*';
			arr[2][2] = '*';
			break;
		case 4:
			arr[0][0] = '*';
			arr[0][2] = '*';
			arr[2][0] = '*';
			arr[2][2] = '*';
			break;
		case 5:
			arr[0][0] = '*';
			arr[0][2] = '*';
			arr[2][0] = '*';
			arr[2][2] = '*';
			arr[1][1] = '*';
			break;
		case 6:
			arr[0][0] = '*';
			arr[0][2] = '*';
			arr[2][0] = '*';
			arr[2][2] = '*';
			arr[1][0] = '*';
			arr[1][2] = '*';
			break;
	}
	for(int j = 0; j < 3; ++j) {
		std::cout << arr[pop][j];
	}
	std::cout << "      ";
	--pop2;
	if(pop2 == 0) {
		++pop;
		std::cout << '\n';
	}
	if(pop == 3) {
		std::cout << '\n';
		pop = 0;
	}
	return 0;
}
//-----------------------------------------------------------

int gcel() {
	int ar[10];
	std::srand(std::time(NULL));
	for(int i = 0; i < 10; ++i) {
		ar[i] = rand() % 6 + 1;
	}
	char arr[2][10] = {"CPU::", "P1::"};	
	int k = 1;
	int i = 0;
	for(int j = 0; j < 3; ++j) {
		zar(ar[i], k);	
	}
	std::cout << arr[1] << '\n';
	std::cout << "Press Enter to Continue";
	std::cin.ignore();
	++i;
	for(int j = 0; j < 3; ++j) {
		zar(ar[i], k);	
	}
	int tar = 0;
	if(ar[0] < ar[1]) {
		tar = 1;
	}
	while(k != 5) {
		int y = 2;
		while (y!=4) {
			std::cout << '\n' << '\n' << '\n' << arr[tar] <<'\n';
			if(tar == 1) {
				--tar;
				std::cout << "Press Enter to Continue";
				std::cin.ignore();
			} else {
				++tar;
			}
			for(int j = 0; j < 3; ++j) {
				for(i = y; i < 2 + k * 2; i+=2) {
					zar(ar[i],k);
				}
			}
			++y;
		}
		++k;
	}
	int p = ar[2] + ar[4] + ar[6] + ar[8]; 
	int h = ar[3] + ar[5] + ar[7] + ar[9]; 
	if(p > h) {
		if(tar) {
			std::cout << "haxtel e " << arr[1] << '\n';
		} else {  
			std::cout << "haxtel e " << arr[0] << '\n';
		}
	} else if(h > p) { 
		if(tar) {
			std::cout << "haxtel e " << arr[0] << '\n';
		} else {  
			std::cout << "haxtel e " << arr[1] << '\n';
		}
	} else {
		std::cout << "havasar" << '\n';
	}
	return 0;
}

//----------------------------------------------------------------

int main() {
	gcel();
	return 0;
}



