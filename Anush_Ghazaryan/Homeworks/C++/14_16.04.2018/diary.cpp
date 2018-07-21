#include <iostream>
#include <fstream>

// Checking the inputted name

bool checkName ( const std::string& input ) {                
    return ( input[0] >= 'A' && input[0] <= 'Z' );     
}

// Printing the Diary file

void printDiary() {
    std::cout << " DIARY \n";
    std::string data;
    std::ifstream file ( "diary.txt" );
    if ( file.is_open () ) {
        while ( getline ( file, data ) ) {
            std::cout << data << std::endl;
        }
    file.close();
    } else {
        std::cout << "Can't read diary.txt file" << std::endl;
    }
}

// Inputting a name or a date and checking its existance in the Diary file

void inputNameOrDate ( const std::string& input ) {
    bool exist = false;
    std::fstream file ( "diary.txt" );
    std::string meetName;
    std::string meetDate;
    
    
    if ( checkName ( input ) ) {
        while ( file >> meetName >> meetDate ) {
            if ( input == meetName ) {
                exist = true;
                std::cout << "The Date of The Meeting : " << meetDate << std::endl;
            }
        }
    } else {
        while ( file >> meetName >> meetDate ) {
            if ( input == meetDate ) {
                exist = true;
                std::cout << "The Person : " << meetName << std::endl;
            }
        }
    }
    if ( !exist ) {
        std::cout << "There is no such a Data in my Diary!" << std::endl;
    }
}


int main() {
    
    printDiary ();
    std::string input;
    std::cout << " Input a Name or a Date  : ";
    getline ( std::cin, input );
    inputNameOrDate ( input );
       
    
    return 0;
}













































