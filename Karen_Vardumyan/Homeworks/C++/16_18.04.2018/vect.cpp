#include "vec.hpp"

int Vect::getSize() {
    return size;
}
int Vect::getElement(int i){
    return *(arr + i);
}
void Vect::setElement(int i, int num){
    arr[i] = num;
}
void Vect::pushBack (int a) {     // avelacnel  verjic elementy
    int* temp;
    temp = arr;
    size = size + 1;
    arr = new int [size];
    for(int i = 0; i < size - 1; ++i){
        arr[i] = *(temp + i);
    }
    arr[size - 1] = a;
    delete [] temp;
}
void Vect::popBack () {     // jnjel verji elementy
    int* temp;        
    temp = arr;
    size = size - 1;
    arr = new int [size];
    for(int i = 0; i < size; ++i){
        arr[i] = *(temp + i);
    }
    delete [] temp;
}
void Vect::pushFront (int a) {   //avelacnel dimacic element
    int* temp;
    temp = arr;               
    size = size + 1;
    arr = new int [size];
    arr[0] = a;
    for(int i = 0; i < size - 1; ++i){
        arr[i + 1] = *(temp + i);
    }
    delete [] temp;
}
void Vect::popFront () {    //jnjel dimaci elementy
    int* temp;
    temp = arr;
    size = size - 1;
    arr = new int [size];
    for(int i = 0; i < size; ++i){
        arr[i] = *(temp + i + 1) ;
    }
    delete [] temp;
}
void Vect::pushIndex (int index, int a) {   // avelacnel nshvac indeksum element
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
void Vect::popIndex (int index) {   //jnjel nshvac indeksi elementy
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
Vect::Vect () { //defolut constructor
    std::cout<<"Defoult constructor is colde\n";
    *arr = nullptr;
    size = 0;
}
Vect::Vect (int a) {   //add vector 
    arr = new int [a];
    size = a;
    for(int i = 0; i < a; i++){
        arr[i] = 0;
    }
}
Vect::Vect (Vect& obj) { //copy constructor
    std::cout<<"Copy is done\n";
    this -> arr = new int [obj.size];
    for(int i = 0; i < obj.size; ++i) {
	this -> arr[i] = obj.getElement(i);
    }
    this -> size = obj.size;
}
Vect::~Vect () {
    std::cout << "Vector destructor\n";
    delete [] arr;
    arr = nullptr;
}
Vect::Vect (Vect&& obj) {
    std::cout << "Vector move\n";
    arr = obj.arr;
    size = obj.size;
    obj.size = 0;
    obj.arr = nullptr;
}
