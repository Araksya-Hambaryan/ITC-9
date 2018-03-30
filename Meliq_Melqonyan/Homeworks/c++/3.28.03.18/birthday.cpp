#include <iostream>
int stugum (int tari, int den, int amis, char gic) {
	if(0 >= tari || 0 >= den || 0 >= amis || gic != '_') {
		return 0;
	} 
	if(31 < den || 12 < amis) {
		return 0;
	}
	if(0 == tari % 4 && 2 == amis ) {
		if(29 < den) {
			return 0;
		}
	} else {
		if(1 == amis % 2) {
			if(30 < den) {
				return 0;
			}
		}
	}
	return 1;
}
int main () {
	int popoxakan;
	int den, amis, tari;
	char gic;
	std::cout << "nermuceq vinipuxi cnndjan orva tvjalner@ " <<'\n';
	std::cout << "mutqagreq tarin heto |enter| heto or@ _ amis@ hakarak depqum patasxan cheq stana" << '\n';
	std::cin >> tari >> den >> gic >> amis;
	std::cout << '\n';
        if(stugum(tari, den, amis, gic) > 0 ) {
    	popoxakan = amis % 10 * 10 + amis / 10;
    	amis = den % 10 * 10 + den / 10;
    	den = popoxakan; 
    	if(stugum(tari, den, amis, gic) > 0 ) {
    		std::cout << "kgan   ";
    		std::cout << tari << "  " << den << "-" << amis <<'\n';
		} else {
			std::cout << "chen ga  ";
		}
	}  else {
	    std::cout << "sxal eq mutqagrel" << '\n';
        }
	return 0;
}
