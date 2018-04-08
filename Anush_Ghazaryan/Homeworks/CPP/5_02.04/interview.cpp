#include<iostream>
#include<string>

int main () {

	std::string cpu[5] = { "Hi", "How are you?", "And what about lessons?", "What do you mean?", "Ok, got you.Have a great day"};
	std::cout <<  "Hi.Here are the questions that you should ask me " << std::endl;
	std::cout << "--------------------------------------------------------"<< std::endl;	

	for( int i = 0; i < 5; ++i ) {
		std::cout << cpu[i] << "\n";
	}
	for( int i = 0; i < 40; ++i ) {
		std::cout << "*";
	}
	std::cout << "\n Let's start our conversation " << std::endl;
	std::string answer;
	bool flag = true;
	do  {
		int  digit = -1;
		std::getline(std::cin, answer) ;
		for(int i = 0; i <= 4; ++i ) {
			if( answer == cpu[i] ){
				digit = i;
				break;
			} 
		}
  		
		switch (digit) {
			case 0 : 
				std::cout << "Hi" << std::endl;
				break;
			case 1 : 
				std::cout << "Fine, thank you" << std::endl;
				break;
			case 2 : 
				std::cout << "mmm...getting better, hope so" << std::endl;
				break;
			case 3 : 
				std::cout << "They are good, but need to be worked hard" << std::endl;
				break;
			case 4 :
				std::cout << "You too.Bye bye ! " << std::endl;
				flag = false;
				break;

	
	  	}
	

	} while(flag);

	
return 0;
}
