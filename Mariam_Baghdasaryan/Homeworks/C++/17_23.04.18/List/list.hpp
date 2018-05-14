#ifndef LIST_HPP
#define LIST_HPP

class List {
private:
    struct Node {
        int mValue;
        Node* next;
        Node() : next(nullptr) {};
    };
    Node* head;
    Node* tail;
    int mLength;
public:
    List();
    List(const List&);
    List(List&&);
    ~List();
    void push(int);
    void pop();
    bool insert(int, int);
    bool erase(int index);
    bool empty();
    int get(int);
    int size();
    void print();
};

#endif
