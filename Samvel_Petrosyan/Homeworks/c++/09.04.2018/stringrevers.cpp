#include <iostream>

int main() {
    int size = 6;
    char name[size] = "string";
    char* start = &name[0];
    char* end = &name[size-1];

    for(int i = 0; i < size/2; i++) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    std::cout << "name:\t" << name << std::endl;

    return 0;
}
