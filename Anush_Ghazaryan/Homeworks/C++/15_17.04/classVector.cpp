#include <iostream>

/* Vector class */
class Vector {
public:
    void insert(const int index, const int value);
    void push_back(int value);
    void erase(const int index);
    void pop_back();
    int size() const;
    void printVector() const;
    
    Vector();
    Vector(int size, int value);
    Vector(const Vector& object);
    Vector(Vector&& object);
    ~Vector();
private:
    int* array;
    int vsize;
};
 
/* Insert method */
void Vector::insert(const int index, const int value) {
    if (0 > index || vsize < index) {
        std::cout << "Invalid index!" << std::endl;
        return;
    }
    int* tmp = array;
    array = new int[++vsize];
    for (int i = 0; i < index; ++i) {
        array[i] = tmp[i];
    }
    array[index] = value;
    for (int i = index + 1; i < vsize; ++i) {
        array[i] = tmp[i - 1];
    }
    delete[] tmp;
}

/* Push_back method */
void Vector::push_back(const int value) {
    insert(vsize, value);
}                   
/* erase method */
void Vector::erase(const int index) {
    if (0 > index || vsize < index) {
        std::cout << "Invalid index!" << std::endl;
        return;
    }
    int* temp = array;
    array = new int[--vsize];
    for (int i = 0; i < vsize; ++i) {
        if (i < index) {
            array[i] = temp[i];
        } else {
            array[i] = temp[i + 1];
        }
    }
    delete[] temp;
}

/* pop method */
void Vector::pop_back() {
    erase(vsize - 1);
}

/* size method */
int Vector::size() const {
    return vsize;
}

/* method of printing the  Vector */
void Vector::printVector() const {
    std::cout << "\nVector : ";
    for (int i = 0; i < vsize; ++i) {
        std::cout << array[i] << " ";
    } 
    std::cout << "\n\n";
}
/* default constructor */
Vector::Vector() : array(nullptr) ,
           vsize(0) {};
/* parameterized constructor */
Vector::Vector(const int size, const int value) : vsize(size) {
    array = new int[size];
    for (int i = 0; i < vsize; ++i) {
        array[i] = value;
    }
}
/* copy constructor */
Vector::Vector(const Vector& object) {
    vsize = object.vsize;
    array = new int[vsize];
    for (int i = 0; i <vsize; ++i) {
        array[i] = object.array[i];
    }
    
}
/* move constructor */
Vector::Vector (Vector&& object) {
    array = object.array;
    vsize = object.vsize;
    object.vsize = 0;
    object.array = nullptr;
}
/* destructor */
Vector::~Vector() {
    delete[] array;
    array = nullptr;
}


void inputMethod(const int input, Vector& vector) {
    int index = 0;
    int value = 0;
    switch (input) {
        case 1 :  
            std::cout << "Enter the index: ";
            std::cin >> index;
            std::cout << "Enter the value: ";
            std::cin >> value;
            vector.insert(index, value);
            vector.printVector();
            break;
        case 2:      
            std::cout << "Enter the index: ";
            std::cin >> index;
            vector.erase(index);
            vector.printVector();
            break;
        case 3 : 
            vector.pop_back();
            vector.printVector();
            break;
        case 4 : 
            std::cout << "Size of the vector :  " << vector.size() << std::endl;
            break;
        default : 
            std::cout << "There is no such a method!" << std::endl;
            break;
    }
}

int main() {
    Vector vector;
    int input = 0;
    std::cout << "Push_back numbers in the Vector and press 0" << std::endl;
 
    bool flag = true; 
    do {

	std::cin >> input;
        if( input == 0 ) {
	    flag = false;
	}
        vector.push_back(input);

	} while(flag);

    vector.printVector(); 
    std::cout << "The Methods you can use : \n" << std::endl;
    std::cout << "1. insert\n2. erase\n3. pop_back\n4. size\n";
    std::cout << "\nChoose one of them  : ";
    std::cin >> input;
    inputMethod(input, vector);
    return 0;
}
