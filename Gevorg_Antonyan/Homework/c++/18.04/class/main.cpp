#include "Stack.hpp"

int main() {
   Stack a(2,3);
   a.push1(6);
   a.push1(6);
   a.push1(6);
   a.push1(6);
   a.push1(6);
   a.push1(6);
   a.push1(6);
   a.push1(6);
   a.push1(6);
   a.push1(6);
   a.push1(6);
   a.push1(6);
   a.printStack();

     a.push1(8);
     a.push1(15);
      a.push1(1);
      a.push1(7);
      a.push1(55);
      a.push1(35);
     a.printStack();
   Vector a1(4, 8);
     a1.printVector();
     a1.push(5);
     a1.printVector();
     std::cout << std::endl;
    a1.push(6);
    a1.push(6);
    a1.push(6);
    a1.push(6);
    a1.push(6);
    a1.push(6);
    a1.push(6);
    a1.push(6);
    a1.push(6);
    a1.push(6);
    a1.push(6);
    a1.push(6);
    a1.push(6);
    a1.push(6);
    a1.push(6);
    a1.push(6);
    a1.push(6);
    a1.push(6);
    a1.push(6);
    a1.push(7);
    a1.push(6);
    a1.printVector();
     std::cout << std::endl;
     a1.Size();
     a1.element(2);
     a1.pop(); 
      Vector a2(a1);
      Vector a3 = std::move(a1);
    return 0;
}

