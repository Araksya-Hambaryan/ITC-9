
#include <iostream> 
#include <cstdlib>
  struct Date {
    int year;
    int month;
    int day;
  };

int main() {
  int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  int yr;
  int mt;
  int dy;
  Date first;
  std::cout << "Taretiv  ";
  std::cin >> yr;
  if(1880 < yr && 2100 > yr) {
    first.year = yr;
  } else {
    std::cout << "@ntreq urish taretiv";
    exit(0);
  }
  std::cout << "Amis   ";
  std::cin >> mt;
  if(0 < mt && 13 > mt) {
    first.month = mt;
  } else {
    std::cout << "tarin uni 12 amis";
    exit(0);
  }
  std::cout << "Amsativ   ";
  std::cin >> dy;
  if(dy <= days[mt] && dy > 0) {
    first.day = dy;
  } else {
    std::cout << "Oreri qanak@ sxal e";
    exit(0);
  }
  std::cout << first.year << " " << first.month << " " << first.day << "\n";

  Date sec; //2nd date
  std::cout << "Taretiv2  ";
  std::cin >> yr;
  if(1880 < yr && 2100 > yr && yr >= first.year) {
    sec.year = yr;
  } else {
    std::cout << "@ntreq urish taretiv";
    exit(0);
  }
  std::cout << "Amis2   ";
  std::cin >> mt;
  if (0 < mt && 13 > mt) {
    sec.month = mt;
  } else {
    std::cout << "tarin uni 12 amis";
    exit(0);
  }
  std::cout << "Amsativ   ";
  std::cin >> dy;
  int dcont;
  int dcont1;
  if(dy <= days[mt] && dy > 0) {
    sec.day = dy;
  } else {
    std::cout << "Oreri qanak@ sxal e";
    exit(0);
  }
  for(int i = 0; i <= sec.month - 1; ++i) {
    dcont += days[i];
  }
  for(int i = 0; i <= first.month - 1; ++i) {
    dcont1 += days[i];
  }
  int secDayCnt = (sec.year - 1880) * 365 + dcont + sec.day;
  int firstDayCnt = (first.year - 1880) * 365 + dcont1 + first.day;
  if(secDayCnt - firstDayCnt >= 0) {
    std::cout << "Oreri qanak@= " << secDayCnt - firstDayCnt;
  } else {
    std::cout << "Oreri qanak@ chi karox bacasakan linel";
  }
  return 0;
}
