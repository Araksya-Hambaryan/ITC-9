#include <iostream>
#include "var/var.hpp"
#include "var/number.hpp"
#include "var/string.hpp"
#include "Vector/vector.hpp"

int main() {
    Vector* v = new Vector;
    Var* var = new Var;
    Var* num = new Number(10);
    Var* str = new String("Arman");
    Var* num1 = new Number;
    *num = 98;
    v -> pushBack(num);
    v -> pushBack(str);
    v -> print();
    return 0;
}
