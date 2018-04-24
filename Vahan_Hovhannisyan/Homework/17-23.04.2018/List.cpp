
#include <iostream>

// A linked list node
struct Node {
    int data;
    struct Node* next;
};
class List {
    private:
    Node* head;
    Node* tail;
    int length;
    public:
    /* Given a reference (pointer to pointer) to the head of a list and 
    an int, inserts a new node on the front of the list. */
    void pushFront(struct Node** head_ref, int new_data) {
    /* 1. allocate node */
    struct Node* new_node = new Node();

    /* 2. put in the data  */
    new_node -> data = new_data;

    /* 3. Make next of new node as head */
    new_node -> next = (*head_ref);

    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;

    ++length; // Increase length 
    }

    /* Given a node prev_node, insert a new node after the given 
       prev_node */
    void insertAfter(struct Node* prev_node, int new_data) {
        /*1. check if the given prev_node is NULL */
        if (NULL == prev_node) {
            std::cout << "the given previous node cannot be NULL" << std::endl;
            return;
        }

        ++length; // Increase length

        // allocate new node 
        struct Node* new_node = new Node();

        // put in the data 
        new_node -> data = new_data;

        // Make next of new node as next of prev_node 
        new_node -> next = prev_node -> next;

        // move the next of prev_node as new_node 
        prev_node -> next = new_node;
    }

    /* Given a reference (pointer to pointer) to the head
       of a list and an int, appends a new node at the end  */
    void pushBack(struct Node** head_ref, int new_data) {
            ++length; // Increase length 

            // allocate node 
            struct Node* new_node = new Node();

            struct Node* last = *head_ref;

            // put in the data 
            new_node -> data = new_data;

            /* This new node is going to be the last node, so make next of
                  it as NULL*/
            new_node -> next = NULL;

            // If the Linked List is empty, then make the new node as head 
            if (NULL == *head_ref) {
                *head_ref = new_node;
                return;
            }

            // Else traverse till the last node 
            while (NULL != last -> next) {
                last = last -> next;

                // Change the next of last node 
                last -> next = new_node;
            }
            return;
        }
        /* Given a reference (pointer to pointer) to the head of a list
           and a position, deletes the node at the given position */
    void deleteNode(struct Node** head_ref, int position) {
            // If linked list is empty
            if (NULL == *head_ref) {
                return;
            }

            --length; // Decrease length

            // Store head node
            struct Node* temp = *head_ref;

            // If head needs to be removed
            if (position == 0) { 
                *head_ref = temp -> next; // Change head
                delete temp; // free old head
                return;
            }

            // Find previous node of the node to be deleted
            for (int i = 0; NULL != temp && i < position - 1; i++) {
                temp = temp -> next;
                // If position is more than number of ndoes
                if (NULL == temp || NULL == temp -> next) {
                    return;
                }
                // Node temp->next is the node to be deleted
                // Store pointer to the next of node to be deleted
                struct Node* next = temp -> next -> next;

                // Unlink the node from linked list
                delete temp -> next; // Free memory

                temp -> next = next; // Unlink the deleted node from list
            }
        }
        // This function prints contents of linked list starting from head
    void printList(struct Node* node) {
        while (NULL != node) {
            std::cout << node -> data << " ";
            node = node -> next;
        }
        std::cout << "\nThe length of list is: " << length << std::endl;
    }

    List() {
        head = NULL;
        tail = NULL;
    }

    List(const List& obj) {
        std::cout << "\nCopy\n";
        Node* newNode = new Node;
        head = newNode;
        newNode -> data = obj.head -> data;
        Node* temp = obj.head;
        Node* myTemp = this -> head;
        for (int i = 1; i < length; ++i) {
            temp = temp -> next;
            Node* newNode = new Node;
            newNode -> data = temp -> data;
            myTemp -> next = newNode;
            myTemp = myTemp -> next;
        }
    }

    List(List&& obj) {
        std::cout << "\nMove\n";
        this -> head = obj.head;
        obj.head = nullptr;
    }

    ~List() {
        Node* temp = head;
        while (nullptr != head) {
            temp = head;
            head = head -> next;
            delete temp;
        }
        head = nullptr;
    }

};
/* Driver program to test above functions*/
int main() {
    List l;
    /* Start with the empty list */
    struct Node* head = NULL;

    // Insert 6.  So linked list becomes 6->NULL
    l.pushBack(&head, 6);

    // Insert 7.  So linked list becomes 7-6->NULL
    l.pushFront(&head, 7);

    //Delete the element under index 0. So linked list becomes 6->NULL
    l.deleteNode(&head, 0);

    std::cout << "Created Linked list is: ";

    l.printList(head);

    return 0;
}