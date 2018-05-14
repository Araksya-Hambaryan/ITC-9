#ifndef BINARYTREE_H
#define BINARYTREE_H

class BinaryTree {
public:
    BinaryTree();
    BinaryTree(const BinaryTree& orig);
    ~BinaryTree();
    void insert(int value);
    void print();
    bool find(int value);
    void remove(int value);
private:
    struct node {
        int data;
        node* left;
        node* right;
        node(int value) 
            :data (value),
             left(nullptr),
             right(nullptr)
        { };
    };
    node* root;   
    node* copyTree(node* other);
    node* sortedInsert(node* root, node* newNode);
    void print(node* start);
    bool find(node* root, int value);
    void remove(node* start);
};


#endif

