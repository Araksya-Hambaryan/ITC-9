
#include <iostream>
  class Vector {
    private:
      int * arr;
    int len;
    public:
      Vector() {
        arr = NULL;
        len = 3;
      }
    Vector(int size) {
      arr = (int * ) malloc(size * sizeof(int));
      len = size;
    }~Vector() {
      if (arr != NULL) {
        free(arr);
      }
    }
    void push(int value) {
      ++len;
      arr = (int * ) realloc(arr, len * sizeof(int));
      arr[len - 1] = value;
    }
    int get(int i) {
      return arr[i];
    }
    bool set(int i, int value) {
      if (i >= len) {
        return false;
      }
      arr[i] = value;
      return true;
    }
    bool pop() {
      if (0 == len) {
        return false;
      }
      --len;
      arr = (int * ) realloc(arr, len * sizeof(int));
    }
    int length() {
      return len;
    }
  };

int main() {
  Vector vector;
  vector.push(1);
  vector.push(2);
  vector.push(3);
  vector.push(4);
  vector.push(5);
  vector.push(6);
  std::cout << "Vector length is_" << vector.length() << std::endl;
  std::cout << "Vector is" << std::endl;
  for (int i = 0; i < vector.length(); ++i) {
    std::cout << vector.get(i) << " ";
  }
  for (int i = 0; i < 3; ++i) {
    vector.pop();
  }
  std::cout << "\nAfter pop() Vector is" << std::endl;
  for (int i = 0; i < vector.length(); ++i) {
    std::cout << vector.get(i) << " ";
  }
  std::cout << "\nVector(4) is_" << vector.get(4);
  std::cout << "\nAfter push() Vector is" << std::endl;
  for (int i = 0; i < 16; i++) {
    vector.push(rand() % 30 + 1);
  }
  for (int i = 0; i < vector.length(); ++i) {
    std::cout << vector.get(i) << " ";
  }
  std::cout << "\n& Vector length is_" << vector.length() << std::endl;
  return 0;
}
