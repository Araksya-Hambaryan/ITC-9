#include <iostream>
#include <string>
#include <algorithm>

void count(std::string &str, char x) {
	int count = 0;
	for(int i = 0; str[i] != '\0'; ++i) {
		if(str[i] == x) {
			count++;
		}
	}
	std::cout<<"Ka "<<count<<" hat "<<x<<std::endl;
}

void replace(std::string &str, char x, char y) {
	for(int i = 0; str[i] != '\0'; ++i) {
		if(str[i] == x) {
			str[i] = y;
		}
	}
	std::cout<<str<<std::endl;
}

bool remove(std::string &str, char x) {
	if('\0' != str[0]) {
		for(int i = 0; str[i] != '\0'; ++i) {
			if(str[i] == x) {
				for(int j = i; str[j] != '\0'; ++j) {
					str[j] = str[j + 1];
				}
				--i;
			}
		}
		std::cout<<str<<std::endl;
		return true;
	} else {
		return false;
	}
}


int main() {
	std::string hraman[4] = {"count","replace","remove","exit"};
	std::string str;
	std::cout<<"Hramannern en -> ";
	for(int i = 0; i < 4; ++i) {
		std::cout<<hraman[i]<<'\t'<<'\t';
	}
	std::cout<<"\n Mutqagrel teqst@ -> ";
	std::getline(std::cin,str);
	std::string command;
	while("exit" != command) {
		int arjeq = -1;
		char tar1;
		char tar2;
		bool chack = true;
		std::cout<<"Tveq dzer hraman@ ->";
		std::cin>>command;
		for(int i = 0; i < 4; ++i) {
			if(hraman[i] == command) {
				arjeq = i;
			}
		}
		switch(arjeq) {
			case (0):
				std::cout<<"Mutqagrel tar@ vori qanak@ cankanumeq hashvel ->";
				std::cin>>tar1;
				count(str,tar1);
				break;
			case (1):
				std::cout<<"Mutqagrel tarer@ voronq cankanumeq poxel mek@ myusov ->";
				std::cin>>tar1>>tar2;
				replace(str,tar1,tar2);
				break;
			case (2):
				
				std::cout<<"Mutqagrel tar@ vor@ cankanumeq jnjel ->";
				std::cin>>tar1;
				chack = remove(str,tar1);
				if(false == chack) {
					std::cout<<"Tox@ verjacav :) \n";
					command = "exit";
				}
				break;
			case (3):
				command = "exit";
				break;
			default:
				std::cout<<"Sxal mutqagrum \n";
				break;
		}
	
	}
return 0;
}
