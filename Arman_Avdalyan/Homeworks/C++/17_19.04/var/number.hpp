#ifndef NUMBER_HPP
#define NUMBER_HPP
#include "var.hpp"
// number.cpp

class Number : public Var{
    public:
        Number();
        Number(int);
        Number(const Number&);
        Number(Number&&);
        ~Number();
        void operator=(const Number&);
        void operator=(int);
};

#endif
