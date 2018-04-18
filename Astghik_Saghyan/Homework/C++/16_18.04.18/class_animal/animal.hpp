class Animal{
    protected:
    bool tail;
    bool fur;
    int foot;
    public:
    bool getTail();
    bool getFur();
    int getFoot();
    void setTail(bool tl);
    void setFur(bool fr);
//    void setfoot(int ft); 
    Animal();
    Animal(Animal& anim);
};
                  

