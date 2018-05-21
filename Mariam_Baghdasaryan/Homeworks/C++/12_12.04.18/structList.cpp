#include <iostream>

struct Node {
   int value;
   Node* next;
};

Node* addNumber(int number, Node* root) {
   Node* newNode = new Node;
   newNode -> value = number;
   newNode -> next = nullptr;
   if (root == nullptr) {
       root = newNode;
   } else {
       Node* temp = root;
       while (temp -> next != nullptr) {
           temp = temp -> next;
       }
       temp -> next = newNode;
   }
   return root;
}

int maxValue(Node* root) {
   int max = 0;
   Node* temp = root;
   while (temp != nullptr) {
       if (temp -> value >= max) {
               max = temp -> value;
       }
       temp = temp -> next;
   }
   return max;
}

void remove(Node* root) {
   Node* t;
   while (root != nullptr) {
       t = root -> next;
       delete root;
       root = t;
   }
}

int main() {
   Node* root = nullptr;
   root = addNumber(1, root);
   root = addNumber(2, root);
   while (true) {
       int number;
       std :: cout << "Input number (5 for exit) : ";
       std :: cin >> number;
       if (5 == number) {
           break;
       } else {
          root = addNumber(number, root);
       }
   }
   std :: cout << "Maximum number is " << maxValue(root) << std :: endl;
   remove(root);

   return 0;
}
