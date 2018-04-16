#include <iostream>

struct Rect {
public:
    Rect();
    Rect(int, int);
    int area();
    void out();
private:
    int m_wight;
    int m_hight;
};
Rect::Rect() : m_wight(0)
             , m_hight(0) {};
Rect::Rect(int wight, int hight) : m_wight(wight)
                                 , m_hight(hight) {}; 
int Rect::area() {
    return m_wight * m_hight;
};
void Rect::out() {
    std::cout << "Rect :(" << m_hight << ", " << m_wight << ") ";
};

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
        if (leftPart[indexOfLeftPart].area() <= rigthPart[indexOfRigthPart].area()) {
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

void validNumber(int& number) {
    while (std::cin.fail()) {
        std::cout << "Invalid Value: Try again!" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Please enter the intager number: ";
        std::cin>> number;
    }
}


int main() {
    int wight1 = 0;
    int hight1 = 0;
    int wight2 = 0;
    int hight2 = 0;
    int wight3 = 0;
    int hight3 = 0;
    int wight4 = 0;
    int hight4 = 0;
    std::cout << "enter wight1, hight1   != 0" << std::endl;
    std::cin >> wight1;
    validNumber(wight1);
    std::cin >> hight1;
    validNumber(hight1);
    std::cout << "enter wight2, hight2   != 0" << std::endl;
    std::cin >> wight2;
    validNumber(wight2);
    std::cin >> hight2;
    validNumber(hight2);
    std::cout << "enter wight3, hight3   != 0" << std::endl;
    std::cin >> wight3;
    validNumber(wight3);
    std::cin >> hight3;
    validNumber(hight3);
    std::cout << "enter wight4, hight4   != 0" << std::endl;
    std::cin >> wight4;
    validNumber(wight4);
    std::cin >> hight4;
    validNumber(hight4);
    Rect arr1(wight1, hight1);
    Rect arr2(wight2, hight2);
    Rect arr3(wight3, hight3);
    Rect arr4(wight4, hight4);
    Rect arr[4] = {arr1, arr2, arr3, arr4};
    mergeSort(arr, 0, 3);
    for(int i = 0; i < 4; ++i) {
        arr[i].out();
    }
    std::cout << std::endl;
    return 0; 
}

















          
