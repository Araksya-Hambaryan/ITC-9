#include<iostream>
#include<string>
#include<stack>
	bool correspondence ( char openedOne, char closedOne ) {

	if (( '[' == openedOne && ']' == closedOne) || ( '(' == openedOne && ')' == closedOne ) || ( '{' == openedOne && '}' == closedOne)
	 || ( '"' == openedOne && '"' == closedOne) || ( '\'' == openedOne && '\'' == closedOne )) {
	
	        
				return true;
	} else {
	 		
				return false;
	}	

}

	bool ckeck ( std::string input ) {
		
		int index = 0;
		int quantity = 0;

		int one;
		int two;

		std::stack < char > bracket;
	
		while ( '\0' != input [index] ) {

			if ( '"' == input [index] ) {

				if ( 0 == two % 2 ) {

					bracket.push ( input [index] );
				} else { 

					if  ( !correspondence ( bracket.top(), input [index] )) {
						return false; 
					} else {

						if ( !correspondence ( bracket.top(), input [index] ) ) {

							std::cout <<"Index : " << index << std::endl;
								return false;
						} else { 
							bracket.pop();
						} 
					}
				
				++ one;
	}

			if ( '{' == input [index] || '(' == input [index] || '[' == input [index] ) {

				bracket.push ( input [index] ) ; 
			}

			if ( '}' == input [index] || ')' == input [index] || ']' == input [index] ) {

				if ( bracket.empty () ) {

					std::cout << "Index : " << index << std::endl;
						return false;
				} else {

					if ( false == correspondence ( bracket.top(), input [index] ) ) {

						std::cout << "Index : " << index << std::endl;
							return false;
					} else { 

						bracket.pop();
					}
				}
			}
		++ index;
	 }
	return bracket.empty();
}        

}
int main () {

	std::string input;
		
	std::cout << " Input something  : ";

	std::cin >> input;

	if (! ckeck ( input )) {

		std::cout << "Not suitable" << std::endl;
	} else {

		std::cout << "******!!!*****" << std::endl;
	}

	return 0;
}
