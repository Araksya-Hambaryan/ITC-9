#include <iostream>
#include <string>

void qanak(std::string &str, char a) {
	int qanak = 0;
	for(int i = 0; str[i] != '\0'; ++i) {
		if(str[i] == a) {
			qanak++;
		}
	}
	std::cout<<"nshvac elementi qanakn toxum =" << qanak << std::endl;
}
bool remove(std::string &str, char a) {
        if('\0' != str[0]) {
                for(int i = 0; str[i] != '\0'; ++i) {
                        if(str[i] == a) {
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



void replace(std::string &str, char a, char b) {
	for(int i = 0; str[i] != '\0'; ++i) {
		if(str[i] == a) {
			str[i] = b;
		}
	}
	std::cout <<str << std::endl;
}

int main() {
	std::string gorcoxutyun[4] = {"qanak","remove","replace","exit"};
	std::string str;
	std::cout<<" Mutqagrel tox " << std::endl;
	std::getline(std::cin,str);
	std::string Gorcoxutyun;
		int arjeq = 5;
		char element1;
		char element2;
		bool chack = true;
		std::cout<<"Asel inch gorcoxutyun" << std::endl;
		std::cin>>Gorcoxutyun;
		for(int i = 0; i < 4; ++i) {
			if(gorcoxutyun[i] == Gorcoxutyun) {
				arjeq = i;
			}
		}
		switch(arjeq) {
			case (0):
				std::cout<<"Mutqagrel ayn elemetn  vori qanak@ petq ehashvel " << std::endl;
				std::cin>>element1;
				qanak(str,element1);
				break;
			 case (1):

                                std::cout<<"Mutqagrel ayn elementn vor petq e jnjel" << std::endl;
                                std::cin>>element1;
                                chack = remove(str,element1);
                                if(false == chack) {
                                        std::cout<<"Toxi verj\n";
                                        Gorcoxutyun = "exit";
                                }
                                break;

			case (2):
				std::cout<<"Mutqagrel ayn elementnern voronq petq e poxel texerov" << std::endl;
				std::cin>>element1>>element2;
				replace(str,element1,element2);
				break;

			case (3):
				Gorcoxutyun = "exit";
				break;
			default:
				std::cout<<"Sxal mutqagrum \n";
				break;
		}

	
	return 0;
}
