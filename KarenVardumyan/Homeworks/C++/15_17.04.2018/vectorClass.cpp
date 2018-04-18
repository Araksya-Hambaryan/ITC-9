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
	Vect (int a) { //defolut constructor
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
	    this -> size = obj.getSize();
        }
        void deleteVector ( ){
	    std::cout<<"Vector is deleted\n";
            delete [] arr;
        }
	void pushElement (int a) {
           int tempArr [size];
           for(int i = 0; i < size; ++i){
               tempArr[i] = arr[i];
           }
	   delete [] arr;
           int tempSize = size;
           size = size + 1;
           arr = new int [size];
	   for(int i = 0; i < tempSize; ++i){
	   	arr[i] = tempArr[i];
           }
           arr[tempSize] = a;
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

    std::cout<<"Push element '5' and '17' in  in myVector\n";
    myVector.pushElement(5);
    myVector.pushElement(17);
    std::cout<<"New size is "<< myVector.getSize() <<"\n";
    std::cout<<"myVector elements  ";
    for(int i = 0; i < myVector.getSize(); ++i) {
        std::cout<<myVector.getElement(i)<<" ";
    }
    std::cout<<"\n"; 
    
    std::cout<<"\nDelete myVector\n";
    myVector.deleteVector();
    std::cout<<"\n";
    return 0;
}
