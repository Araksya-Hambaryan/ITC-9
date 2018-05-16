#include <iostream>
#include <string>

int main() {
	std::string name[3] = {"Serzh","Trump","Putin"};
	std::cout<<"Enter name \n";
	for(int i = 0; i < 3; ++i) {
		std::cout<<name[i]<<std::endl;
	}
	std::string question;
	while("Sxal Mutq" != question) {
		int arjeq = -1;
		std::getline(std::cin, question);
		for(int i = 0; i < 3; ++i) {
			if(name[i] == question) {
				arjeq = i;
			}
		}
		switch(arjeq) {
			case (0): std::cout<<"Serzh -> 30.06.1954 22:03\n";
				  break;
			case (1): std::cout<<"Trump -> 14.06.1946 22:04\n";
				  break;
			case (2): std::cout << "Putin -> 07.10.1952 22:05\n";
                  break;
            default: std::cout<<" what \n";
				 question = "Sxal";
			case (3): std::cout<<"bye \n";
				  question = "Sxal";
				  break;
                }
        }
        return 0;
}


