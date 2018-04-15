#include<iostream>
#include<vector>
#include<string>

void remuve ( std::vector<char>& );

int main () {
    std::vector<char>myVector;
    std::string text;
    std::cout<<"\nNermuceq tekst.Cragiry kjnji teksti mej gtnvox tvern u simvolnery (baci bacatic).\n\n";
    std::getline(std::cin,text);
    for(int i = 0; text.size() > i; ++i){
	myVector.push_back(text[i]);
    }
    remuve(myVector);
    std::cout<<"\n";
    for(int i = 0; myVector.size() > i; ++i) {
	std::cout<<myVector[i];
    }
    std::cout<<"\n";
    return 0;
}

void remuve (std::vector<char>& myVector){
    for(int i = 0; i < myVector.size();  ){
    	if(('A' > myVector[i] || 'z' < myVector[i] || ('Z' < myVector[i] && 'a' > myVector[i])) 
            && myVector[i] != ' '){
	    myVector.erase (myVector.begin()+i);
	} else {
	    ++i;
	}
    }
}
