#include "bool.hpp"

Bool :: Bool() {
    setBool(0);
}

void Bool :: operator=(const Bool& obj) {
    setBool(*obj.b);
}

void Bool :: operator=(int num) {
    setBool(num);
}

Bool :: Bool(const Bool& obj) {}

Bool :: ~Bool() {}
