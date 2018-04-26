#ifndef TREE_HPP
#define TREE_HPP
// tree.cpp
class Tree {
    struct Node;
    public:
        Tree();
        Tree(const Tree& orig);
        Tree(Tree&& orig);
        ~Tree();
        void remove(int);
        void add(int);
        bool find(int);
        bool isEmpty();
        int height();
        void printTree();
    private:
        struct Node {
            int value;
            Node* left;
            Node* right;
            Node() : value(0), left(nullptr), right(nullptr) {};
        };
        Node* root;
        Node* sortAdd(Node* root, Node* newNode);
        void printTree(Node*);
        int height(Node*);
        bool find(Node*, int);
        Node* remove(Node*, int);
        int findMin(Node*);
        void clear(Node*);
        void copy(Node* root, Node* objRoot);
        Node* leftRotate(Node*);
        Node* rightRotate(Node*);
};

#endif
