#include <iostream>

int main() {
	int strHour;
	int strMinut;
	int endHour;
	int endMinut;
	std::cout << "Enter the start hour:  " << std::endl;
	std::cin >> strHour;
	std::cout << "Enter the start minut:  " << std::endl;
	std::cin >> strMinut;
	std::cout << "Enter the end hour:  " << std::endl;
	std::cin >> endHour;
	std::cout << "Enter the end minut:  " << std::endl;
	std::cin >> endMinut;
	int strTime = strHour * 60 + strMinut;
	int endTime = endHour * 60 + endMinut;
	if(endTime > 720) {
		std::cout << "The end time have to be earlier 12:00" << std::endl;
		return 0;
	}
	if(strTime < 60) {
		std::cout << "The start time have to be after 01:00" << std::endl;
		return 0;
	}
	int time = endTime - strTime;
	if(time < 0) {
		std::cout << "Please, enter valid range!" << std::endl;
		return 0;
	}
	int countRing = time/60+time/67 + 1;
	std::cout << countRing << std::endl;
	return 0;
}
