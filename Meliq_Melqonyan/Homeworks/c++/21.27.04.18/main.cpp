#include <iostream>
#include "hashmap.hpp"

int main() {
    HashMap h;
    h.add("Meliq", "mus");
    h.add("Arman" , "hay");
    h.update("Arman","te");
    h.remove("Arman");
    std :: cout << h.get("Arman");
    return 0;
}
