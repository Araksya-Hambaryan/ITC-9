#include <iostream>
#include <cstring>
class Vector{
	private:
		int size;
		int* arr;
	public:
		Vector();
		Vector(int n,int a);
		Vector(Vector& v);
		Vector(Vector&& b);
		~Vector();
		void pushBack(int x);
		void popBack();
		void insert(int i,int x);
		void erase(int i);
		void pushFront(int x);
		void popFront();
		int obsize();
		int get(int i);
		void array();

};

Vector::Vector(){
        size = 5;
        arr = new int [size];
        for(int i = 0; i <= size; ++i ){
                arr[i] = 0;
        }

}
Vector::Vector(int n,int a){
	size = n;
	arr = new int [size];
	for(int i = 0; i <= size; ++i ){
		arr[i] = a;
	}
}

Vector::Vector(Vector& v){
	this->size = v.size;
	this->arr = new int[this->size];
	std::memcpy(this->arr, v.arr, this->size*sizeof(int));
}

Vector::Vector(Vector&& v){

	this->size = v.size;
	this->arr = v.arr;
	v.arr = 0;
}

Vector::~Vector(){

	delete[] this->arr;
}

int Vector::obsize(){
	return size;
}

void Vector::pushBack(int x){
	int* temp = arr;
	arr = new int[++size];
	for(int i = 0;i < size;++i){
		arr[i] = temp[i];
	}
	arr[size] = x;

	delete [] temp;
}

void Vector::popBack(){
	int* temp = arr;
	arr = new int[--size];
	for(int i = 0;i < size - 1;++i){
		arr[i] = temp[i];
	}

	delete [] temp;
}

void Vector::insert(int i,int x){


	int* temp = this->arr;  
	this->arr = new int[++this->size]; 
	for(int k = 0; k < i; ++k){
		this->arr[k] = temp[k];
	}

	this->arr[i] = x; 

	for(int k = i + 1; k < this->size; ++k){
		this->arr[k] = temp[k - 1];
	}

	delete [] temp;
}

void Vector::erase(int i){


	int* temp = this->arr;
	this->arr = new int[--this->size];
	for (int k = 0; k < this->size; ++k) {
		if (k < i) {
			this->arr[k] = temp[k];
		} else {
			this->arr[k] = temp[k + 1];
		}
	} 

	delete [] temp;
}

void Vector::pushFront(int x){

	insert(0,x);
}

void Vector::popFront(){

	erase(0);
}

int Vector::get(int i){

	if (i < 0 || i >= size) {
		std::cout << "Error: Invalid index." << std::endl;
		return '\0';
	}
	return arr[i];
}

void Vector::array(){

	for (int i = 0; i < size; ++i){
		std::cout << arr[i] << " ";
	}
}

class Stack:private Vector{
	public:
		void push(int x){

			pushBack(x);

		};
		void pop(){
			popBack();
		};
		void printArray(){
			array();
		};
};


int main(){
	Vector vec(8,2);           // parametrov constructor
	std::cout << "zangvaci chap -"<< vec.obsize() << std::endl << " zangvaci parunakutyun -";
	vec.array();
	std::cout << std::endl << " 4 indexum avelacnel 6" << std::endl; 
	vec.insert(4,6);
	vec.array();

	std::cout << std::endl << "jnjel 4rd indexinn" << std::endl;
	vec.erase(4);
	vec.array();

	std::cout << std::endl << "jnjel 0rd indexinn" << std::endl;
	vec.popFront();
	vec.array();

	std::cout << std::endl << "avelacnel 0 rd indexinn" << std::endl;
	vec.pushFront( 3);
	vec.array();

	std::cout << std::endl <<  "Stack classi lrutyan constructrov skzbnarjaqavorvac" << std::endl;
	Stack s;
	s.printArray();
	std::cout << std::endl << "push enq anum 8"  << std::endl;
	s.push(8);
	s.printArray();
// push chi anum errora talis
	return 0;

}
