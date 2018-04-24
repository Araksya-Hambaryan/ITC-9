#include <iostream>
#include "var.hpp"

Var :: Var() {
    value = -1;
    strValue = "";
    b = 0;
}

Var :: Var(int value, std :: string str) {
    this -> value = value;
    strValue = str;
}

Var :: Var(int value, std :: string str, bool b) {
    this -> value = value;
    strValue = str;
    this -> b = b;
}

Var :: Var(const Var& obj) {
    this -> value = obj.value;
    strValue = obj.strValue;
    this -> b = obj.b;
}

Var& Var :: operator=(const Var& obj) {
    this -> value = obj.value;
    strValue = obj.strValue;
    this -> b = obj.b;
}

void Var :: operator=(int num) {
    this -> value = num;
}
void Var :: operator=(std :: string str) {
    this -> strValue = str;
}
void Var :: operator=(bool b){
    this -> b = b;
}

int Var :: getValue() { 
    return this -> value;
}

std :: string Var :: getStrValue() {
    return this -> strValue;
}

void Var :: setValue(int num) {
    value = num;
}

void Var :: setStrValue(std :: string value) {
    strValue = value;
}

void Var :: setBool(bool b) {
    this -> b = b;
}

bool Var :: getBool() {
    return this -> b;
}

