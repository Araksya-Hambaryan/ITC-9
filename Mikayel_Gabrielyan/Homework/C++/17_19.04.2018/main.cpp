#include "number.hpp"
#include "string.hpp"
#include "vector.hpp"

int main() {
    Var a = Number(17);
    Var b = Number(63);
    Var c = String("Hello");
    Var d = Number(52);
    Var e = String("World");
    Vector vec;
    vec.pushBack(a); 
    vec.pushBack(b); 
    vec.pushBack(c); 
    vec.pushBack(d); 
    vec.pushBack(e); 
    vec.printVector();
    return 0;
}
