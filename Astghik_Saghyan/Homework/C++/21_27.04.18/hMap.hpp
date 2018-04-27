#ifndef HMAP_HPP
#define HMAP_HPP


class HMap{
//    private:
    public:
    struct Node {
	int key;
	int value;
        Node* next;
    };
    
    int size;
    Node** array;
    int hash(int key);
    public:
    HMap();
    HMap(HMap& hM);
    HMap(HMap&& hM);
    ~HMap();
    void add(int key, std::string value);
    void update(int key, std::string value);
    void remove(int key);
    std::string get(int key);
//    int getSize();
//    void printHMap();
};

#endif

