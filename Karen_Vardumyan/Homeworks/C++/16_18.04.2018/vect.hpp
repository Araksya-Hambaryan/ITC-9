#ifndef VEC_HPP
#define VEC_HPP
class Vect {
private:
    int* arr;   
    int size;
public:
    Vect ();
    Vect (int a);
    Vect (Vect& obj);
    ~Vect ();
    Vect(Vect&& object);
    int getSize();
    int getElement(int i);
    void setElement(int i, int num);
    void pushBack (int a);
    void popBack ();
    void pushFront (int a);
    void popFront ();    
    void pushIndex (int index, int a);
    void popIndex (int index);
#endif
};


