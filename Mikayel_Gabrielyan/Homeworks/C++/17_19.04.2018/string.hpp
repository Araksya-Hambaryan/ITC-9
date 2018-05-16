#ifndef STRING_HPP
#define STRING_HPP
#include "var.hpp"

class String : public Var {
    public:
        String();
        String(std::string str);
        /*String virtual operator+(const String& str) {
        }
        String virtual operator=(const String& str) {
        }*/

};

#endif
