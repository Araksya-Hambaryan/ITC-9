#include <iostream>
#include <cstdlib>
#include <ctime>

int zarC(char x) {
	int randomC = 0;
	char mutq;
	std::cout<<"CPU -> ";
	while(mutq != 'c') {
	std::cin>>mutq;
	std::cout<<"\n";
	}
	char** arr = new char* [3];
	for(int i = 0; i < 3; ++i) {
		arr[i] = new char[3];
	}
	srand(time(NULL));
	randomC = (rand() % 6) + 1;
	switch(randomC) {
		case (1):
	arr[1][1] = x;
	for(int i = 0; i < 3; ++i) {
		for(int j = 0; j < 3; ++j) {
			std::cout<<arr[i][j]<<"  ";
		}
		std::cout<<'\n';
	}
	break;
		case (2):
	arr[0][0] = x;
	arr[2][2] = x;
	for(int i = 0; i < 3; ++i) {
		for(int j = 0; j < 3; ++j) {
			std::cout<<arr[i][j]<<"  ";
		}
		std::cout<<'\n';
	}
	break;
		case (3):
	arr[0][0] = x;
	arr[1][1] = x;
	arr[2][2] = x;
	for(int i = 0; i < 3; ++i) {
		for(int j = 0; j < 3; ++j) {
			std::cout<<arr[i][j]<<"  ";
		}
		std::cout<<'\n';
	}
	break;
		case (4):
	arr[0][0] = x;
	arr[0][2] = x;
	arr[2][0] = x;
	arr[2][2] = x;
	for(int i = 0; i < 3; ++i) {
		for(int j = 0; j < 3; ++j) {
			std::cout<<arr[i][j]<<"  ";
		}
		std::cout<<'\n';
	}
	break;
		case (5):
	arr[0][0] = x;
	arr[0][2] = x;
	arr[2][0] = x;
	arr[2][2] = x;
	arr[1][1] = x;
	for(int i = 0; i < 3; ++i) {
		for(int j = 0; j < 3; ++j) {
			std::cout<<arr[i][j]<<"  ";
		}
		std::cout<<'\n';
	}
	break;
		case (6):
	arr[0][0] = x;
	arr[0][2] = x;
	arr[1][0] = x;
	arr[1][2] = x;
	arr[2][0] = x;
	arr[2][2] = x;
	for(int i = 0; i < 3; ++i) {
		for(int j = 0; j < 3; ++j) {
			std::cout<<arr[i][j]<<"  ";
		}
		std::cout<<'\n';
	}
	break;
	}
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
	char** arr = new char* [3];
	for(int i = 0; i < 3; ++i) {
		arr[i] = new char[3];
	}
	srand(time(NULL));
	randomP = (rand() % 6) + 1;
	switch(randomP) {
		case (1):
	arr[1][1] = x;
	for(int i = 0; i < 3; ++i) {
		for(int j = 0; j < 3; ++j) {
			std::cout<<arr[i][j]<<"  ";
		}
		std::cout<<'\n';
	}
	break;
		case (2):
	arr[0][0] = x;
	arr[2][2] = x;
	for(int i = 0; i < 3; ++i) {
		for(int j = 0; j < 3; ++j) {
			std::cout<<arr[i][j]<<"  ";
		}
		std::cout<<'\n';
	}
	break;
		case (3):
	arr[0][0] = x;
	arr[1][1] = x;
	arr[2][2] = x;
	for(int i = 0; i < 3; ++i) {
		for(int j = 0; j < 3; ++j) {
			std::cout<<arr[i][j]<<"  ";
		}
		std::cout<<'\n';
	}
	break;
		case (4):
	arr[0][0] = x;
	arr[0][2] = x;
	arr[2][0] = x;
	arr[2][2] = x;
	for(int i = 0; i < 3; ++i) {
		for(int j = 0; j < 3; ++j) {
			std::cout<<arr[i][j]<<"  ";
		}
		std::cout<<'\n';
	}
	break;
		case (5):
	arr[0][0] = x;
	arr[0][2] = x;
	arr[2][0] = x;
	arr[2][2] = x;
	arr[1][1] = x;
	for(int i = 0; i < 3; ++i) {
		for(int j = 0; j < 3; ++j) {
			std::cout<<arr[i][j]<<"  ";
		}
		std::cout<<'\n';
	}
	break;
		case (6):
	arr[0][0] = x;
	arr[0][2] = x;
	arr[1][0] = x;
	arr[1][2] = x;
	arr[2][0] = x;
	arr[2][2] = x;
	for(int i = 0; i < 3; ++i) {
		for(int j = 0; j < 3; ++j) {
			std::cout<<arr[i][j]<<"  ";
		}
		std::cout<<'\n';
	}
	break;
	}
	return randomP;
}

int main() {
	int countC = 0;
	int countP = 0;
	char a;
	std::cout<<"@ntrel nshan@ -> ";
	std::cin>>a;
	std::cout<<"CPU-i zar gcelu hamar mutqagreq c isk dzez hamar mutqagreq p \n";
	countC += zarC(a);
	countP += zarP(a);
	countC += zarC(a);
	countP += zarP(a);
	countC += zarC(a);
	countP += zarP(a);
	countC += zarC(a);
	countP += zarP(a);
	if(countC < countP){
		std::cout<<"Duq haxteciq !!! \n";
	} else if (countC > countP) {
		std::cout<<"Duq partveciq :( \n";
	} else {
		std::cout<<"Voch voqi \n";
	}
	return 0;
}
