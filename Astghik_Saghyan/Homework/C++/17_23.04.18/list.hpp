#ifndef LIST_HPP
#define LIST_HPP


class List{
    private:
    struct Node {
        int value;
        Node* next;
    };
    
    int size;
    public:
    Node* head;
    List();
    List(List& li);
    List(List&& li);
    ~List();
    void insert(int index, int value);
    void erase(int index);
    int getSize();
    int getElem(int index);
    void push(int newElem);
    void pop();
    void printList();
};

#endif

