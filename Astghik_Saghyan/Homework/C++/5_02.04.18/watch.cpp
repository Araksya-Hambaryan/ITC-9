#include <iostream>

int calcRings(int sHour, int sMinut, int eHour, int eMinut, int pivot) {
	int countRings;
	int duration = eHour * 60 + eMinut - sHour * 60 -sMinut;
	if(duration < 0) {
		std::cout << "Enter valid range!" << std::endl;
		return 0;
	}
	if(duration < 60) {
		return 0;
	}
	if(sMinut > pivot) {
		duration = duration - (60 - sMinut);
	} else {
		duration = duration - (pivot - sMinut);
	}
	countRings = duration/60 + 1;
	return countRings;
}

int main() {
	int strHour;
	int strMinut;
	int endHour;
	int endMinut;
	int ringsHour;
	int ringsMinut;
	std::cout << "Enter the start hour:  " << std::endl;
	std::cin >> strHour;
	std::cout << "Enter the start minut:  " << std::endl;
	std::cin >> strMinut;
	std::cout << "Enter the end hour:  " << std::endl;
	std::cin >> endHour;
	std::cout << "Enter the end minut:  " << std::endl;
	std::cin >> endMinut;
	if ( strHour < 1 || strHour > 12 || endHour < 1 || endHour > 12) {
		std::cout << "Enter valid hour!";
		return 0;
	}
	if ( strMinut < 0 || strMinut > 60 || endMinut < 0 || endMinut > 60) {
		std::cout << "Enter valid minut!";
		return 0;
	}
	
	ringsHour = calcRings(strHour, strMinut, endHour, endMinut, 0); 
	ringsMinut = calcRings(strHour, strMinut, endHour, endMinut, 6); 
	std::cout << "Clock will ring " << ringsHour + ringsMinut << " time!" << std::endl;
	return 0;
}
