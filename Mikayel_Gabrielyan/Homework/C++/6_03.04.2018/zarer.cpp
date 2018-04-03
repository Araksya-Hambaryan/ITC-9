#include <iostream>
#include <cstdlib>
#include <ctime>
char arrC[15][3];
char arrP[15][3];

int zarC(char x) {
	int m = 0;
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
	arrC[m+1][1] = x;
	for(int i = 0; i < 15; ++i) {
		for(int j = 0; j < 3; ++j) {
			std::cout<<arrC[i][j]<<"  ";
		}
		std::cout<<'\n';
	}
	break;
		case (2):
	arrC[m][0] = x;
	arrC[m+2][2] = x;
	for(int i = 0; i < 15; ++i) {
		for(int j = 0; j < 3; ++j) {
			std::cout<<arrC[i][j]<<"  ";
		}
		std::cout<<'\n';
	}
	break;
		case (3):
	arrC[m][0] = x;
	arrC[m+1][1] = x;
	arrC[m+2][2] = x;
	for(int i = 0; i < 15; ++i) {
		for(int j = 0; j < 3; ++j) {
			std::cout<<arrC[i][j]<<"  ";
		}
		std::cout<<'\n';
	}
	break;
		case (4):
	arrC[m][0] = x;
	arrC[m][2] = x;
	arrC[m+2][0] = x;
	arrC[m+2][2] = x;
	for(int i = 0; i < 15; ++i) {
		for(int j = 0; j < 3; ++j) {
			std::cout<<arrC[i][j]<<"  ";
		}
		std::cout<<'\n';
	}
	break;
		case (5):
	arrC[m][0] = x;
	arrC[m][2] = x;
	arrC[m+2][0] = x;
	arrC[m+2][2] = x;
	arrC[m+1][1] = x;
	for(int i = 0; i < 15; ++i) {
		for(int j = 0; j < 3; ++j) {
			std::cout<<arrC[i][j]<<"  ";
		}
		std::cout<<'\n';
	}
	break;
		case (6):
	arrC[m][0] = x;
	arrC[m][2] = x;
	arrC[m+1][0] = x;
	arrC[m+1][2] = x;
	arrC[m+2][0] = x;
	arrC[m+2][2] = x;
	for(int i = 0; i < 15; ++i) {
		for(int j = 0; j < 3; ++j) {
			std::cout<<arrC[i][j]<<"  ";
		}
		std::cout<<'\n';
	}
	break;
	}
	m = m + 4;
	return randomC;
}

int zarP(char x) {
	int m = 0;
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
        for(int i = 0; i < 15; ++i) {
                for(int j = 0; j < 3; ++j) {
                        std::cout<<arrP[i][j]<<"  ";
                }
                std::cout<<'\n';
        }
        break;
                case (2):
        arrP[m][0] = x;
        arrP[m+2][2] = x;
        for(int i = 0; i < 15; ++i) {
                for(int j = 0; j < 3; ++j) {
                        std::cout<<arrP[i][j]<<"  ";
                }
                std::cout<<'\n';
        }
        break;
		case (3):
        arrP[m][0] = x;
        arrP[m+1][1] = x;
        arrP[m+2][2] = x;
        for(int i = 0; i < 15; ++i) {
                for(int j = 0; j < 3; ++j) {
                        std::cout<<arrP[i][j]<<"  ";
                }
                std::cout<<'\n';
        }
        break;
                case (4):
        arrP[m][0] = x;
        arrP[m][2] = x;
        arrP[m+2][0] = x;
        arrP[m+2][2] = x;
        for(int i = 0; i < 15; ++i) {
                for(int j = 0; j < 3; ++j) {
                        std::cout<<arrP[i][j]<<"  ";
                }
                std::cout<<'\n';
        }
	break;
        	case (5):
        arrP[m][0] = x;
        arrP[m][2] = x;
        arrP[m+2][0] = x;
        arrP[m+2][2] = x;
        arrP[m+1][1] = x;
        for(int i = 0; i < 15; ++i) {
                for(int j = 0; j < 3; ++j) {
                        std::cout<<arrP[i][j]<<"  ";
                }
                std::cout<<'\n';
        }
        break;
        	case (6):
	arrP[m][0] = x;
        arrP[m][2] = x;
        arrP[m+1][0] = x;
        arrP[m+1][2] = x;
        arrP[m+2][0] = x;
        arrP[m+2][2] = x;
        for(int i = 0; i < 15; ++i) {
                for(int j = 0; j < 3; ++j) {
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
	if(countC >= countP) {
		countC = 0;
		countP = 0;
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
