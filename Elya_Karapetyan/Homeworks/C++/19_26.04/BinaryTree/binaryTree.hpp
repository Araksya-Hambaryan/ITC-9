#ifndef BINARY_TREE_HPP
#define BINARY_TREE_HPP

#include <iostream>
#include <math.h>
class BinaryTree {
public:
    BinaryTree();
    BinaryTree(const BinaryTree& object);
    ~BinaryTree();
    bool isEmpty() const;
    bool find(const int value);
    void travers() const;
    void sortedInsert(const int value);
    void balansedInsert(const int value);
    void remove(const int value);
private:
    struct Node {
       int m_value;
       Node* m_left;
       Node* m_right;
       Node(int value) : m_value(value)
                       , m_left(nullptr)
                       , m_right(nullptr) {};
    };
    Node* m_root; 
    Node* copyNode(const Node* object);
    int height(Node* start) const;
    bool isBalansed(Node* node) const;
    bool findNode(const Node* root, const int value);
    void traversNode(const Node* start) const;
    Node* sortedInsertNode(Node* root, Node* newNode);
    Node* balansedInsertNode(Node* root, Node* newNode);
    Node* minValue(Node* root);
    Node* removeNode(Node* root, const int value);
    void clear(Node* root);
};

#endif

