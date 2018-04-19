#include<iostream>

class Vect {
private:
    int* arr;   
    int size;
public:
    int getSize() {
	return size;
    }
    int getElement(int i){
        return *(arr + i);
    }
    void setElement(int i, int num){
	arr[i] = num;
    }
    Vect () { //defolut constructor
        arr = new int;
	*arr = 0;
        size = 0;
    }
    Vect (int a) {   //add vector 
	arr = new int [a];
	size = a;
        for(int i = 0; i < a; i++){
            arr[i] = 0;
        }
    }
    Vect (Vect& obj) { //copy constructor
	std::cout<<"Copy is done\n";
        this -> arr = new int [obj.size];
        for(int i = 0; i < obj.size; ++i) {
	    this -> arr[i] = obj.getElement(i);
	}
	this -> size = obj.size;
    }
    void deleteVector ( ){  //jnjel vector
	std::cout<<"Vector is deleted\n";
        delete [] arr;
    }
    void pushBack (int a) {     // avelacnel  verjic elementy
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
    void popBack () {     // jnjel verji elementy
        int* temp;        
        temp = arr;
        size = size - 1;
        arr = new int [size];
       	for(int i = 0; i < size; ++i){
            arr[i] = *(temp + i);
        }
        delete [] temp;
    }
    void pushFront (int a) {   //avelacnel dimacic element
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
    void popFront () {    //jnjel dimaci elementy
        int* temp;
	temp = arr;
        size = size - 1;
        arr = new int [size];
        for(int i = 0; i < size; ++i){
            arr[i] = *(temp + i + 1) ;
        }
	delete [] temp;
    }
    void pushIndex (int index, int a) {   // avelacnel nshvac indeksum element

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
    void popIndex (int index) {   //jnjel nshvac indeksi elementy
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
};


class Stek :  private  Vect {
private:
    int* arr;
    int size;
public:
    Stek () : Vect () {               //defoult constructor
	std::cout<<"Added Stek\n";
	size = 0;
	arr = new int;
	*arr = 0;
    }
    Stek (int a) : Vect (a) {         //aded stek counts of a elements
	arr = new int [a];
        for(int i = 0; i < a; i++){
            arr[i] = 0;
        }
    }   
    Stek (Stek& obj) : Vect(obj) {     //copy constructor

        std::cout<<"Copy Stek is done\n";
	this -> arr = new int [obj.size];
        for(int i = 0; i < obj.size; ++i) {
            this -> arr[i] = obj.getElement(i);
        }
        this -> size = obj.size;
    }
    void pushStek (int a) {     // avelacnel  verjic elementy
        std::cout<<"Push element in stek\n";
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
    void popStek () {     // jnjel verji elementy
	std::cout<<"Deleted last element in stek\n";
        int* temp;
        temp = arr;
        size = size - 1;
        arr = new int [size];
        for(int i = 0; i < size; ++i){
            arr[i] = *(temp + i);
        }
        delete [] temp;
    }
    void deleteStek () {
	std::cout<<"Stek is deleted\n";
	delete [] arr;
    }
};

int main () {
    Stek arr;
    arr.pushStek(5);
    arr.pushStek(7);
    arr.popStek(); 
    arr.deleteStek();
    return 0;
}
