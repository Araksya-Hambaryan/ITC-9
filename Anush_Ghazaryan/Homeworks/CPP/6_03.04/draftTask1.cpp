#include<iostream>
#include<string>
#include<algorithm>
void count (std::string input, char  letter) {
	int sum = 0;
	for ( int i =0; i < input.size(); ++i ) { 
		if (letter == input [i] ) {
			++ sum;
		}
	 }
	std::cout << "The count of " << letter << " is : " << sum << std::endl;
}

//void replace (std::string input, char letter1, char letter2 ) {
//	std::replace ( input.begin(), input.end(), letter1, letter2);

//}

//void deleteFunc (std::string input, char letter ) {

	
//	for ( int i = 0; i < input.size(); ++i ) {
//		if ( letter == input [i] ) {
//		input.erase ( std::remove ( input.begin(),input.end(),input[i], input.end()));
//		}
//	
//	}

//	std::cout << "\n";
//}

int main () {


	std::cout << "Hi ! " << std::endl;
	char letter1;
	char letter2;
	char letter3;
	char letter4;
	std::string input;
	std::cout << "Input a string : ";
	std::cin >> input;
	std::cout<<"\n";
	std::cout << "Type a letter you want to count in string  : ";
	std::cin >> letter1;
	std::cout << "\n";
	std::cout << "Type 2 letters you want to replace in string (Ex. a k ) :  ";
	std::cin >> letter2 >> letter3;
	std::cout << "\n";
	std::cout << "Type a letter you want to delete from  string : ";
	std::cin >> letter4;
	std::cout << "\n";
	for ( int i = 1; i < 100; ++i ) {
		std::cout << "*";
	}
	std::cout << "\n Awsome !!! " << std::endl;
	std::cout << "\n Now type 1  2  3  4 " << std::endl;
	char  num;
	bool flag = true;
	while (flag ) {
	
		std::cin >> num;
	switch (num) { 

		case '1' : 
			count ( input, letter1 );
			break;
//		case '2' :
//			replace ( input, letter2, letter3 );
//			break;
//		case '3' :
//			deleteFunc ( input, letter4 );
//			break;
		case '2' :
			std::cout << "Good luck! " << std::endl;
			flag = false;
			break;
			 
		default : {
			std::cout << "******Wrong input! Type only 1 2 3 4******" << std::endl;
			}
			



	}












}

return 0;
}
