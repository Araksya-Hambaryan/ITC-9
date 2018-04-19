
#include <iostream> 
#include <cstring>

  class Vector {
    int size = 0;
    int value = 0;
    int sizePlusFive = 0;
    int sizeMinusFive = 0;
    int * arr = nullptr;
    public:
      void pop() { // pop the last element

        if (checkForEmptiness()) {
          return;
        } else if (!checkForMinusFive()) {
          arr[sizePlusFive - 1] = 0;
          --size;
          --sizePlusFive;
        } else {
          --sizePlusFive;
          replaceArr('-');
        }
      }
    bool checkForEmptiness() { // check if the size is 0

      if (0 >= size) {

        return true;
      } else {
        return false;
      }
    }
    void getArr() { // print the array
      if (!checkForEmptiness()) {
        for (int i = 0; i < size; i++) {
          std::cout << "Vector with element " << i << " is " << arr[i] << "." << std::endl;
        }
      } else {
        std::cout << "The vector is empty!" << std::endl;
      }
    }
    void getSize() { // print the size of the array
      std::cout << "Size is " << size << "." << std::endl;
    }
    void push(int value) { // add one element tp the array
      if (checkForFulness()) {
        replaceArr('+');
      }
      arr[size++] = value;
    }

    void replaceArr(char c) { // copying the old array into a new one, which is either larger or smaller by 5 elements 
      if ('+' == c) {
        this -> sizePlusFive = this -> size + 5;
        int * tempArray = new int[sizePlusFive];
        memcpy(tempArray, arr, sizePlusFive * sizeof(int));
        delete[] arr;
        arr = tempArray;
      } else {
        this -> sizeMinusFive = this -> size - 5;

        int * tempArray = new int[sizeMinusFive];

        memcpy(tempArray, arr, sizeMinusFive * sizeof(int));
        delete[] arr;
        arr = tempArray;
      }

    }

    bool checkForFulness() { // chech if we've pushed an element 5 times in a row
      if (size < sizePlusFive) {
        return false;
      } else {
        return true;
      }
    }

    bool checkForMinusFive() { // chech if we've popped an element 5 times in a row
      if (size == sizeMinusFive) {
        return true;
      } else {
        return false;
      }
    }

    Vector() { // default constructor
      arr = new int[sizePlusFive];
      size = 0;
      value = 0;
    }
    Vector(int size, int value) {
      std::cout << "Inside parameterized constructor." << std::endl;
      this -> size = size;
      this -> value = value;
      this -> sizePlusFive = size + 5;
      this -> sizeMinusFive = size - 5;
      arr = new int[sizePlusFive];
      for (int i = 0; i < size; i++) {
        arr[i] = value;
      }

    }
    Vector(const Vector & v) {
      std::cout << "Inside copy constructor." << std::endl;
      this -> size = v.size;
      this -> value = v.value;
      this -> sizePlusFive = this -> size + 5;
      this -> sizeMinusFive = size - 5;
      arr = new int[sizePlusFive];
      for (int i = 0; i < size; i++) {
        arr[i] = v.arr[i];
      }
    }
    Vector(Vector && v) {
      std::cout << "Inside move constructor." << std::endl;
      this -> size = v.size;
      this -> value = v.value;
      this -> sizePlusFive = this -> size + 5;
      this -> sizeMinusFive = size - 5;
      this -> arr = v.arr;
      v.arr = nullptr;
    }
    ~Vector() {
      delete[] arr;
      arr = nullptr;
      std::cout << "Destructor is called." << std::endl;
    }
  };

bool inputSizeValueOK(int & size, int & value) { //Input values and check if they are OK
  std::cout << "Input size please: ";
  std::cin >> size;
  if (std::cin.fail() || size < 0) {
    return false;
  }
  std::cout << "Input value please: ";
  std::cin >> value;
  if (std::cin.fail()) {
    return false;
  }
  return true;
}

int main() {
  int size = 0;
  int value = 0;
  std::cout << "Vector 1" << std::endl;
  if (inputSizeValueOK(size, value)) {
  Vector vec1(size, value);
  vec1.push(1);
  vec1.push(1);
  vec1.push(1);
  vec1.push(1);
  vec1.push(1);
  vec1.push(1);
  vec1.pop();
  vec1.pop();

  vec1.getArr();
  vec1.getSize();
  std::cout << "Vector 2" << std::endl;
  Vector vec2(vec1);

  vec2.getArr();
  vec2.getSize();
  std::cout << "Vector 3" << std::endl;
  Vector vec3(std::move(vec1));
  vec3.getArr();
  vec3.getSize();
  } else {
    std::cout << "Sorry,wrong input!" << std::endl;
  }

  return 0;
}