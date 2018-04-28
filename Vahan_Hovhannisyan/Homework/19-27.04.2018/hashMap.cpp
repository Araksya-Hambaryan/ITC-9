
#include <iostream>
#include <string>

    class HashMap {
    private:

        struct Node {
                std::string name;
                int key;
                struct Node* next;
            };
            
        int hash(int key) {
            return key % 5;
        }
        
        Node** arr = new Node*[5];
    
    public:

        void get(int Key) {
                int index = hash(Key);
                if (NULL == arr[index]) {
                    std::cout << "No such number!" << std::endl;
                    return;
                }
                Node* temp = arr[index];
                while (NULL != temp) {
                    if (temp -> key == Key) {
                        std::cout << Key << " phone number belongs to " << temp -> name << "." << std::endl;
                        return;
                    }
                    temp = temp -> next;
                }
                std::cout << "No such phone number!" << std::endl;
                return;
            }

        void update(int key, std::string name) {
            int index = hash(key);
            if (NULL == arr[index]) {
                std::cout << "Nothing to update!" << std::endl;
                return;
            }
            Node* temp = arr[index];
            while (NULL != temp) {
                if (temp -> key == key) {
                    temp -> name = name;
                    return;
                }
                temp = temp -> next;
            }
            std::cout << "No such key found!" << std::endl;
        }

        void add(std::string name, int key) {
            int index = hash(key);
            Node* newNode = new Node();
            newNode -> key = key;
            newNode -> name = name;
            newNode -> next = NULL;
            if (NULL == arr[index]) {
                arr[index] = newNode;
                return;
            }
            Node* temp = arr[index];
            while (NULL != temp -> next) {
                temp = temp -> next;
            }
            temp -> next = newNode;
        }

        void remove1(int key) {
            int index = hash(key);
            if (NULL == arr[index]) {
                std::cout << "No phone number to remove " << std::endl;
                return;
            }
            Node* temp = arr[index];
            if (arr[index] -> key == key) {
                arr[index] = temp -> next;
                delete temp;
                return;
            }
            Node* previous = temp;
            temp = temp -> next;
            while (NULL != temp) {
                if (temp -> key == key) {
                    previous -> next = temp -> next;
                    delete temp;
                    return;
                }
                previous = temp;
                temp = temp -> next;
            }
        }
        
        HashMap() {
            arr = new Node*[5];
        }

        ~HashMap() {
            Node* temp = NULL;
            delete[] arr;
        }
    };
int main() {
    HashMap* hm = new HashMap;
    hm -> add("Lord Tywin Lannister", 55);
    hm -> add("Lord Petyr Baelish", 70);
    hm -> add("Vahan Hovhannisyan", 65);
    hm -> add("Aegon Targeryan", 80);
    hm -> add("Lord Varys", 56);
    hm -> add("Robb Stark", 71);
    hm -> add("Joffrey Baratheon", 61);
    hm -> remove1(55);
    hm -> remove1(80);
    hm -> get(55);
    hm -> get(70);
    hm -> get(65);
    hm -> get(80);
    hm -> get(56);
    hm -> get(71);
    hm -> get(61);
    hm -> update(61, "Renly Baratheon");
    hm -> get(61);
    return 0;
}