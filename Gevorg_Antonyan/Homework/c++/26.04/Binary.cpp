#include <iostream>
#include <vector>

class Binary {
private:
    std::vector<int> vector;
public:
    int serch(Binary, int);
    void add(Binary, int);
    void remove(Binary, int);
    void printTree(Binary);
};    

int Binary::serch(Binary tree, int num) {
    int begin = 0;
    int end = tree.vector.size() - 1;
    if (num > tree.vector[end]) {
        std::cout << "number is not element of array: " << std::endl;
        return -end;
    }
    if (num == tree.vector[begin]) {
        std::cout << "number is a element of array: " << begin << std::endl;
        return begin;
    }
    if (num == tree.vector[end]) {
        std::cout << "number is a element of array: " << end << std::endl;
        return end;
    }
    if (num == tree.vector[(end - begin) / 2]) {
        std::cout << "number is a element of array: " << (end - begin) / 2 << std::endl;
        return (end - begin) / 2;
    }
    if (num < tree.vector[(end - begin) / 2]) {
        end = (end - begin) / 2;
        return serch(tree, num);
    } else {
        begin = begin + (end - begin) / 2;
        return serch(tree, num);
    }
}

void Binary::add(Binary tree, int num) {
    
    std::vector<int>::iterator it;
    it = tree.vector.begin() + abs(serch(tree, num));
    tree.vector.insert(it, num);
}

void Binary::remove(Binary tree, int num) {
    if (0 <= serch(tree, num)) {
        for (int i = serch(tree, num); i <= tree.vector.size(); ++i) {
            tree.vector[i] = tree.vector[i + 1];
        }
    }
}
 
void Binary::printTree(Binary tree) {
    for (int i = 0; i < tree.vector.size(); ++i) {
        std::cout << tree.vector[i] << "  ";
    }
    std::cout << std::endl;
}


int main() {
    return 0;
}





   
