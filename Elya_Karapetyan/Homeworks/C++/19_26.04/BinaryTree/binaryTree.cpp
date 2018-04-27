#include "binaryTree.hpp"

BinaryTree::BinaryTree() : m_root(nullptr) { }

BinaryTree::BinaryTree(const BinaryTree& object) {
    m_root = copyNode(object.m_root);  
}

BinaryTree::Node* BinaryTree::copyNode(const Node* object) {
    if (nullptr == object) {
        return nullptr;
    } 
    Node* newNode = new Node(object->m_value);
	newNode->m_left = copyNode(object->m_left);
	newNode->m_right = copyNode(object->m_right);

	return newNode;
}

BinaryTree::~BinaryTree() {
    remove(m_root);
}

int BinaryTree::height(const Node* start) const {
    if (nullptr == start) {
        return 0;    
    } else {
        return (height(start->m_left) > height(start->m_right) ? height(start->m_left) + 1 : height(start->m_right) + 1);
    }
}

int BinaryTree::getHeight() const {
    return height(m_root);
}

void BinaryTree::sortInsert(const int value) {
    Node* newNode = new Node(value);
    m_root = sortedInsert(m_root, newNode);
}

void BinaryTree::balInsert(const int value) {
    Node* newNode = new Node(value);
    m_root = balansedInser(m_root, newNode);
}

BinaryTree::Node* BinaryTree::sortedInsert(Node* root, Node* newNode) {
    if (root == nullptr) {
        return newNode;
    }
    if (root->m_value > newNode->m_value) {   
        root->m_left = sortedInsert(root->m_left, newNode);
    }
    else {
        root->m_right = sortedInsert(root->m_right, newNode);
    }
    return root;
}

BinaryTree::Node* BinaryTree::balansedInser(Node* root, Node* newNode) {
    if (root == nullptr) {
        return newNode;
    } 
	int heightLeft = height(root->m_left);
    int heightRight =  height(root->m_right);
    if ((heightRight >= heightLeft) && 
        ((1 == (heightRight - heightLeft)) ||
         (0 == (heightRight - heightLeft)))) {
        root->m_left = balansedInser(root->m_left, newNode);
    } else {
        root->m_right = balansedInser(root->m_right, newNode);          
    }
    return root;
}

void BinaryTree::travers(const Node* start) const {
    if (start == nullptr)
        return;
    std::cout << start->m_value << std::endl;
    travers(start->m_left);
    travers(start->m_right);
}

void BinaryTree::travers() const {
    travers(m_root);
}
void BinaryTree::remove(Node* start) {
    if (nullptr == start)
        return;
    remove(start->m_left);
    remove(start->m_right);
    delete start;
}

bool BinaryTree::find(const Node* root, const int value) {
    if (nullptr == root) {
        return false;
    }
    if (value == root->m_value) {
        return true;
    }
    if (root->m_value > value) {
        find(root->m_left, value);
    } else {
        find(root->m_right, value);
    }
}

bool BinaryTree::findNode(const int value) {
    return find(m_root, value);
}
