#include <iostream>
#include "animal.hpp"
    Animal::Animal() {
        tail = false;
        fur = false;
        foot = 0;
    }

    Animal::Animal(Animal& anim) {
        this->tail = anim.tail;
        this->fur = anim.fur;
        this->foot = anim.foot;
        std::cout << "Copy works!" << std::endl;
    }

    bool Animal::getTail() {
        return tail;
    }

    bool Animal::getFur() {
        return fur;
    }

    int Animal::getFoot() {
        return foot;
    }

    void Animal::setTail(bool tl) {
        this->tail = tl;
    }

    void Animal::setFur(bool fr) {
        this->fur = fr;
    }

/*    void Animal::setFoot(int ft) {
        this->foot = ft;
    }*/
