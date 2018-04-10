#include <iostream>
#include <string>

int main() {
	char* front;
	char* back;	
    std::string word = "abcdefg";
    for(int i = 0; i < word.size() / 2; ++i) {
        front = &word[i];
        back = &word[word.size() - 1 - i];
        char tmp = *front;
        *front = *back;
        *back = tmp;
    }  
    std::cout << word  <<std::endl;
    return 0;
}
