#include "hashMap.hpp"
#include <iostream>

int main() {
    HashMap* hashMap = new HashMap;
 
    hashMap -> addNode("Sofia", "Bulgaria");
    hashMap -> addNode("Yerevan", "Armenia");
    hashMap -> addNode("Brussels", "Belgium");
    hashMap -> addNode("Ottawa", "Canada");
    hashMap -> addNode("Bogota", "Colombia");
    hashMap -> addNode("Paris", "France");
    hashMap -> addNode("Berlin", "Germany");
    hashMap -> addNode("Rome", "Italy");
    hashMap -> addNode("Montevideo", "Uruguay");
    hashMap -> addNode("Santiago", "Chile");

    std :: cout << std :: endl;

    hashMap -> printNode("Yerevan");
    hashMap -> printNode("Paris");
    hashMap -> printNode("Berlin");
    hashMap -> printNode("Montevideo");

    hashMap -> deleteNode("Santiago");

    std :: cout << std :: endl;
    std :: cout << hashMap -> getNode("Bogota") << std :: endl;
    std :: cout << hashMap -> getNode("Ottawa") << std :: endl;

    std :: cout << std :: endl;
    delete hashMap;
    hashMap = nullptr;

    return 0;
}
