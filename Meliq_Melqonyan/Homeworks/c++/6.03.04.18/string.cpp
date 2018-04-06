#include <iostream>
#include <string>

void poxel(std::string& str, int k, char s1, char s2) {
	for(int i = 0; i < k; ++i) {
		if(str[i] == s1) {
			str[i] = s2;
		}
	}
}

void jnjel(std::string& str, int k, char s) {
	for(int i = 0; i < k; ++i) {
		if(str[i] == s) {
			str[i] = '\0';
		}
	} 
}

int qanak(std::string& str, int k, char s) {
	int qanak = 0;
	for(int i = 0; i < k; ++i) {
		if(str[i] == s) {
			qanak++;	
		}
	}
	return qanak;
}

int main() {
	int tiv;
	char simvol, sim1, sim2;
	std::string str;
	std::cout << "enter line::     ";
	std :: getline(std :: cin, str);


	do {
		std::cout << "@ntrel gorcoxutjan hamar@" << '\n';
		std::cout << "1:count 2:replace 3:remove 4:exit" << '\n';
		std::cin >> tiv;
		switch(tiv) {
			case 1: 
			std::cout << "vor simvolne petq?" << '\n';
			std::cin >> simvol;
			std::cout << qanak(str, str.size(), simvol) << '\n';
			for(int i = 0; i < str.size(); ++i) {
				std::cout << str[i];
			}
			std::cout << '\n';
			break;
			case 2:
			std::cout << "vor simvol@ tem poxi ev vor simvolov" << '\n';
			std::cin >> sim1;
			std::cin >> sim2;
			poxel(str, str.size(), sim1, sim2); 
			for(int i = 0; i < str.size(); ++i) {
				std::cout << str[i];
			}
			std::cout << '\n';
			break;
			case 3:
			std::cout << "vor simvol@ jnjem" <<'\n';
			std::cin >> simvol;
		        jnjel(str, str.size(), simvol);
			for(int i = 0; i < str.size(); ++i) {
				std::cout << str[i];
			}
			std::cout << '\n' ;
		        break;	
		}
	} while(tiv != 4);
	return 0;	
}	
