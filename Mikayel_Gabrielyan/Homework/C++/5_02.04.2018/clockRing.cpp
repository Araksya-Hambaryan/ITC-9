#include <iostream>
#include <string>

bool checkTime(int hour, int minute) {
	if(0 <= hour && 12 >= hour && 0 <= minute && 60 >= minute) {
		return true;
	} else {
		return false;
	}
}

int main() {
	int startHour = 0;
	int startMinute = 0;
	int endHour = 0;
	int endMinute = 0;
	int count = 0;
	char jam1[5];
	char jam2[5];
	std::string string2;
	std::cout<<"Mutqagrel skselu jam@ ->";
	std::cin>>jam1;
	std::cout<<"Mutqagrel avarti jam@ ->";
	std::cin>>jam2;
	startHour =((int)jam1[0] - (int)'0') * 10 + (int)jam1[1]-(int)'0';
	startMinute = ((int)jam1[3] - (int)'0') * 10 + (int)jam1[4] - (int)'0';
	endHour =((int)jam2[0] - (int)'0')* 10 + (int)jam2[1] - (int)'0';
	endMinute = ((int)jam2[3] - (int)'0') * 10 + (int)jam2[4] - (int)'0';
	if(true == checkTime(startHour, startMinute) && true == checkTime(endHour, endMinute)) {
		if(startHour > endHour ) {
			std::cout<<"Chi znga \n";
		} else {
			if(7 > startMinute){
				count++;
			}
			if(7 > endMinute) {
				count--;
			}
			count = count + (endHour - startHour) * 2;
			std::cout<<"Kznga "<<count<<" angam \n";
		}
	} else {
		std::cout<<"Sxal mutqagrum \n";
	}
	return 0;
}
