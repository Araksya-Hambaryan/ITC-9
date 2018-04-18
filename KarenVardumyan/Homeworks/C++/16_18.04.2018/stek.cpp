#include "stack.hpp"

Stek::Stek () { //defolut constructor
    std::cout<<"Defoult constructor is colde\n";
    *arr = nullptr;
    size = 0;
}
Stek::Stek (int a) {   //add vector 
    arr = new int [a];
    size = a;
    for(int i = 0; i < a; i++){
        arr[i] = 0;
    }
}
Stek::Stek (Stek& obj) { //copy constructor
    std::cout<<"Copy is done\n";
    this -> arr = new int [obj.size];
    for(int i = 0; i < obj.size; ++i) {
	this -> arr[i] = obj.getElement(i);
    }
    this -> size = obj.size;
}
Stek::~Stek () {
    std::cout << "Vector destructor\n";
    delete [] arr;
    arr = nullptr;
}
Stek::Stek (Stek&& obj) {
    std::cout << "Vector move\n";
    arr = obj.arr;
    size = obj.size;
    obj.size = 0;
    obj.arr = nullptr;
}
void Stek::pushIndex (int index, int a) {   // avelacnel nshvac indeksum element
    int* temp;
    temp = arr;    
    size = size + 1;
    arr = new int [size];
    for(int i = 0; i < index; ++i){
        arr[i] = *(temp + i);
    }
    arr[index] = a;
    for(int i = index + 1; i < size; ++i){
        arr[i] = *(temp + i + 1);
    }
    delete [] temp;
}
void Stek::popIndex (int index) {   //jnjel nshvac indeksi elementy
    int* temp;
    temp = arr;
    size = size - 1;
    arr = new int [size];
    for(int i = 0; i < index; ++i){
        arr[i] = *(temp + i);
    }        
    for(int i = index; i < size; ++i){
        arr[i] = *(temp + i + 1);
    }
    delete [] temp;
}

