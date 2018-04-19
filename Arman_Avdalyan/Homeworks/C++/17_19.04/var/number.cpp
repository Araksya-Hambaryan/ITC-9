#include "number.hpp"

Number :: Number() {
    setValue(0);
}

Number :: Number(int num) {
    setValue(num);
}


Number :: Number(const Number& obj) {}

Number :: ~Number() {}

void Number :: operator=(int num) {
    setValue(num);
}
