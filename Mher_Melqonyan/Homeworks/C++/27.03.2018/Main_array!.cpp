#include <iostream>
#include <stdio.h>
int maxEl1;
int arr[10];

int array(int *arr, int N){
  for(int i = 0; i < N; ++i) {
      std::cout << "array[" << i + 1 << "]" << ": ";
      std::cin >> arr[i];
  }
  return arr[N];
}

int maxim(int *arr, int N) {
  int maxEl;
  maxEl = arr[0];
  for(int i = 1; i < N; ++i) {
      if(maxEl < arr[i]) {
	  maxEl = arr[i];
      }
  }
  maxEl1 = maxEl;
  return maxEl1;
}

int print(int *arr, int N, int max) {
  std::cout << "max=" << max << std::endl;
  std::cout << "array=[";
  for(int i = 0; i < N; ++i) {
      std::cout << arr[i] << ", ";
  }
  std::cout << "]";
  return 0;
}

#define mutq_anel_zangvac array(arr, 10);
#define hashvel_max_arjeq  maxim(arr, 10);
#define tpel print(arr, 10, maxEl1);

int main() {
  mutq_anel_zangvac
  hashvel_max_arjeq
  tpel 
  return 0;
}
