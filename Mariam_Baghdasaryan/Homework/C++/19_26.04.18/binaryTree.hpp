#ifndef BINARYTREE_HPP
#define BINARYTREE_HPP

class BinaryTree {
private:
    struct Node {
        int mValue;
        Node* left;
        Node* right;
        Node(int value) {
            mValue = value;
            left = nullptr;
            right = nullptr;
        }
    };
    Node* root;
    void copyNode(Node*, Node*);
    void clearNode(Node*);
    bool isEmpty();
    int maxDepth(Node*);
    int minDepth(Node*);
    bool isBalanced(Node*);
    Node* leftRotate(Node*);
    Node* doubleLeftRotate(Node*);
    Node* rightRotate(Node*);
    Node* doubleRightRotate(Node*);
    Node* insertNode(int, Node*);
    bool findNode(int, Node*);
    void printTree(Node*);
public:
    BinaryTree();
    BinaryTree(const BinaryTree&);
    ~BinaryTree();
    void insert(int);
    void remove(int);
    bool find(int);
    void print(); 
};

#endif
