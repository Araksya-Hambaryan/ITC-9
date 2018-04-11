#include <iostream>
  int fMax(int a, int b) {
    int k;
    if(a < b) {
      return b;
    }
    return a;
  }
int fMin(int a, int b) {
  if(a > b) {
    a = b;
  }
  return a;
}
int sortFun(int arr[], int num, int foo(int a, int b)) {
  int mem;
  int arr1[num];
  int mem1;
  for (int i = 0; i < num; ++i) {
    for (int j = i + 1; j < num; ++j) {
      mem = foo(arr[i], arr[j]);
      if(mem == arr[i]) {
        mem1 = arr[j];
        arr[j] = arr[i];
        arr[i] = mem1;
      }

    }

  }
  for(int i = 0; i < num; ++i) {
    std::cout << arr[i] << " ";
  }
  return 0;
}
int main() {
  int num;
  std::cout << "nermuceq zangvaci erkarutyun@: ";
  std::cin >> num;
  if(num > 1) {
    int * arr = new int[num];
    for(int i = 0; i < num; i++) {
      int par;
      std::cout << "array[ " << i << " ] = ";
      std::cin >> par;
      arr[i] = par;
    }
    for(int i = 0; i < num; ++i) {
      std::cout << arr[i] << " ";
    }
    int choose;
    std::cout << "\n" << "1. achman kargov      2. nvazman kargov\n";
    std::cin >> choose;
    if(1 == choose) {
      int( * foo)(int, int);
      foo = & fMax;
      sortFun(arr, num, foo);
    } else {
      int( * foo)(int, int);
      foo = & fMin;
      sortFun(arr, num, foo);

    }
    delete[] arr;
  } else {
    std::cout << "\n" << "nermuceq bnakan tiv";
  }
  return 0;
}
