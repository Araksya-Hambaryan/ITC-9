#include <iostream>

int drawM(char** &x, char s) {
	int chap = 0;
	int m = 0;
	std::cout<<"Mutqagrel zangvaci chap@ -> ";
	std::cin>>chap;
	if(2 > chap) {
		return 1;
	} else {
		x = new char*[chap];
		for(int i = 0;i < chap; ++i) {
			x[i] = new char[4 * chap];
		}
		for(int i = 0;i < chap; ++i) {
			for(int j = 0;j < 4 * chap; ++j) {
				x[i][j] = ' ';
			}
		}
		for(int i = chap - 1; i >= 0; --i) {
			x[i][chap - 1 - i] = s;
		}
		for(int i = 0;i < chap; ++i) {
			x[i][chap - 1 + i] = s;
			m = chap - 1 + i;
		}
		for(int i = chap - 1;i > 0; --i) {
			x[i][m + chap - 1 - i] = s;
		}
		for(int i = 0;i < chap; ++i) {
			x[i][m + chap - 1 + i] = s;
		}
		return chap;
	}
}
void replace(char** &x, int l, char& simb, char simbN) {
	if((int)simb != (int)simbN) {
		for(int i = 0; i < l; ++i) {
			for(int j = 0; j < 4 * l; ++j) {
				if((int)simb == (int)x[i][j]) {
					x[i][j] = simbN;
				}
			}
		}
		for(int i = 0; i < l; ++i) {
			for(int j = 0; j < 4 * l; ++j) {
				std::cout<<x[i][j]<<' ';
			}
			std::cout<<'\n';
		}
		simb = simbN;
	} else {
		std::cout<<"Nuyn simvolneq mutqagrel \n";
	}
}

int main() {
	char** a;
	char simb;
	char simbN;
	std::cout<<"@ntrel simvol -> ";
	std::cin>>simb;
	int l  = drawM(a, simb);
	if( 1 != l) {
		for(int i = 0; i < l; ++i) {
			for(int j = 0; j < 4 * l; ++j) {
				std::cout<<a[i][j]<<' ';
			}
			std::cout<<'\n';
		}
		std::cout<<"Durs galu hamar mutqagreq E \n";
		while((int)'E' != (int)simbN) {
			std::cout<<"Mutqagreq nor simvol@ -> ";
			std::cin>>simbN;
			replace(a, l, simb, simbN); 
		}
	} else {
		std::cout<<"Sxal mutqagrum \n";
	}
	return 0;
}
