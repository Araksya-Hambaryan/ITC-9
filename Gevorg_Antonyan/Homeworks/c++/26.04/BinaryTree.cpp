#include <iostream>
#include <vector>

class BinaryTree {
private:
    BinaryTree* m_left;
    int m_value;
    BinaryTree* m_right;
    int rlevel = 0;
    int llevel = 0;
    BinaryTree* root;
    std::vector<int> arr;
public:
    BinaryTree();
    void add (int, BinaryTree*);
    void remove (int, BinaryTree*);
    int find (int, BinaryTree*);
//    int serch(std::vector, int , int , int)
};

BinaryTree::BinaryTree() {

    this->m_left = nullptr;
    this->m_value = 0; 
    this->m_right = nullptr;
    root = this;
}

void BinaryTree::add(int num, BinaryTree* node) {
    int level = 0;
    if (0 == rlevel, 0 == llevel) {
        this-m_value = num;
    } else {
        if (rlevel < llevel) {
         node = this->m_right;
        } else {
            node = this->m_left;
        }
        if (num < m_value) {
            if(m_left == nullptr) {
                BinaryTree* tmp = new BinaryTree;
                tmp->m_value = num;
                tmp->m_left = nullptr;
                tmp->m_right = nullptr;
                this->m_left = tmp;
                tmp = nullptr;
                if (rlevel < level) {
                    rlevel = level;
                }
            } else {
                node = this->m_left;
                ++level
                return add(num, node);
            }
        } else {
            if(m_right == nullptr) {
                BinaryTree* tmp = new BinaryTree;
                tmp->m_value = num;
                tmp->m_left = nullptr;
                tmp->m_right = nullptr;
                this->m_right = tmp;
                tmp = nullptr;
                if (rlevel < level) {
                   rlevel = level;
                }
            } else {
                node = this->m_right;
                ++level
                return add(num, node);
            }
        }
    }
    arr.pusg_back(num);
}    


int BinaryTree::find(int num, Binarytree* node) {
    if (node->m_value == num) {
        std::cout << "num is it " << num << std::endl;
        return m_value;
    }
    if (num < node->m_value) {
        if (node->m_left == nullptr) {
            std::cout << "num is not element in this tree  " << std::endl;
            return 0;
        }
        std::cout << "num in left" << std::endl;
        node = node->m_left;
        return find(num, node);
    } else {
        if (node->m_right == nullptr) {
            std::cout << "num is not element in this tree" << std::endl;
            return 0;
        }
        std::cout << "num in right" << std::endl;
        node = node->m_right;
        return find(num, node);
    }
}    

/*int serch(std::vector arr, int num, int begin, int end, BinaryTree* node) {
    if (num > arr[end]) {
        std::cout << "number is not element of array: " << std::endl;
        return 1;
    }
    if (num == arr[begin]) {
        std::cout << "number is a element of array: " << begin + 1 << std::endl;
        return 0;
    }
    if (num == arr[end]) {
        std::cout << "number is a element of array: " << end + 1 << std::endl;
        return 0;
    }
    if (num == arr[(end - begin) / 2]) {
        std::cout << "number is a element of array: " << (end - begin) / 2 + 1 << std::endl;
        return 0;
    }
    if ((1 == end - begin) || (0 == end - begin)) {
        std::cout << "number is not element of array" << std::endl;
        return 1;
    }
    if (num < arr[(end - begin) / 2]) {
        end = (end - begin) / 2;
        return serch(arr, num, begin, end);
    } else {
        begin = begin + (end - begin) / 2;
        return serch(arr, num, begin, end);
    }
}*/













