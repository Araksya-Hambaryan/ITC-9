class Queue {
    public:
        Queue();
        Queue(int);
        ~Queue();
        void push(int);
        void pop();
        int size();
        bool empty();
        void print();
    private:
        int* arr;
        int length;
        int last;
        void insertNulls();
        void copyArray(bool);
        void move();
};
