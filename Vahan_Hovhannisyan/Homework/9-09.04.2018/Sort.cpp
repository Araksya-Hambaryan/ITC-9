
#include <iostream>

  void swap(int * a, int * b) {
    int temp = * a;
    * a = * b;
    * b = temp;
  }

// A function to implement bubble sort
int * bubbleSort(int * arr, int size, void sort(int & , int & )) {
  int newArr[size];
  int * adNewArr = & newArr[0];
  for (int i = 0; i < size; i++) {
    newArr[i] = arr[i];
  }

  for (int i = 0; i < size - 1; i++) {

    // Last i elements are already in place   
    for (int j = 0; j < size - i - 1; j++) {
      sort(newArr[j], newArr[j + 1]);
    }
  }

  return adNewArr;
}

void ascendingOrder(int & ary1, int & ary2) {

  if (ary1 > ary2) {
    swap( & ary1, & ary2);
  }
}
void descendingOrder(int & ary1, int & ary2) {

  if (ary1 < ary2) {
    swap( & ary1, & ary2);
  }
}

/* Function to print an array */
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    std::cout << arr[i] << " ";
}

int main() {
  int * address;
  int size = 0;
  std::cout << "A function to sort an array. \n";
  std::cout << "Please input the size of array: ";
  std::cin >> size;
  int arr[size];
  std::cout << "Please input the elements of array: \n";
  for (int i = 0; i < size; i++) {
    std::cout << "The " << i << " element: ";
    std::cin >> arr[i];
  }

  std::cout << "Please input a for ascending order or d for descending order: ";
  char sort = 0;
  std::cin >> sort;
  if ((('a' == sort) || ('d' == sort)) && (0 < size)) {
    if ('a' == sort) {
      address = bubbleSort(arr, size, ascendingOrder);
    } else if ('d' == sort) {
      address = bubbleSort(arr, size, descendingOrder);
    }
    int newArray[size];
    for (int i = 0; i < size; i++) {
      newArray[i] = * address;
      ++address;
    }
    std::cout << "Sorted array: ";
    printArray(newArray, size);
  } else {
    std::cout << "Sorry,wrong input! \n";
  }
  return 0;
}
