#ifndef LIST_HPP
#define LIST_HPP
// list.cpp
class List {
    public:
        List();
        List(const List&);
        List(List&&);
        ~List();
        void push(int);
        void pop();
        bool insert(int index, int num);
        bool erase(int index);
        int get(int index);
        bool empty();
        int size();
        void print();
    private:
        struct Node {
            int value;
            Node* next;
            Node() : next(nullptr) {};

        };
        Node* head;
        Node* tail;
        int length;
};

#endif
