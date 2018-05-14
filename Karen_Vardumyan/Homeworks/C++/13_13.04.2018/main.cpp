#include"vector.hpp"

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
