
#include<iostream>

int main () {

    int startHour = 0;
    int startMin = 0;
    int endHour = 0;
    int endMin = 0;
    char symb; 
	std::cout << "Input start time ( ex 1:07) :  ";
	std::cin >> startHour >> symb >> startMin;
	std::cout << "Input end time (ex 5:07) :  ";
	std::cin >> endHour >> symb >> endMin;
	std::cout << "\n";

    int start  = ( startHour - 1 ) * 60 + startMin;
    int end  = ( endHour - 1 ) * 60 + endMin;
    int count  = 0;

    if(1 <= startHour && 12 >= startHour  && 0 <= startMin && 59 >= startMin  &&
	   1 <= endHour  && 12 >= endHour  && 0 <= startMin  && 59 >= startMin ) {  
  
	for (int i = start; i <= end; ++i ) {

	    if (0 == i % 60  ||  0 == ( i - 7 ) % 60 ) {
	        ++count;
	    }
        }

	std::cout<<"The count of rings:  " << count << std::endl;

    } else {
	std::cout<<"ERROR!\n";
    }
    return 0;
}
