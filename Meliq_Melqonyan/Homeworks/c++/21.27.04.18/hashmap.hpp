#include <string>

class HashMap {
    public:
        HashMap();
        ~HashMap();
        HashMap(const HashMap& obj);
        void add(std :: string,std :: string);
        void update(std :: string,std :: string);
        void remove(std :: string);
        std :: string get(std :: string);
    private:
        struct Node {
            std :: string key;
            std :: string value;
            Node* next;
        };
        int hashCode(std :: string);
        int length;
        Node* arr;

};
