#include <iostream>

struct Rect {
public:
    Rect();
    Rect(int, int, int);
    int area();
    int out();
private:
    int m_wight;
    int m_hight;
    int m_num;
};

Rect::Rect() : m_wight(0)
             , m_hight(0)
             , m_num(0) {};

Rect::Rect(int wight, int hight, int num) : m_wight(wight)
                                          , m_hight(hight) 
                                          , m_num(num){};

int Rect::area() {
    return m_wight * m_hight;
};
int Rect::out() {
    return m_num;
};

void sort(Rect* arr, int size) {
    Rect* p1;
    Rect* p2;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j].area() > arr[j + 1].area()) {
                p1 = &arr[j];
                p2 = &arr[j + 1];
                Rect tmp = *p1;
                *p1 = *p2;
                *p2 = tmp;
            }
        }
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
    std::cin >> wight1 >> hight1;
    std::cout << "enter wight2, hight2   != 0" << std::endl;
    std::cin >> wight2 >> hight2;
    std::cout << "enter wight3, hight3   != 0" << std::endl;
    std::cin >> wight3 >> hight3;
    std::cout << "enter wight4, hight4   != 0" << std::endl;
    std::cin >> wight4 >> hight4;
    Rect arr1(wight1, hight1, 1);
    Rect arr2(wight2, hight2, 2);
    Rect arr3(wight3, hight3, 3);
    Rect arr4(wight4, hight4, 4);
    Rect arr[4] = {arr1, arr2, arr3, arr4};
    sort(arr, 4);
    for(int i = 0; i < 4; ++i) {
        if(1 == arr[i].out()) {
            std::cout << "arr1(" << wight1 << "," << hight1 << ")," ;
        } else if(2 == arr[i].out()) {
            std::cout << "arr2(" << wight2 << "," << hight2 << ")," ;
        } else if(3 == arr[i].out()) {
            std::cout << "arr3(" << wight3 << "," << hight3 << ")," ;
        } else if(4 == arr[i].out()) {
            std::cout << "arr4(" << wight4 << "," << hight4 << ")," ;
        }
    }
    std::cout << std::endl;
    return 0; 
}

















          
