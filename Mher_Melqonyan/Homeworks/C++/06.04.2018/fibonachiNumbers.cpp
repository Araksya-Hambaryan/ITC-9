#include <iostream>
int fib(int num) {
    if (1 > num){
        return 0;
    }
    if(1 == num) {
        return 1;
    }
    return fib(num-1) + fib(num-2);
}

int main()
{
    int num;
    std::cout << "nermuceq hertakan hamar@\n";
    std::cin >> num;
    if(0 < num && 300 > num){
        int value = fib(num);
        std::cout << num << "-in hamapatasxan andam@ klini " << value;
    } else {
        std::cout << "nermucvac tiv@ shat e mec nermuceq aveli poqr tiv :)";
    }
    return 0;
}

