#include <iostream>
#include <string>

int poxel(char *m, int k, char s1, char s2) {
	for(int i = 0; i < k; ++i) {

		if(m[i] == s1) {
			m[i] = s2;
		}
	}
	return 0;
}

int jnjel(char *m, int k, char s) {
	for(int i = 0; i < k; ++i) {
		if(m[i] == s) {
			m[i] = '\0';
		}
	} 
	return 0;
}

int qanak(char *m, int k, char s) {
	int qanak = 0;
	for(int i = 0; i < k; ++i) {
		if(m[i] == s) {
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
        std::cin >> str;
	char *s = new char [str.size()];
	for(int i = 0; i < str.size(); ++i) {
		s[i] = str[i];
	}
	do {
		std::cout << "@ntrel gorcoxutjan hamar@" << '\n';
		std::cout << "1:count 2:replace 3:remove 4:exit" << '\n';
		std::cin >> tiv;
		switch(tiv) {
			case 1: 
			std::cout << "vor simvolne petq?" << '\n';
			std::cin >> simvol;
			std::cout << qanak(s, str.size(), simvol) << '\n';
			for(int i = 0; i < str.size(); ++i) {
				std::cout << s[i];
			}
			std::cout << '\n';
			break;
			case 2:
			std::cout << "vor simvol@ tem poxi ev vor simvolov" << '\n';
			std::cin >> sim1;
			std::cin >> sim2;
			poxel(s, str.size(), sim1, sim2); 
			for(int i = 0; i < str.size(); ++i) {
				std::cout << s[i];
			}
			std::cout << '\n';
			break;
			case 3:
			std::cout << "vor simvol@ jnjem" <<'\n';
			std::cin >> simvol;
		        jnjel(s, str.size(), simvol);
			for(int i = 0; i < str.size(); ++i) {
				std::cout << s[i];
			}
			std::cout << '\n' ;
		        break;	
		}
	} while(tiv != 4);
	return 0;	
}	
