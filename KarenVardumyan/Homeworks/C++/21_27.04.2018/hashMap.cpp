#include<iostream>
#include<string>
     
class HashMap {
private:
    struct Node {
        std::string value;
        Node* next;
        std::string key;
        Node () {
    	    value = "";
    	    key = "";
    	    next = NULL;
    	}
    };
    Node** arr;
    int size;

    int hash (std::string pseudoKey) {
    	char key = pseudoKey[0];
    	if ((key >= 'A' && key <= 'E') || (key >= 'a' && key <= 'e')) {
    	    return 0;
    	} else if ((key >= 'F' && key <= 'J') || (key >= 'f' && key <= 'j')) {
    	    return 1;
    	} else if ((key >= 'K' && key <= 'O') || (key >= 'k' && key <= 'o')) {
            return 2;
     	} else if ((key >= 'P' && key <= 'T') || (key >= 'p' && key <= 't')) {
     	    return 3;
    	} else if ((key >= 'U' && key <= 'Z') || (key >= 'u' && key <= 'z')) {
    	    return 4;
    	} else if (key >= '0' && key <= '9') {
    	    return 5;
    	} else {
    	    return 6;
     	}
    }
public:
    HashMap () {
    	arr = new Node*[7];
    	for(int i = 0; i < 7; ++i) {
    	    arr[i] = NULL;
    	}
    }
     
     
     
     
    void add (std::string key, std::string val) {
    	Node* temp;
    	temp = arr[hash(key)];
      	if (temp == NULL) {
      	    Node* newNode = new Node;
	    temp = newNode;     
    	    temp -> value = val;
    	    temp -> key = key;
    	    temp -> next = NULL;
    	    return;
	}
     	while (temp != NULL) {
    	    temp = temp -> next;
    	}
    	temp -> value = val;
    	temp -> key = key;
    	temp -> next = NULL;
    	return;
    }
     
    void update (std::string key) {
     
    }
    void remove (std::string key) {
     
    }
    void get (std::string key) {
     
    }
    void print () {

    	for(int i = 0; i <= 6; ++i){
    	    Node* temp;
    	    temp = arr[i];
    	    std::cout<<"List in index "<< i <<std::endl;
    	    while(temp != NULL) {
    	 	std::cout << temp -> key << " : " << temp -> value << std::endl;
    		temp = temp -> next;
    	    }
	    std::cout<<"\n\n";
	}
    }
};
     
     
     
int main() {
    HashMap obj;
    obj.add("Zaven", "25");
    
    obj.add("Bagrat", "31");
  
    obj.add("Ashot", "2");
    obj.print();

//    std::cout<< obj.hash("Waven");
    return 0;
}

