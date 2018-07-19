#include<iostream>
#include<math.h>
int main () {


	float maxOfFloat = pow ( 2, sizeof ( float ) * 8.0 - 1 ) -1;
	float minOfFloat = ( -1 ) * maxOfFloat - 1;
	std::cout << "Max value of Flaot is : " << maxOfFloat << std::endl;
	std::cout << "Min value of Float is : " << minOfFloat << std::endl;


return 0; 
}
