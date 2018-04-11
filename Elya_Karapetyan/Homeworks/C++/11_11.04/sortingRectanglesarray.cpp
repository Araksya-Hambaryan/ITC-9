#include <iostream>

struct Rect {                  
public:                        
    Rect();                    
    Rect(int, int);            
    int getArea(); 
    void print() {
        std::cout << "rectangle { " << m_width << " , " << m_higth << " }" << "\tArea = " << getArea() << std::endl;
    }                                           
private:                       
    int m_width;               
    int m_higth;               
};                             
                               
Rect::Rect() : m_width(0)      
             , m_higth(0) {};            
                               

Rect::Rect(int width, int higth) : m_width(width)      
                                 , m_higth(higth) {};            

int Rect::getArea() {             
    return m_width * m_higth;  
};                    


void merge(Rect arr[], int left, int mid, int rigth) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 =  rigth - mid;
 
    Rect leftPart[n1];
    Rect rigthPart[n2];
 
    for (i = 0; i < n1; i++) {
        leftPart[i] = arr[left + i];
    }
    for (j = 0; j < n2; j++) {
        rigthPart[j] = arr[mid + 1+ j];
    }
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (leftPart[i].getArea() <= rigthPart[j].getArea()) {
            arr[k] = leftPart[i];
            i++;
        } else {
            arr[k] = rigthPart[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = leftPart[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = rigthPart[j];
        j++;
        k++;
    }
}
 
void mergeSort(Rect arr[], int left, int rigth) {
    if (left < rigth) {
        int mid = left + (rigth - left) / 2;
 
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, rigth);
 
        merge(arr, left, mid, rigth);
    }
}


int main() {
    Rect rects[5] = {{5,2}, {15,2}, {2,2}, {3,2}, {5, 4}};
     for (int i = 0; i < 5; ++i) {
          
         std::cout << i + 1 << " ";
         rects[i].print();
     }
     mergeSort(rects, 0, 4);
     std::cout << "\n\nRectangles after sorting\n\n";
     for (int i = 0; i < 5; ++i) {
          
         std::cout << i + 1 << " ";
         rects[i].print();
     }
}      
