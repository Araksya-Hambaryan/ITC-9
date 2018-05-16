#ifndef STEK_HPP
#define STEK_HPP
#include "vect.hpp"

class Stek :  private  Vect {
private:
    int* arr;
    int size;
public:
    Stek ();
    ~Stek ();
    Stek (Stek& obj);
    Stek(Stek&& obj);
    Stek (int a);
    void pushStek (int a);
    void popStek ();
};


