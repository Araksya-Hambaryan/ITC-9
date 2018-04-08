#include <iostream>

bool parz( int n){
	int bajanararneriQanak = 1;
	while(n){
		for(int 2 = i ; i <= n /2;++i){
			if(0 == n % i ) {
				bajanararneriQanak ++;
			}
		} 
		
	if (1 == bajanararneriQanak) {
			return true;
		} else {
			return false;
		}
	}
}
int main()
{
	int tiv1;
	int tiv2;
	std::cout << "Nermuceq erku tiv" << std::endl;
	std::cin >> tiv1;
	std::cin >> tiv2;
	std::cout <<"Arajin tvi parz bajanararnern voronq bajanarar chen erkrord tvi hamar klinen" << std::endl;
	for( int 2 == bajanarar ; bajanarar <= tiv1 ;++bajanarar){
		if(0 ==  tiv1 % bajanarar  && parz(bajanarar) && (0 != tiv2 % bajanarar )) {


			std::cout << bajanarar << std::endl;
		}

	}




	return 0;
}


