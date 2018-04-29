
#include <iostream>

    class List {
        private:
            struct Node {
                int data;
                Node* next;
            };

        int size;
        Node* head;

        public:
            bool isValid(int position) {
                if (position > size + 1 || position < 0) {
                    return false;
                } else {
                    return true;
                }
            }

        void insert(int position, int data) {
            if (!isValid(position)) {
                std::cout << "Invalid input!" << std::endl;
                return;
            }
            Node* newNode = new Node();
            newNode -> data = data;
            Node* temp = head;
            if (1 == position) {
                head = newNode;
                head -> next = temp;
                ++size;
                return;
            }

            Node* previous = temp;
            Node* next2 = temp -> next;
            for (int i = 0; i < position - 3; ++i) {
                temp = temp -> next;
                previous = temp -> next;
                next2 = temp -> next -> next;
            }
            previous -> next = newNode;

            previous -> next -> next = next2;
            ++size;
        }

        void erase(int position) {
            if (nullptr == head) {
                std::cout << "List is empty!" << std::endl;
                return;
            }
            Node* temp = head;
            if (1 == position) {
                head = temp -> next;
                delete temp;
                return;
            }
            Node* previous = temp;
            temp = temp -> next;
            for (int i = 0; i < position - 2 && nullptr != temp; i++) {
                previous = temp;
                temp = temp -> next;
            }
            previous -> next = temp -> next;
            delete temp;
            return;
        }

        void print() {
            Node* temp = head;
            std::cout << "Your list: ";
            while (nullptr != temp) {
                std::cout << temp -> data << " ";
                temp = temp -> next;
            }
            std::cout << "\nSize = " << size << std::endl;
        }

        List() {
            std::cout << "Default constructor is called:" << std::endl;
            int data = 0;
            Node* next = nullptr;
            int size = 0;
            Node* head = nullptr;
        }

        List(const List & obj) {
            std::cout << "Copy constructor is called:" << std::endl;
            this -> size = obj.size;
            Node* temp = obj.head;
            while (nullptr != temp) {
                Node* newNode = new Node();
                newNode -> data = temp -> data;
                newNode -> next = temp;
                temp = temp -> next;
            }
        }
        
        List(List && obj) {
            std::cout << "Move constructor is called:" << std::endl;
            this -> head = obj.head;
            obj.head = nullptr;
        }
        
        ~List() {
            std::cout << "Destructor is called:" << std::endl;
            Node* temp = head;
            while (nullptr != head) {
                temp = head;
                head = head -> next;
                delete temp;
            }
            head = nullptr;
            temp = nullptr;
            Node* newNode = nullptr;
            Node* next2 = nullptr;
            Node* previous = nullptr;
        }
    };

int main() {
    List* l = new List();
    l -> insert(1, 6);
    l -> insert(1, 5);
    l -> insert(3, 7);
    l -> insert(3, 8);
    l -> insert(3, 80);
    l -> insert(4, 77);
    l -> insert(7, 1);
    l -> erase(1);
    l -> print();
    return 0;
}