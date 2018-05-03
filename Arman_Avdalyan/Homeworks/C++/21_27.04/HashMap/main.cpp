#include <iostream>
#include "hashmap.hpp"

void print(HashMap* temp, std :: string key) {
    std :: string tmpValue = "";
    if (temp -> get(key, tmpValue)) {
        std :: cout << "Key = " << key << ", value = " << tmpValue << std :: endl;
    } else {
        std :: cout << "No such key.\n";
    }
}

int main() {
    HashMap* h = new HashMap;
    h -> add("Arman", "Avdalyan");
    h -> add("Aren", "Karapetyan");
    h -> add("Karen", "Vardanyan");
    h -> add("Armine", "Ayvazyan");
    h -> add("Narek", "Grigoryan");
    print(h, "Arman");
    h -> remove("Arman");
    print(h, "Arman");
    print(h, "Karen");
    h -> update("Karen", "Saghatelyan");
    print(h, "Karen");
    return 0;
}
