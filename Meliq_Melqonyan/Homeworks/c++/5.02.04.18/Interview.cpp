#include <iostream>
#include <string>

int main() {
	char arr[6][255] = {"barev_vonc_es", "barev_lav_du", "lav_tnajinnern_grel_es", "ajo_iharke", "de_ctesutjun", "ctesutjun"};
	std::string str;
	std::cout << "havaqeq ajs barakapakcutjunneric voreve mek@ ev hamakargich@ kpatasxani::" << '\n';
	std::cout << "barev_vonc_es    lav_tnajinnern_grel_es    de_ctesutjun" << '\n';
	int k = 0;
	do {
		std::cin >> str;
		for(int i = 0; i < 5; i+=2) {
			if(str == arr[i]) {
				std::cout << arr[i + 1] << '\n';
				k = i;
			} else {
				std::cout << "chem haskanum" << '\n';	
			}
		}
	} while(k != 4);
	return 0;
}
