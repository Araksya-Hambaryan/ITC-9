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
    ~HashMap () {
	for (int i = 0; i < 7; ++i) {
	    Node* temp;
	    temp = arr[i] -> next;

	    while (temp != NULL) {
		delete arr[i];
		arr[i] = temp;
		temp = temp -> next;
	    }
	    delete arr[i];
	}
	delete [] arr;
	std::cout<<"Object hashMap is deleted"<<std::endl;
    }
    void add (std::string key, std::string val) {
	Node* temp;
      	if (arr[hash(key)] == NULL) {
      	    Node* newNode = new Node;
	    arr[hash(key)] = newNode;
    	    arr[hash(key)] -> value = val;
    	    arr[hash(key)] -> key = key;
    	    arr[hash(key)] -> next = NULL;
    	    return;
	}
        temp = arr[hash(key)];
	if (temp -> key == key) {
            temp -> value = val;
            return;
        }
    	while (temp -> next != NULL) {
	    if (temp -> next -> key == key) {
                temp -> next -> value = val;
                return;
            }
    	    temp = temp -> next;
    	}
        Node* newNode = new Node;
	temp -> next = newNode;
    	newNode -> value = val;
    	newNode -> key = key;
    	newNode -> next = NULL;
    	return;
    }
    void remove (std::string key) {
	Node* temp;
	if (arr[hash(key)] == NULL) {
            std::cout<<"Not this key to remove"<<std::endl;
            return;
        }
	temp = arr[hash(key)];
        if (arr[hash(key)] -> key == key) {
	    arr[hash(key)] = arr[hash(key)] -> next;
	    delete temp;
	    temp = NULL;
	    return;
	}
	while (temp -> next != NULL) {
	    if (temp -> next -> key == key) {
		temp -> next = temp -> next -> next;
		delete temp -> next;
		temp -> next = NULL;
		return;
	    }
	    temp = temp -> next;
	}
	std::cout<<"Not this key to remove"<<std::endl;
    }
    void get (std::string key) {
     	Node* temp;
	if (arr[hash(key)] == NULL) {
            std::cout<<"Not this key"<<std::endl;
            return;
        }
	temp = arr[hash(key)];
        if (arr[hash(key)] -> key == key) {
            
	    std::cout<<"Key-"<< key <<" : Value-" << arr[hash(key)] -> value <<std::endl;
            return;
        }
	while (temp -> next != NULL) {
            if (temp -> next -> key == key) {
                std::cout<<"Key-"<< key <<" : Value-" << temp -> next -> value <<std::endl;
                return;
            }
            temp = temp -> next;
        }
        std::cout<<"Not this key"<<std::endl;
    }
    void print () {
      	for(int i = 0; i <= 6; ++i){
	    Node* temp;    	   
    	    temp = arr[i];
    	    std::cout<<"List in index "<< i <<std::endl;
    	    while (temp != NULL) {
    	 	std::cout <<"  "<< temp -> key << " : " << temp -> value << std::endl;
    		temp = temp -> next;
    	    }
	    std::cout<<std::endl;
	}
    }
};
int main() {
    HashMap obj;
    std::cout<<std::endl;    
    obj.add("Arman", "31");
    obj.add("Arman", "67"); 
    obj.add("Anush", "18");
    obj.add("Ervand", "24");    
    obj.add("Gurgen", "28");
    obj.add("Hamlet", "30");    
    obj.add("Karen", "23");
    obj.add("Narek", "24");
    obj.add("Levon", "37");
    obj.add("Noro", "23");
    obj.add("Petros", "22");
    obj.add("Ruben", "22");
    obj.add("Serge", "33");
    obj.add("Tatev", "26");
    obj.add("Vahe", "26");
    obj.add("Xacho", "33");
    obj.add("Zoro", "21");
    obj.add("444", "444");
    obj.add("555", "555");
    obj.add("$$$", "111");
    obj.add("&#$%", "####");
    obj.print();
    obj.get("Karen");
    obj.get("Anush");
    obj.get("YYY");
    std::cout<<std::endl;
    return 0;
}
