#include <iostream>

void drawM(char** &arr, char simbol, int chap) {
	for(int i = 0; i < chap; ++i) {
		arr[i][0] = simbol;
	}
	for(int i = 0;i < chap; ++i) {
		arr[i][chap -1] = simbol;
	}
	if(0 != chap % 2) {
		for(int i = 1;i <= chap / 2; ++i) {
			arr[i][i] = simbol;
		}
		for(int i = 1;i <= chap / 2; ++i) {
			arr[i][chap - 1 - i] = simbol;
		}
	} else {
		for(int i = 1;i < chap / 2; ++i) {
			arr[i][i] = simbol;
		}
		for(int i = 1;i < chap / 2; ++i) {
			arr[i][chap - 1 - i] = simbol;
		}
	}
}

int draw(char** &arr, char simbol) {
	int chap = 0;
	int m = 0;
	std::cout<<"Mutqagrel zangvaci chap@ (nax@ntreli e kent tiv)-> ";
	std::cin>>chap;
	if(3 > chap) {
		return 1;
	} else {
		arr = new char*[chap];
		for(int i = 0;i < chap; ++i) {
			arr[i] = new char[chap];
		}
		for(int i = 0;i < chap; ++i) {
			for(int j = 0;j < chap; ++j) {
				arr[i][j] = ' ';
			}
		}
		drawM(arr, simbol, chap);
		return chap;
	}
}

int count(char** &arr, int chap, char simbol) {
	int count = 0;
	for(int i = 0;i < chap; ++i) {
		for(int j = 0;j < chap; ++j) {
			if(simbol == arr[i][j]) {
				count++;
			}
		}
	}
	return count;
}


int main() {
	char** arr;
	char simb;
	std::cout<<"@ntrel simvol -> ";
	std::cin>>simb;
	int size = draw(arr, simb);
	if( 1 != size) {
		for(int i = 0; i < size; ++i) {
			for(int j = 0; j < size; ++j) {
				std::cout<<arr[i][j]<<"  ";
			}
			std::cout<<'\n';
		}
		std::cout<<"Sivolneri qanakn e ->  "<<count(arr, size, simb)<<'\n';
	} else {
		std::cout<<"Sxal mutqagrum \n";
	}
	for(int i = 0; i < size; ++i) {
		delete arr[i];
	}
	delete [] arr;
	return 0;
}
