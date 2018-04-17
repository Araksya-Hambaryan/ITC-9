class Vector{
    private:
    int size;
    int* vector;
    public:
    Vector();//+
    Vector(Vector& vec);
    void buildArr(int n, int fill); 
    int getSize();//+
    int* getVector();
    int getElem(int index);//+
    void push(int newElem);
    void pop();
};



