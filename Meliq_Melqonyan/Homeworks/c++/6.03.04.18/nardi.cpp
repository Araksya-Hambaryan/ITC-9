#include <iostream>
#include <cstdlib>

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
		std::cout << arr[pop][j] << "   ";
	}
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
	for(int i = 0; i < 10; ++i) {
		ar[i] = rand() % 6 + 1;
	}
	char arr[2][10] = {"CPU::", "P1::"};	
	int k = 1;
	int i = 0;	
	std::cout << arr[0] << '\n';
	for(int j = 0; j < 3; ++j) {
		zar(ar[i], k);	
	}
	std::cout << arr[1] << '\n';
	++i;
	for(int j = 0; j < 3; ++j) {
		zar(ar[i], k);	
	}

			return 0;



}

//----------------------------------------------------------------

int main() {
	gcel();
	return 0;
}



