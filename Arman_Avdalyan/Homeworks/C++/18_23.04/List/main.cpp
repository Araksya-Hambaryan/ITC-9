#include <iostream>
#include "list.hpp"

int main() {
    List* list = new List;
    for (int i = 0; i < 15; ++i) {
        list -> push(i);
    }
    list -> erase(0);
    list -> insert(0, 0);
    list -> print();
    list -> pop();
    list -> pop();
    std :: cout << std :: endl;
    list -> print();
    std :: cout << std :: endl;
    list -> insert(3,999);
    list -> print();
    std :: cout << std :: endl;
    list -> erase(4);
    list -> print();
    std :: cout << std :: endl;
    return 0;
}
