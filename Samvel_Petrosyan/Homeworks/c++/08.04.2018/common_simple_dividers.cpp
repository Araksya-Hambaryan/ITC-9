#include <iostream>
#include <math.h>

bool is_Prime(int num) {
   for(int i = 2; i <= sqrt(num); ++i){
   if(num % i == 0) {
   return false;
   }
   }
   return true;
}

int inputNumber() {
   int num = 0;
   std :: cout << "Input number: ";
   std :: cin >> num;
   while(!std :: cin || num < 0){
   std :: cin.clear();
   std :: cin.ignore();
   std :: cout << "input positive numbers: ";
   std :: cin >> num;
   }
   return num;
}

bool Prime_Divisors(int number) {
   int isTrue = 0;
   for (int i = 2; i < number; ++i) {
   if (0 == number % i && is_Prime(i)) {
   isTrue = 1;
   std :: cout << i << " ";
   }
   }
   std :: cout << std :: endl;
   return isTrue;
}

int main() {
   int number = inputNumber();
   if (!Prime_Divisors(number)) {
   std :: cout << "no prime divisors.\n";
   }
   return 0;
}

