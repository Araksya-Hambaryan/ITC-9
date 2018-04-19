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

int main () {
    std::cout<<"\nAdded class 'Vect' \n";
    std::cout<<"\nAdded myVector 8 elements, (myVector is object Vect)\n";
    Vect myVector(8);   
    std::cout<<"myVector size is "<< myVector.getSize() <<"\n";
    std::cout<<"myVector elements  ";
    for(int i = 0; i < myVector.getSize(); ++i) {
        std::cout<<myVector.getElement(i)<<" ";
    }

    std::cout<<"\n\nSet elements in myVector\nmyVector[3] set - 15\nmyVector[4] set - 16\n";
    myVector.setElement(3,15);
    myVector.setElement(4,16);
    std::cout<<"myVector elements  ";
    for(int i = 0; i < myVector.getSize(); ++i) {
        std::cout<<myVector.getElement(i)<<" ";
    }
    
    std::cout<<"\n\nAded myVector2 - copy myVector\n";   
    Vect myVector2 = myVector;
    std::cout<<"myVector2 size is "<< myVector2.getSize() <<"\n";
    std::cout<<"myVector2 elements  ";
    for(int i = 0; i < myVector2.getSize(); ++i) {
        std::cout<<myVector2.getElement(i)<<" ";
    }
    std::cout<<"\n\n";

    std::cout<<"Push element '5' and '17' in  in myVector back\n";
    myVector.pushBack(5);
    myVector.pushBack(17);
    std::cout<<"New size is "<< myVector.getSize() <<"\n";
    std::cout<<"myVector elements  ";
    for(int i = 0; i < myVector.getSize(); ++i) {
        std::cout<<myVector.getElement(i)<<" ";
    }
    std::cout<<"\n"; 
    
    std::cout<<"\n\nPush element '88' and '45' in  in myVector front\n";
    myVector.pushFront(88);
    myVector.pushFront(45);
    std::cout<<"New siz is "<< myVector.getSize() <<"\n";
    std::cout<<"myVector elements    ";
    for(int i = 0; i < myVector.getSize(); ++i) {
        std::cout<< myVector.getElement(i) <<" ";
    }
    std::cout<<"\n";
 
    std::cout<<"\n\nInsert element '222' in index 5";
    myVector.pushIndex(5,222);
    std::cout<<"\nNew size is "<< myVector.getSize() <<"\n";
    std::cout<<"myVector elements    ";
    for(int i = 0; i < myVector.getSize(); ++i) {
        std::cout<< myVector.getElement(i) <<" ";
    }
    std::cout<<"\n";

    std::cout<<"\n\nDelete element from index 1";
    myVector.popIndex(1);
    std::cout<<"\nNew size is "<< myVector.getSize() <<"\n";
    std::cout<<"myVector elements    ";
    for(int i = 0; i < myVector.getSize(); ++i) {
        std::cout<< myVector.getElement(i) <<" ";
    }
    std::cout<<"\n";

    std::cout<<"\n\ndeleted last element in myVector\n";
    myVector.popBack();
    std::cout<<"New siz is "<< myVector.getSize() <<"\n";
    std::cout<<"myVector elements    ";
    for(int i = 0; i < myVector.getSize(); ++i) {
        std::cout<< myVector.getElement(i) <<" ";
    }
    std::cout<<"\n";


    std::cout<<"\n\ndeleted first element in myVector\n";
    myVector.popFront();
    std::cout<<"New siz is "<< myVector.getSize() <<"\n";
    std::cout<<"myVector elements    ";
    for(int i = 0; i < myVector.getSize(); ++i) {
        std::cout<< myVector.getElement(i) <<" ";
    }
    std::cout<<"\n";

    std::cout<<"\nDelete myVector\n";
    myVector.deleteVector();
    std::cout<<"\n";

    std::cout<<"myVector2 size is "<< myVector2.getSize() <<"\n";
    std::cout<<"myVector2 elements  ";
    for(int i = 0; i < myVector2.getSize(); ++i) {
        std::cout<< myVector2.getElement(i) <<" ";
    }
    std::cout<<"\n\n";
    return 0;
}
