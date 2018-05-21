#include "list.hpp"
#include <iostream>

int main() {
    List* list = new List;
    for (int i = 0; i < 10; ++i) {
        list -> push(i);
    }
    list -> print();
 
    list -> erase(5);
    list -> print();

    list -> pop();
    list -> print();

    list -> insert(0, 1000);
    list -> print();

    std :: cout << list -> get(5) << std :: endl;

    std :: cout << list -> size() << std :: endl;

    return 0;
} 
