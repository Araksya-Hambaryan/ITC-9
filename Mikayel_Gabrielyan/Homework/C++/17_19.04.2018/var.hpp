#ifndef VAR_HPP
#define VAR_HPP

#include <iostream>
#include <string>

class Var {
    public:
        Var();
        void print();
        void operator=(const Var& obj);
        int getVal();
        std::string getStr();
    protected:
        int m_val;
        std::string m_str;
};

#endif
