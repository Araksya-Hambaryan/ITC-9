#include <iostream>

int main() {
    char name[] = {"astghiksaghyan"};
    char* start = &name[0];
    int size = sizeof(name)/sizeof(char);
    char* end = &name[size-1];

    for(int i = 0; i < size/2; i++) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    std::cout << "name:\t" << std::endl;
    for(int i = 0; i < size; i++) {
        std::cout << name[i];
    }
    std::cout << std::endl;
    return 0;
}
