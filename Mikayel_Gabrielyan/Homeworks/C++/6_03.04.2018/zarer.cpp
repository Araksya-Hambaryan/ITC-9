#include <iostream>
#include <cstdlib>
#include <ctime>
char arrC[3][15];
char arrP[3][15];
int m = 0;
int n = 0;
int zarC(char x) {
	int randomC = 0;
	char mutq;
	std::cout<<"CPU -> ";
	while(mutq != 'c') {
		std::cin>>mutq;
		std::cout<<"\n";
	}
	srand(time(NULL));
	randomC = (rand() % 6) + 1;
	switch(randomC) {
		case (1):
			arrC[1][n+1] = x;
			for(int i = 0; i < 3; ++i) {
				for(int j = 0; j < 15; ++j) {
					std::cout<<arrC[i][j]<<"  ";
				}
				std::cout<<'\n';
			}
			break;
		case (2):
			arrC[0][n] = x;
			arrC[2][n+2] = x;
			for(int i = 0; i < 3; ++i) {
				for(int j = 0; j < 15; ++j) {
					std::cout<<arrC[i][j]<<"  ";
				}
				std::cout<<'\n';
			}
			break;
		case (3):
			arrC[0][n] = x;
			arrC[1][n+1] = x;
			arrC[2][n+2] = x;
			for(int i = 0; i < 3; ++i) {
				for(int j = 0; j < 15; ++j) {
					std::cout<<arrC[i][j]<<"  ";
				}
				std::cout<<'\n';
			}
			break;
		case (4):
			arrC[0][n] = x;
			arrC[2][n] = x;
			arrC[0][n+2] = x;
			arrC[2][n+2] = x;
			for(int i = 0; i < 3; ++i) {
				for(int j = 0; j < 15; ++j) {
					std::cout<<arrC[i][j]<<"  ";
				}
				std::cout<<'\n';
			}
			break;
		case (5):
			arrC[0][n] = x;
			arrC[2][n] = x;
			arrC[0][n+2] = x;
			arrC[2][n+2] = x;
			arrC[1][n+1] = x;
			for(int i = 0; i < 3; ++i) {
				for(int j = 0; j < 15; ++j) {
					std::cout<<arrC[i][j]<<"  ";
				}
				std::cout<<'\n';
			}
			break;
		case (6):
			arrC[0][n] = x;
			arrC[1][n] = x;
			arrC[2][n] = x;
			arrC[0][n+2] = x;
			arrC[1][n+2] = x;
			arrC[2][n+2] = x;
			for(int i = 0; i < 3; ++i) {
				for(int j = 0; j < 15; ++j) {
					std::cout<<arrC[i][j]<<"  ";
				}
				std::cout<<'\n';
			}
			break;
	}
	n = n + 4;
	return randomC;
}

int zarP(char x) {
	int randomP = 0;
	char mutq;
	std::cout<<"P1 -> ";
	while(mutq != 'p') {
		std::cin>>mutq;
		std::cout<<"\n";
	}
	srand(time(NULL));
	randomP = (rand() % 6) + 1;
	switch(randomP) {
		case (1):
			arrP[m+1][1] = x;
			for(int i = 0; i < 3; ++i) {
				for(int j = 0; j < 15; ++j) {
					std::cout<<arrP[i][j]<<"  ";
				}
				std::cout<<'\n';
			}
			break;
		case (2):
			arrP[0][m] = x;
			arrP[2][m+2] = x;
			for(int i = 0; i < 3; ++i) {
				for(int j = 0; j < 15; ++j) {
					std::cout<<arrP[i][j]<<"  ";
				}
				std::cout<<'\n';
			}
			break;
		case (3):
			arrP[0][m] = x;
			arrP[1][m+1] = x;
			arrP[2][m+2] = x;
			for(int i = 0; i < 3; ++i) {
				for(int j = 0; j < 15; ++j) {
					std::cout<<arrP[i][j]<<"  ";
				}
				std::cout<<'\n';
			}
			break;
		case (4):
			arrP[0][m] = x;
			arrP[2][m] = x;
			arrP[0][m+2] = x;
			arrP[2][m+2] = x;
			for(int i = 0; i < 3; ++i) {
				for(int j = 0; j < 15; ++j) {
					std::cout<<arrP[i][j]<<"  ";
				}
				std::cout<<'\n';
			}
			break;
		case (5):
			arrP[0][m] = x;
			arrP[2][m] = x;
			arrP[0][m+2] = x;
			arrP[2][m+2] = x;
			arrP[1][m+1] = x;
			for(int i = 0; i < 3; ++i) {
				for(int j = 0; j < 15; ++j) {
					std::cout<<arrP[i][j]<<"  ";
				}
				std::cout<<'\n';
			}
			break;
		case (6):
			arrP[0][m] = x;
			arrP[1][m] = x;
			arrP[2][m] = x;
			arrP[0][m+2] = x;
			arrP[1][m+2] = x;
			arrP[2][m+2] = x;
			for(int i = 0; i < 3; ++i) {
				for(int j = 0; j < 15; ++j) {
					std::cout<<arrP[i][j]<<"  ";
				}
				std::cout<<'\n';
			}
			break;
	}
	m = m + 4;
	return randomP;
}

int main() {
	int countC = 0;
	int countP = 0;
	char a;
	std::cout<<"@ntrel nshan@ -> ";
	std::cin>>a;
	std::cout<<"CPU-i zar gcelu hamar mutqagreq c isk dzez hamar mutqagreq p \n";
	countC = zarC(a);
	countP = zarP(a);
	for(int i = 0; i < 3; ++i){
		for(int j = 0; j < 15; ++j) {
			arrC[i][j] = ' ';
		}
	}
	for(int i = 0; i < 3; ++i){
		for(int j = 0; j < 15; ++j) {
			arrP[i][j] = ' ';
		}
	}
	if(countC >= countP) {
		countC = 0;
		countP = 0;
		m = 0;
		n = 0;
		std::cout<<"Xax@ sksum e CPU-n \n";
		for(int i =0; i < 4; ++i) {
			std::cout<<"\n";
			countC += zarC(a);
			countP += zarP(a);
		}
		if(countC < countP){
			std::cout<<"Duq haxteciq !!! \n";
		} else if (countC > countP) {
			std::cout<<"Duq partveciq :( \n";
		} else {
			std::cout<<"Voch voqi \n";
		}
	} else {
		countC = 0;
		countP = 0;
		m = 0;
		n = 0;
		std::cout<<"Xax@ sksum eq Duq \n";
		for(int i =0; i < 4; ++i) {
			std::cout<<"\n";
			countP += zarP(a);
			countC += zarC(a);
		}
		if(countC < countP){
			std::cout<<"Duq haxteciq !!! \n";
		} else if (countC > countP) {
			std::cout<<"Duq partveciq :( \n";
		} else {
			std::cout<<"Voch voqi \n";
		}
	}
	return 0;
}
