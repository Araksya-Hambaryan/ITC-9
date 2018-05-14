#include"vector.hpp"

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
