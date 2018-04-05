#include <iostream>

int drawM(char** &arr, char simbol) {
	int chap = 0;
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
		return chap;
	}
}

void replace(char** &arr, int l, char& simb, char simbN) {
	if((int)simb != (int)simbN) {
		for(int i = 0; i < l; ++i) {
			for(int j = 0; j < l; ++j) {
				if((int)simb == (int)arr[i][j]) {
					arr[i][j] = simbN;
				}
			}
		}
		for(int i = 0; i < l; ++i) {
			for(int j = 0; j < l; ++j) {
				std::cout<<arr[i][j]<<' ';
			}
			std::cout<<'\n';
		}
		simb = simbN;
	} else {
		std::cout<<"Nuyn simvolneq mutqagrel \n";
	}
}

int main() {
	char** arr;
	char simb;
	char simbN;
	std::cout<<"@ntrel simvol -> ";
	std::cin>>simb;
	int size  = drawM(arr, simb);
	if( 1 != size) {
		for(int i = 0; i < size; ++i) {
			for(int j = 0; j < size; ++j) {
				std::cout<<arr[i][j]<<' ';
			}
			std::cout<<'\n';
		}
		std::cout<<"Durs galu hamar mutqagreq E \n";
		do {
			std::cout<<"Mutqagreq nor simvol@ -> ";
			std::cin>>simbN;
			replace(arr, size, simb, simbN); 
		} while((int)'E' != (int)simbN);
	} else {
		std::cout<<"Sxal mutqagrum \n";
	}
	return 0;
}
