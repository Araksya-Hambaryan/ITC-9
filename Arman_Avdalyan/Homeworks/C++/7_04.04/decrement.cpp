#include <iostream>

int preDecrement(int& num) {
    num = num - 1;
    return num;
}

int postDecrement(int& num) {
    int temp = num;
    num = num - 1;
    return temp;
}

int main() {
    int num = 2;
    int num1 = 7;
    int num2 = 0;
    std :: cout << "num = " << num << std :: endl;
    num = preDecrement(num);
    std :: cout << "--num = " << num << std :: endl;
    std :: cout << "num1 = " << num1 << std :: endl;
    num2 = postDecrement(num1);
    std :: cout << "num1++ = " << num2 << std :: endl;
    std :: cout << "num1 == " << num1 << std :: endl;
    return 0;
}
