#include <iostream>
#include <string>

    class Hash {
        private:
            static
        const int tableSize = 6;
        struct Item {
            std::string name;
            std::string phoneNum;
            Item* next;
        };

        Item* hashTable[tableSize];
        public:
            int hashFunc(std::string key);
        Hash();
        void addItem(std::string name, std::string phoneNum);
        int numberOfItemsInIndex(int index);
        void printTable();
        void printItemsInIndex(int index);
        void findPhoneNum(std::string name);
        void removeItem(std::string name);
    };
Hash::Hash() {
    for (int i = 0; i < tableSize; ++i) {
        hashTable[i] = new Item;
        hashTable[i] -> name = "empty";
        hashTable[i] -> phoneNum = "empty";
        hashTable[i] -> next = NULL;
    }

}
int Hash::hashFunc(std::string key) {
    int hash = 0;
    int index;
    for (int i = 0; i < key.length(); ++i) {
        hash = (hash + (int) key[i]) * 17;
    }
    index = hash % tableSize;
    return index;
}
void Hash::addItem(std::string name, std::string phoneNum) {
    int index = hashFunc(name);
    if (hashTable[index] -> name == "empty") {
        hashTable[index] -> name = name;
        hashTable[index] -> phoneNum = phoneNum;
    } else {
        Item* ptr = hashTable[index];
        Item* n = new Item;
        n -> name = name;
        n -> phoneNum = phoneNum;
        n -> next = NULL;
        while (ptr -> next != NULL) {
            ptr = ptr -> next;
        }
        ptr -> next = n;
    }
}
int Hash::numberOfItemsInIndex(int index) {
    int count = 0;
    if (hashTable[index] -> name == "empty") {
        return count;
    } else {
        ++count;
        Item* ptr = hashTable[index];
        while (ptr -> next != NULL) {
            ++count;
            ptr = ptr -> next;
        }
    }
    return count;
}
void Hash::printTable() {
    int number;
    for (int i = 0; i < tableSize; ++i) {
        number = numberOfItemsInIndex(i);
        std::cout << "------------------\n";
        std::cout << "Index = " << i << std::endl;
        std::cout << hashTable[i] -> name << std::endl;
        std::cout << hashTable[i] -> phoneNum << std::endl;
        std::cout << "Number of Items = " << number << std::endl;
        std::cout << "--------------------\n";
    }
}
void Hash::printItemsInIndex(int index) {
    Item* ptr = hashTable[index];
    if (ptr -> name == "empty") {
        std::cout << "index = " << index << " is empty" << std::endl;
    } else {
        std::cout << "index " << index << "contains the following item\n";
        while (ptr != NULL) {
            std::cout << "--------------------\n";
            std::cout << ptr -> name << std::endl;
            std::cout << ptr -> phoneNum << std::endl;
            std::cout << "--------------------\n";
            ptr = ptr -> next;
        }
    }
}
void Hash::findPhoneNum(std::string name) {
    int index = hashFunc(name);
    bool foundName = false;
    std::string phoneNum;
    Item* ptr = hashTable[index];
    while (ptr != NULL) {
        if (ptr -> name == name) {
            foundName = true;
            phoneNum = ptr -> phoneNum;
        }
        ptr = ptr -> next;
    }
    if (foundName == true) {
        std::cout << "Phone Number  = " << phoneNum << std::endl;
    } else {
        std::cout << name << "'s info was not found in this Hash Table\n";
    }
}
void Hash::removeItem(std::string name) {
    int index = hashFunc(name);
    Item* delPtr;
    Item* p1;
    Item* p2;
    //case 0- bucket is empty
    if (hashTable[index] -> name == "empty" && hashTable[index] -> phoneNum == "empty") {
        std::cout << name << " was not found in the Hash Table\n";

        //case 1- only 1 item contained in the bucket and that item has matching name 
    } else if (hashTable[index] -> name == name && hashTable[index] -> next == NULL) {
        hashTable[index] -> name = "empty";
        hashTable[index] -> phoneNum = "empty";
        std::cout << name << " was remove from Hash Table\n";
        //case 2- match is located in the first item in the bucket, but there are more items in the bucket
    } else if (hashTable[index] -> name == name) {
        delPtr = hashTable[index];
        hashTable[index] = hashTable[index] -> next;
        delete delPtr;
        std::cout << name << " was remove from Hash Table\n";
        //case 3- bucket contains more than 1 item is not a match
    } else {
        p1 = hashTable[index] -> next;
        p2 = hashTable[index];
        while (p1 != NULL && p1 -> name != name) {
            p2 = p1;
            p1 = p1 -> next;
        }
    }
    //case 3.1- no match
    if (p1 == NULL) {
        std::cout << name << " was not found in the Hash Table\n";
        //case 3.2- match is found
    } else {
        delPtr = p1;
        p1 = p1 -> next;
        p2 -> next = p1;
        delete delPtr;
        std::cout << name << " was removed from Hash Table\n";
    }
}
int main() {
    Hash obj;
    std::string name = "";

    obj.addItem("Paul", "1818457982");
    obj.addItem("Kim", "18184788999");
    obj.addItem("Emma", "1818455548");
    obj.addItem("Eva", "18187777789");
    obj.addItem("Inna", "1818799956");
    obj.addItem("John", "1818456222");
    obj.printItemsInIndex(2);
    while (name != "exit") {

        std::cout << "Remove "; // for searching name you can change "Remove"-> "Search for"
        std::cin >> name;
        if (name != "exit") {
            obj.removeItem(name); // obj.findPhoneNum(name);
        }
    }

    obj.printTable();

    return 0;
}
