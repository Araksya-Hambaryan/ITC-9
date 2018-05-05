#include <iostream>
#include <cmath>

int convertDec(int num,int mPow,int system, char*& adNewNum, int newNum = 0) {
    if(mPow < 0) {
        return newNum;
    }
    std::cout << "num:\t" << num << std::endl;
    int include = pow(system,mPow);
    std::cout << "Includ:\t" << include << std::endl;
    int count = num/include;
    std::cout << "count:\t" << count << std::endl;
    adNewNum = new char[mPow];
    if(count > 0) {
        newNum = newNum*10+count;
        adNewNum[mPow] = count;
    } else {
        newNum = newNum*10;
    }
    std::cout << "newNum:\t" << newNum << std::endl; 
    int remain = num - include*count;
    std::cout << "remain:\t" << remain << std::endl;
    convertDec(remain, mPow - 1, system, adNewNum, newNum);
}

int main() {
    int number;
    int nSystem;
    std::cout << "Enter number:\t" << std::endl;
    std::cin >> number;
    std::cout << "Enter system:\t" << std::endl;
    std::cin >> nSystem;   
    int maxPower;
    for(int i = 0; i < 32; i++) {
        if(number < pow(nSystem,i)) {
            maxPower = i-1;
            break;
            }
    }
    char* adNewNumber;
    std::cout << "Maxp:\t" << maxPower << std::endl;
    std::cout << convertDec(number, maxPower, nSystem, adNewNumber) << std::endl;
    for(int i = 0; i < maxPower; i++) {
        std::cout << adNewNumber[i];
    }
    return 0;
}
