#include <iostream>

#define validation \
    while (std::cin.fail() || 0 >= size) { \
        std::cout << "Invalid Value: Try again!" << std::endl; \
        std::cin.clear(); \
        std::cin.ignore(256,'\n'); \
        std::cout << "Enter intager number( > 0): "; \
        std::cin >> size; \
    } 

#define input_elements_of_array \
    int size = 0; \
    std::cout << "Enter size of array: "; \
    std::cin >> size; \
    validation; \
    int array[size]; \
    std::cout << "Enter the elements of the array: "; \
    for (int i = 0; i < size; ++i) { \
        std::cin >> array[i]; \
        validation; \
    };

#define find_maximum_element \
    int max = array[0]; \
    for (int i = 1; i < size; ++i) { \
        if (max < array[i]) { \
            max = array[i]; } \
     };

#define print_maximum_element \
     std::cout << "Max value is " << max << std::endl; 
 
int main() {

    input_elements_of_array
    find_maximum_element
    print_maximum_element

    return 0;
}
