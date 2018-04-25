#include<iostream>
class List {
public:
    int value;
    int index;
    int size;
    List* next;
    List* prew;
    List () {
        this -> value = 0;
        this -> index = 0;
        this -> size = 0;
        this -> next = NULL;
        this -> prew = NULL;
    }
    void pushBack ( int a) {
        if (this -> size == 0) {
	    this -> value = a;
	    this -> size = 1;
	    return;
	}        
        List* temp;        
        temp = this;
	List* newList = new List;
  	while (true) {
            if (temp -> next == NULL) {
                temp -> next = newList;
         	newList -> prew = temp;
		(this -> size)++;
		newList -> size = this -> size;
		newList -> index = (temp -> index) + 1;
          	newList -> value = a;
		break;	        
	    } else {
	     	temp = temp -> next;   
	    }
	}
    }
    int getIndex (int ind) {
	List* temp;
	temp = this;
	while (true) {
	    if (temp -> index == ind) {
		return temp -> value;
	    } else {
		temp = temp -> next;
	    }
	}
    }
    void insert (int ind, int a) {
	List* temp;
	temp = this;
	List* newList = new List;
	++(this -> size);
        if (ind == 0) {
            newList -> value = this -> value;
	    newList -> next = this -> next;
	    newList -> prew = this;
 	    newList -> index = 1;
	    this -> next = newList;
	    this -> prew = NULL;
	    this -> value = a;
	    this -> index = 0;
	    temp = newList -> next;
       	    while (temp -> next != 0) {
        	temp -> index = temp -> index + 1;
        	temp = temp -> next;
     	    }
      	    temp -> index = temp -> index + 1;
	} else { 
            while (temp -> next != NULL) {	    
	        temp = temp -> next;
 	    	if (temp -> index == ind) {
		    newList -> value = a;
	 	    newList -> next = temp;
		    newList -> prew = temp -> prew;
		    newList -> index = temp -> index;
		    temp -> prew -> next = newList;
		    temp -> prew = newList;
		    while (temp -> next != 0) {
                        temp -> index = temp -> index + 1;
                        temp = temp -> next;
                    }
                    temp -> index = temp -> index + 1;
	        }
	    }
	}
    } 
    ~List () {
       	List* temp;
        temp = this;
	while (temp -> next != NULL) {
	    temp = temp -> next;
	    delete temp -> prew;
       	}
	delete temp;
        std::cout<< "myList is a deleted" <<std::endl;  
    }
};  


int main () {

    List* myList = new List;
    List* temp;
    temp = myList;
    std::cout<<"\nmyList defoult size is "<<  myList -> size <<std::endl;
    std::cout<<"\npushBack elements 1 , 2 , 3, 4  in myList \n\n";
    myList -> pushBack(1);
    myList -> pushBack(2);
    myList -> pushBack(3);
    myList -> pushBack(4);      
    std::cout<<"new size is "<< myList -> size <<std::endl;
    std::cout<<"\n\nmyList elements \n";
    while (temp -> next != 0) {
        std::cout<< temp -> value <<std::endl;
        temp = temp -> next;
    }
    std::cout<< temp -> value <<::std::endl;
    std::cout<<"\n\nInsert element '22' in index - 1 \n";
    myList -> insert(1, 22);
    std::cout<<"new size is "<< myList -> size <<std::endl;
    std::cout<<"\n\nmyList elements \n";
    temp = myList;
    while (temp -> next != 0) {
        std::cout<< temp -> value <<std::endl;
        temp = temp -> next;
    }
    std::cout<< temp -> value <<::std::endl;
    std::cout<<"\nElement in index 1 is "<< myList -> getIndex(1) <<std::endl;
    return 0;
}
