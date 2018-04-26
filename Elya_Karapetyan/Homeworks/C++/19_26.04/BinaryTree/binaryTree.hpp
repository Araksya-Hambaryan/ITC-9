#ifndef BINARY_TREE_HPP
#define BINARY_TREE_HPP

#include <iostream>

class BinaryTree {
public:
    BinaryTree();
    BinaryTree(const BinaryTree& object);
    ~BinaryTree();
    bool isEmpty() const;
    struct Node {
        int m_value;
        Node* m_left;
        Node* m_right;
        Node(int value) : m_value(value)
                        , m_left(nullptr)
                        , m_right(nullptr) {};
    };
    int getHeight() const;
    void sortInsert(const int value);
    void balInsert(const int value);
    // print binary tree
    void travers() const;
    bool findNode(const int value);
private:
   Node* m_root; 
   Node* copyNode(const Node* object);
   Node* sortedInsert(Node* root, Node* newNode);
   Node* balansedInser(Node* root, Node* newNode);
   // print a Node binary tree
   void travers(const Node* start) const;
   int height(const Node* start) const;
   bool find(const Node* root, const int value);
   void remove(Node*);
};

#endif

