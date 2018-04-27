#ifndef TREE_HPP
#define TREE_HPP


class BBTree{
    private:
    struct Node {
        int value;
        Node* left;
        Node* right;
        Node() : left(nullptr), right(nullptr) {};

    };
    
    int size;
    Node* root;
    public:
    BBTree();
    BBTree(BBTree& tree);
    BBTree(BBTree&& tree);
    ~BBTree();
    void insert(int value, Node* head);
    void remove(int value);
    int getSize();
    void printBBTree();
};

#endif

