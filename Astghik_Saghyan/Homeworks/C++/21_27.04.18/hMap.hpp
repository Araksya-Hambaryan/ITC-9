#ifndef HMAP_HPP
#define HMAP_HPP


class HMap{
    private:
    struct Node {
	    int key;
	    std::string value;
        Node* next;
    };
    int size;
    Node** array;
    int hash(int key);
    bool isEmpty();
    public:
    HMap();
    HMap(HMap& hM);
    HMap(HMap&& hM);
    ~HMap();
    void add(int key, std::string value);
    void update(int key, std::string value);
    void remove(int key);
    std::string get(int key);
    int getSize();
    void printHMap();
};

#endif

