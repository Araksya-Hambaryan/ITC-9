
#include <iostream>

    class List {
        public:
            struct Node {
                std::string name;
                int key;
                struct Node * next;
            };

        int hash(int key) {
            return key % 5;
        }
        Node * * arr = new Node * [5];

        bool get(int key) {
            int index = hash(key);

            if (nullptr == arr[index]) {
                return false;
            }
            Node * temp = arr[index];
            while (NULL != temp) {

                if (temp -> key == key) {
                    std::cout << key << " phone number belongs to " << temp -> name << "." << std::endl;
                    return true;
                }
                temp = temp -> next;
            }
            std::cout << "No such phone number!" << std::endl;
            return false;
        }

        void add(std::string newName, int newKey) {
            int index = hash(newKey);

            Node * newNode = new Node();
            newNode -> key = newKey;
            newNode -> name = newName;

            if (NULL == arr[index]) {
                arr[index] = newNode;
                return;
            }
            while (NULL != newNode -> next) {
                newNode -> key = newKey;
                newNode -> name = newName;
                newNode = newNode -> next;
            }
            arr[index] = newNode;
        }

        void remove1(int key) {

            int index = hash(key);

            if (NULL == arr[index]) {
                std::cout << "no phone number to remove " << std::endl;
                return;
            }

            Node * temp = arr[index];
            Node * prev = temp;
            while (NULL != temp) {
                if (temp -> key == key) {
                    if (NULL != temp -> next) {
                        std::cout << "Temp = " << temp << "prev = " << prev;
                        prev -> next = temp -> next;
                        delete temp;
                    }
                    delete temp;
                }
                prev = temp;
                temp = temp -> next;
            }
        }

    };
int main() {
    List l;
    l.add("Lord Tywin", 60);
    l.get(60);
    return 0;
}