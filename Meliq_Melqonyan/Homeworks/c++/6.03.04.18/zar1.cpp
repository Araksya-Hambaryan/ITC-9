#include <iostream>

int datark(int i, char tesq)() {
	return 0;
}	

int mek(int i, char tesq) {
	static int n = 0;
	if(n == 0) {
		n++;
		std::cout << "     ";       
	} else if(n == 1) {
		n++;
		std::cout << " " << tesq << "   ";
	} else if(n == 2) {
		n = 0;
		std::cout << "     ";
 	}
	return 0;
}

int erku(int i, char tesq) {
	static int n = 0;
	if(n == 0) {
		n++;
		std::cout << tesq << "    ";
	} else if(n == 1) {
		n++;
		std::cout << "     ";
	} else if(n == 2) {
		n = 0;
		std::cout << "    " << tesq;
	}
	return 0;
}


int ereq(int i, char tesq) {
	static int n = 0;
	if(n == 0) {
		n++;
		std::cout << tesq << "    ";       
	} else if(n == 1) {
		n++;
		std::cout << " " << tesq << "   ";
	} else if(n == 2) {
		n = 0;
		std::cout << "    " << tesq;
 	}
	return 0;
}	


int chors(int i, char tesq) {
	static int n = 0;
	if(n == 0) {
		n++;
		std::cout << tesq << " " << tesq << "  ";       
	} else if(n == 1) {
		n++;
		std::cout << "     ";
	} else if(n == 2) {
		n = 0;
		std::cout << tesq << " " << tesq << "  ";
 	}
	return 0;
}	


int hing(int i, char tesq) {
	static int n = 0;
	if(n == 0) {
		n++;
		std::cout << tesq << " " << tesq << "  ";       
	} else if(n == 1) {
		n++;
		std::cout << " " << tesq << "   ";
	} else if(n == 2) {
		n = 0;
		std::cout << tesq << " " << tesq << "  ";
 	}
	return 0;
}	


int vec(int i, char tesq) {
	static int n = 0;
	if(n == 0) {
		n++;
		std::cout << tesq << " " << tesq << "  ";       
	} else if(n == 1) {
		n++;
		std::cout << tesq << " " << tesq << "  ";  
	} else if(n == 2) {
		n = 0;
		std::cout << tesq << " " << tesq << "  ";  
 	}
	return 0;
}	

//-----------------------------------------------------------------

int main() {
 	int z1, z2, z3, z4, z;
	int k1, k2, k3, k4, k;
	char tesq;
	std::cout << "nermuceq simvol@ vorov petq e nkarvi zar@:::  ";
        std::cin >> tesq;
	z = rand() % 6 + 1;	
	z1 = rand() % 6 + 1;
	z2 = rand() % 6 + 1;
	z3 = rand() % 6 + 1;
	z4 = rand() % 6 + 1;
	k = rand() % 6 + 1;
	k1 = rand() % 6 + 1;
	k2 = rand() % 6 + 1;
	k3 = rand() % 6 + 1;	
	k4 = rand() % 6 + 1;
	
        

}








































