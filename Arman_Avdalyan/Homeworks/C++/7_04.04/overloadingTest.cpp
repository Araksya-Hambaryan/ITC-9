#include <iostream>

void ovld(int num1, float num2, char arr[255]) {
    std :: cout << "Called function with 3 parameters: \n";
}

void ovld(int num1, double num2) {
    std :: cout << "Called function with int and double aparameters\n";
}

void ovld(double num1, double num2) {
    std :: cout << "Called function with 2 double parameters\n";
}

void ovld(float num1, float num2) {
    std :: cout << "Called function with 2 float parameters\n";
}

int main() {
    double num1 = 0;
    double num2 = 0;
    float numf1 = 0;
    float numf2 = 0;
    char arr[4] = "num";
    ovld(4, 5.0);
    ovld(4, 5, arr);
    //ovld(4, 4); error
    ovld(4.4, 4.4); // called function with 2 double parameters
    ovld(num1, num2);
    ovld(num1, 5);
    ovld(numf1, numf2);
    //ovld(numf1, num2); error
    return 0;
}
