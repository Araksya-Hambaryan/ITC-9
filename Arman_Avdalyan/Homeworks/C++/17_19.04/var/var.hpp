#ifndef VAR_HPP
#define VAR_HPP
#include <iostream>
// var.cpp

class Var {
    public:
        Var();
        Var(int);
        Var(int, std :: string);
        Var(int, std :: string, bool);
        Var(const Var&);
        Var(Var&&);
        void setStrValue(std :: string);
        void setValue(int);
        void setBool(bool);
        int getValue();
        std :: string getStrValue();
        bool getBool();
        Var& operator=(const Var&);
        virtual void operator=(std :: string);
        virtual void operator=(int);
        virtual void operator=(bool);
    private:
        std :: string strValue;
        int value;
        bool b;
};

#endif
