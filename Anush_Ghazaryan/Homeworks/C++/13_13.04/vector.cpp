#include<iostream>
#include<string>
#include<vector>


void printVector( const std::vector<std::string>& elements ) {
    std::cout << "\n The string is " << std::endl;
    for ( auto index : elements ) {
        std::cout << index << " ";
    }
}

void fillVector(std::vector<std::string>& elements, std::string element) {
    std::cout << "Enter  strings in the vector and TYPE -1 " << std::endl;
    do {
        std::getline(std::cin, element );
	elements.push_back(element);

       } while ( element != "-1" );
}
void eraseVector(std::vector<std::string>& elements ){
   for( auto &item : elements ) {
        for( int i = 0; item[i] != '\0'; ++i ) {
            if( 'A' >=  item[i] || 'z' <=  item[i] ) {
                item.erase (item.begin() + i);
                i--;
            }
        }
    }
}
int main() {
    std::string element;
    std::vector<std::string> vectorOfStrings;
    fillVector( vectorOfStrings, element );
    printVector( vectorOfStrings );
    eraseVector( vectorOfStrings );
    printVector( vectorOfStrings );


return 0;
}
