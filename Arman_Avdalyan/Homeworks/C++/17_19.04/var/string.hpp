#ifndef STRING_HPP
#define STRING_HPP
#include <iostream>
#include "var.hpp"
// string.cpp

class String : public Var {
    public:
        String();
        String(std :: string);
        String(const String&);
        String(String&&);
        ~String();
        void operator=(std :: string);
};

#endif
