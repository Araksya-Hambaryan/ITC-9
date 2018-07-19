#include <iostream>
#include <string>

int main() {
    char* front = nullptr;     // declaration of pointers
    char* back = nullptr;	
    std::string word = "abcdefg";            //string declaration
    for(int i = 0; i < word.size() / 2; ++i) {
        front = &word[i];                   // reversing the  elements of the  string with pointers
        back = &word[word.size() - 1 - i];
        char tmp = *front;
        *front = *back;
        *back = tmp;
    }  
    std::cout << word  <<std::endl;      // printing the reversed string
    return 0;
}
