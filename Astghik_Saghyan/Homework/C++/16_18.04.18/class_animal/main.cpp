#include <iostream>
#include "animal.hpp"

int main() {
    Animal bird;
    std::cout << "Bird foot:\t" << bird.getFoot() << std::endl;
    bird.setFur(true);
    std::cout << "Bird fur:\t" << bird.getFur() << std::endl;
	return 0;
}

