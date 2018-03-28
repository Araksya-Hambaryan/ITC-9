#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

bool check(int day,int month) {
    if(1 > month || 12 < month || 1 > day) {
        return false;
    }
    if(day > (int)day || month > (int)month) {
        return false;
    }
    if((1 == month || 3 == month || 5 == month || 7 == month || 8 == month || 10 == month || 12 == month) && 31 < day) {
        return false;
    } else if(2 == month && 28 < day) {
        return false;
    } else if((4 == month || 6 == month || 9 == month || 11 == month) && 30 < day) {
        return false;
    } else {
        return true;
    }
}

int main() {
	int year = 0;
	int day = 0;
	char simbol;
	int month = 0;
	int x = 0;
	cout<<"Mutqagrel Vini-i cnndyan or@. Orinak 2018 28-03 -> ";
	cin>>year>>day>>simbol>>month;
	x = day;
	if(check(day,month) == true){
		if(10 > month) {
			day = month * 10;
		} else {
			day = (month % 10) * 10 + month / 10;
		}
		if(10 < x) {
			month = x * 10;
		} else {
			month = (x % 10) * 10 + x / 10;
		} 
		if(check(day,month) == true) {
			cout<<"Kgan "<<year<<" "<<day<<'-'<<month<<endl;
		} else {
			cout<<"Aydpisi Or goyutyun chuni vorpisi gan"<<endl;
		}
	} else {
		cout<<"Sxal mutqagrum "<<endl;
	}
return 0;
}
