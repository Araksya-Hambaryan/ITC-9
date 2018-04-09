#include <iostream>

bool parz( int n){
	int bajanararneriQanak = 1;
	while(n){
		for(int i = 2; i <= n /2; ++i){
			if(0 == n % i ) {
				bajanararneriQanak ++;
			}
		} if (1 == bajanararneriQanak) {
			return true;
		} else {
			return false;
		}
	}
}
int main(){
	int tiv;
	std::cout << "Nermuceq tiv" << std::endl;
	std::cin >> tiv;
	std::cout << "Nermucvac tvi bolor parz bajanararner" << std::endl;
	for(int j = 2; j <= tiv /2; ++j){
		if(0 == tiv % j && parz(j))  {
			std::cout << j << std::endl;
		}

	}


if (parz(tiv)){

	std::cout << tiv;
}
return 0;
}


