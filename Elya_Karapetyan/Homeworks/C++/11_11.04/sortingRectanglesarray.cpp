#include <iostream>

struct Rect {                  
public:                        
    Rect();                    
    Rect(int, int);            
    int getArea(); 
    void print(); 
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

void Rect::print() {
    std::cout << "rectangle { " << m_width << " , " << m_higth 
              << " }" << "\tArea = " << getArea() << std::endl;
}

void merge(Rect arr[], int left, int mid, int rigth) {
    int leftPartSize = mid - left + 1;
    int rigthPartSize =  rigth - mid;
 
    Rect leftPart[leftPartSize];
    Rect rigthPart[rigthPartSize];
 
    for (int i = 0; i < leftPartSize; ++i) {
        leftPart[i] = arr[left + i];
    }
    for (int j = 0; j < rigthPartSize; ++j) {
        rigthPart[j] = arr[mid + 1+ j];
    }
    int indexOfLeftPart = 0;
    int indexOfRigthPart = 0;
    int index = left;
    while (indexOfLeftPart < leftPartSize && indexOfRigthPart < rigthPartSize) {
        if (leftPart[indexOfLeftPart].getArea() <= rigthPart[indexOfRigthPart].getArea()) {
            arr[index] = leftPart[indexOfLeftPart];
            ++indexOfLeftPart;
        } else {
            arr[index] = rigthPart[indexOfRigthPart];
            indexOfRigthPart++;
        }
        ++index;
    }
    while (indexOfLeftPart < leftPartSize) {
        arr[index] = leftPart[indexOfLeftPart];
        ++indexOfLeftPart;
        ++index;
    }
    while (indexOfRigthPart < rigthPartSize) {
        arr[index] = rigthPart[indexOfRigthPart];
        ++indexOfRigthPart;
        ++index;
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
    return 0;
}      
