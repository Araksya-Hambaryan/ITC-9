#include <iostream>
#include <string>

void count(std::string str, char x) {
	int count = 0;
	for(int i = 0; str[i] != '\0'; ++i) {
		if(str[i] == x) {
			count++;
		}
	}
	std::cout<<"Ka "<<count<<" hat "<<x;
}

void replece(std::string str, char x, char y) {
	for(int i = 0; str[i] != '\0'; ++i) {
		if(str[i] == x) {
			str[i] = y;
		}
	}
	std::cout<<str<<std::endl;
}

void remove(std::string str, char x) {
	for(int i = 0; str[i] != '\0'; ++i) {
		if(str[i] == x) {
			str[i] = ' ';
		}
	}
	std::cout<<str<<std::endl;
}


int main() {
	std::string hraman[4] = {"count","replece","remove","exit"};
	std::string str;
	std::cout<<"Mutqagrel teqst@ -> ";
	std::getline(std::cin,str);
	std::string command;
	while("exit" != command) {
		int arjeq = -1;
		std::cout<<"Tveq dzer hraman@ ->";
		std::getline(std::cin,command);
		char tar1;
		char tar2;
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
				replece(str,tar1,tar2);
				break;
			case (2):
				
				std::cout<<"Mutqagrel tar@ vor@ cankanumeq jnjel ->";
				remove(str,tar1);
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
