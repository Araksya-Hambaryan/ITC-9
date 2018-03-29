#include <iostream>
int stugum (int tari, int den, int amis, char gic) {
	int k = 0;
		if(tari <= 0 || den <= 0 || amis <= 0 || gic != '_') {
		std::cout << "mutqagrvac en sxal tvjalner" <<'\n';
	} 
	if(den > 31 || amis > 12) {
			return 0;
	}
	if(tari % 4 == 0 && amis == 2 ) {
		if(den > 29) {
			return 0;
		}
	}
	else {
		if(amis % 2 ==1) {
			if(den > 30) {
				return 0;
			}
		}
	}
	k++;
	return k;
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
		}
		else {
			std::cout << "chen ga  ";
		}
	}
    else {
	    std::cout << "sxal eq mutqagrel" << '\n';
    }
	return 0;
}
