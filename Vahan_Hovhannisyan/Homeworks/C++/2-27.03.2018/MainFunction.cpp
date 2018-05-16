#include <iostream>
#define Input_Array \
int arr [5]; \
int element = 0; \
cout<<"Input a five-element array please: " << endl;  \
for (int i = 0; i < 5; i++) {\
    cout<<"The " << i + 1 << " element: ";    \
    cin >> element;\
    arr[i] = element; \
}

#define Find_Max_Element \
int Max = arr[0]; \
for (int i = 1;i < 5; i++) \
{ \
    if (arr[i] >=Max) { \
    Max = arr[i]; \
    }\
} 
#define Type_Max \
    cout<< "The largest element is: " << Max;   \
    
using namespace std;

int main() {
    Input_Array
    Find_Max_Element
    Type_Max
    return 0;
}