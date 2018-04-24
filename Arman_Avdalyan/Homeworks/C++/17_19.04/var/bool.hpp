#ifndef BOOL_HPP
#define BOOL_HPP
#include "var.hpp"
// bool.cpp

class Bool : public Var{
    public:
        Bool();
        Bool(const Bool&);
        Bool(Bool&&);
        ~Bool();
        void operator=(const Bool&);
        void operator=(int);
        void setValue(int);
        int getValue();
    private:
        int* value;
};

#endif
