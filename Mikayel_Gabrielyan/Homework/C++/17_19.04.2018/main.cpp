#include "number.hpp"
#include "string.hpp"
#include "vector.hpp"

int main() {
    Var* a = new Number(17);
    Var* b = new Number(63);
    Var* c = new String("Hello");
    Var* d = new Number(52);
    Var* e = new String("World");
    Vector vec;
    vec.pushBack(a); 
    vec.pushBack(b); 
    vec.pushBack(c); 
    vec.pushBack(d); 
    vec.pushBack(e); 
    vec.printVector();
    return 0;
}
