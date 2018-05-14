#include<iostream>

class Three {
private:
    struct Node {
	int value;
	Node* right;
	Node* left;
    };
public:
    int size;
    Node* root;

    Three () {
	size = 0;
	root = NULL;	
    }
    ~Three () {

    }

    void push (int num) {

	if (0 == size) {
	    Node* newNode;
	    newNode = new Node;
	    root = newNode;
	    ++(size);
 	    newNode -> value = num;
	    newNode -> right = NULL;
	    newNode -> left = NULL;
	    std::cout<<"Push"<<std::endl;
	}

	if(num > root -> value) {
	    Node* newNode;
	    newNode = new Node;
	    root -> right = newNode;
	    newNode -> value = num;
	    newNode -> right = NULL;
            newNode -> left = NULL;
	} else  {
	    Node* newNode;
	    newNode = new Node;
	    root -> left = newNode;
	    newNode -> value = num;
            newNode -> right = NULL;
            newNode -> left = NULL;
	}
    }

    void pop (void) {

    }
    bool find (Node* temp,int num) {

    }

    void print (Node* root) {

	std::cout<< root -> value <<std::endl;
	if (root -> left == NULL && root -> right == NULL) {
	    return;
	} else if (root -> left != NULL && root -> right != NULL) {
	    print(root -> left);
	    print(root -> right);
	} else if (root -> left != NULL && root -> right == NULL) {
	    print(root -> left);
	} else {
	    print(root -> right);
	}
    }

};

int main() {
    Three obj;
    obj.push(6);    
    obj.push(7);
    obj.push(5); 
    obj.print(obj.root);    
    return 0;
}
