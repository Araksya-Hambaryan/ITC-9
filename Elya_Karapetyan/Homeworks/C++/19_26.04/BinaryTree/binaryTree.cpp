#include "binaryTree.hpp"

BinaryTree::BinaryTree() : m_root(nullptr) { }

BinaryTree::BinaryTree(const BinaryTree& object) {
    m_root = copyNode(object.m_root);  
}

BinaryTree::~BinaryTree() {
    clear(m_root);
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
int BinaryTree::height(Node* node) const {
    if (nullptr == node) {
        return 0;    
    } 
    int heightOfLeft = height(node->m_left);
    int heightOfRight = height(node->m_right);
    if ( (-1 == heightOfLeft || -1 == heightOfRight) || 
         (1 < abs(heightOfLeft - heightOfRight)) ) {
        return -1;
    }
    if (heightOfLeft > heightOfRight) {
        return heightOfLeft + 1;
    } else {
        return heightOfRight + 1;
    }
}

bool BinaryTree::isBalansed(Node* node) const {
    return (-1 < height(node));
}

bool BinaryTree::findNode(const Node* root, const int value) {
    if (nullptr == root) {
        return false;
    }
    if (value == root->m_value) {
        return true;
    }
    if (root->m_value > value) {
        findNode(root->m_left, value);
    } else {
        findNode(root->m_right, value);
    }
}

void BinaryTree::traversNode(const Node* start) const {
    if (start == nullptr) {
        return;
    }
    traversNode(start->m_left); // visit left part
    std::cout << start->m_value << std::endl; // print value
    traversNode(start->m_right); // visit right part
}

BinaryTree::Node* BinaryTree::sortedInsertNode(Node* root, Node* newNode) {
    if (root == nullptr) {
        return newNode;
    }
    if ( root->m_value > newNode->m_value) {
            root->m_left = sortedInsertNode(root->m_left, newNode);
    } else {
            root->m_right = sortedInsertNode(root->m_right, newNode);
    }
    return root;
}

BinaryTree::Node* BinaryTree::balansedInsertNode(Node* root, Node* newNode) {
    if (root == nullptr) {
        return newNode;
    } 
    if (isBalansed(root)) { 
        root->m_left = balansedInsertNode(root->m_left, newNode);
    } else {
        root->m_right = balansedInsertNode(root->m_right, newNode);  
    }
    return root;
}

BinaryTree::Node* BinaryTree::minValue(Node* root) {
    while (nullptr != root->m_left) {
        root = root->m_left;
    }
    return root;
}

BinaryTree::Node* BinaryTree::removeNode(Node* root, const int value) {
    if (nullptr == root) {
        return root;
    } else if (value < root->m_value) {
        root->m_left = removeNode(root->m_left, value);
    } else if (value > root->m_value) {
        root->m_right = removeNode(root->m_right, value);
    } else {
        // No child
        if (nullptr == root->m_left && nullptr == root->m_right) {
            delete root;
            root = nullptr;
            return root;
        } else if (nullptr == root->m_left) { // one child
            Node* tmp = root;
            root = root->m_right;
            delete tmp;
            return root;
        } else if (nullptr == root->m_right) { // one child
            Node* tmp = root;
            root = root->m_left;
            delete tmp;
            return root;
        } else { // two child
            Node* tmp = minValue(root->m_right);
            root->m_value = tmp->m_value;
            root->m_right = removeNode(root->m_right, tmp->m_value);
        }
    }
    return root;
}

void BinaryTree::clear(Node* root) {
    if (nullptr == root) {
        return;
    } 
    clear(root->m_left);
    clear(root->m_right);
    delete root;
}

bool BinaryTree::isEmpty() const {
    return (nullptr == m_root);
}

bool BinaryTree::find(const int value) {
    return findNode(m_root, value);
}

void BinaryTree::travers() const {
    std::cout << "\nleft->root->right\n";
    traversNode(m_root);
}

void BinaryTree::sortedInsert(const int value) {
    Node* newNode = new Node(value);
    m_root = sortedInsertNode(m_root, newNode);
}

void BinaryTree::balansedInsert(const int value) {
    Node* newNode = new Node(value);
    m_root = balansedInsertNode(m_root, newNode);
}

void BinaryTree::remove(const int value) {
    m_root = removeNode(m_root, value);
}
