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
		void push(int x);
		void pop();
		int obsize();
		int get(int i);
		void array();

};

Vector::Vector(){
	size = 0;
	arr = 0; 
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

void Vector::push(int x){
	int* temp = arr;
	arr = new int[size + 1];
	for(int i = 0;i < size;++i){
		arr[i] = temp[i];
	}
	arr[size] = x;
	++size;
}

void Vector::pop(){
	int* temp = arr;
	arr = new int[size - 1];
	for(int i = 0;i < size - 1;++i){
		arr[i] = temp[i];
	}
	--size;
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

int main(){
	Vector vec(8,2);           // parametrov constructor
	Vector vec1(vec);        //copy constructor
	Vector vec2 = Vector();  //default constructor

	std::cout <<"parametrakan constructrov skzbarjeqavorvac obyekt" << std::endl;
	std::cout << "zangvaci chap -"<< vec.obsize() << std::endl << " zangvaci parunakutyun -";  
	vec.array();

	std::cout << std::endl <<"copy constructrov skbnarjeqavorvac obyekt" << std::endl;
	std::cout << "zangvaci chap -" << vec1.obsize() << std::endl << "zangvaci parunakutyun-";  
	vec1.array();

	std::cout << std::endl << "default constructrov skbnarjeqavorvac obyekt" << std::endl;
	std::cout << "zangvaci chap-" << vec2.obsize()  << std::endl;

	std::cout << " push() funkciayi kirarum,avelacnel verjic 5" << std::endl;
	vec.push( 5);
	std::cout << "chap -" << vec.obsize() << std::endl << "zangvaci parunakutyun -" ;
	vec.array();
	std::cout << std::endl;

	std::cout << " pop() funkciayi kirarum,jnjel verjinn" << std::endl;
	vec1.pop();
	std::cout << "chap -" << vec1.obsize() << std::endl << "zangvaci parunakutyun"; 
	vec1.array();

	std::cout << std::endl << "get() funkciayi kirarum,tpel push araci 8rd elementn" ;
	std::cout << std::endl << vec.get(8) << std::endl;
     //	vec.~Vector();
     //	vec1.~Vector();
// ????? destructor kanchum em lriv ashxatuma bayc verjum  erroa talis
	return 0;
}

