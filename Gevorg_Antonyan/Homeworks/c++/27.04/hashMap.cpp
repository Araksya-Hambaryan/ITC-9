#include <iostream>
#include <list>

class hMap {
private:
    std::list<int> arr[4];
public:
    int hash(int);
    void add(int);
    void del(int);
    void printPos(int);
    void printMap();
};


int hMap::hash(int num) {
    if (0 <= num && 9 >= num) {
        return 0;
    }
    if (10 <= num && 99 >= num) {
        return 1;
    }
    if (100 <= num && 999 >= num) {
        return 2;
    } else {
        return 3;
    }
}

void hMap::add(int num) {
    arr[hash(num)].push_back(num);
}

void hMap::del(int num) {
    arr[hash(num)].remove(num);
}

void hMap::printPos(int pos) {
    std::cout << "position " << pos << std::endl;
    if (4 <= pos) {
        std::cout << "is not a position" << std::endl;
    } else {
        for (std::list<int>::iterator it = arr[pos].begin(); it != arr[pos].end(); ++it) {
            std::cout << *it << "  ";
        }
        std::cout << std::endl;
    }
}

void hMap::printMap() {
    std::cout << "map is" << std::endl;
    for(int i = 0; i < 4; ++i) {
        printPos(i);
    }
}

int main() {
    hMap map;
    std::cout << "enter your number" << std::endl;
    int num = 0;
    do {
        std::cin >> num;
        map.add(num);
    } while (0 != num);
    map.printMap();
    map.printPos(1);
    return 0;
}
