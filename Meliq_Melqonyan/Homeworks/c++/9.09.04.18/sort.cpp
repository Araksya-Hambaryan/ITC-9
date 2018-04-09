#include <iostream>

int* sort(int(*foo)(int&,int&), int *arr, int size) {
	int* ar = new int [size];
	for(int i = 0; i < size; ++i) {
		ar[i] = arr[i];
	}
	while(size > 1) {
		for(int i = 0; i < size - 1; ++i) {
			foo(ar[i],ar[i + 1]);
		}
		--size;
	}
	int *p = &ar[0];
	return p;
}




int nvazox(int& a, int& b) {
	int k;
	if(a < b) {
		k = a;
		a = b;
		b = k;	
	}
	return 0;
}

int achox(int& a, int& b) {
	int k;
	if(a > b) {
		k = a;
		a = b;
		b = k;	
	}
	return 0;
}

int main() {
	int n;
	std::cout << "nermuceq zangvaci chap@:: ";
	std::cin >> n;
	int a[n];
	for(int i = 0; i < n; ++i) {
		std::cout << "a[" << i << "] = ";
		std::cin >> a[i];
		std::cout << '\n';
	}
    	int* p; 
	std::cout << "nermuceq 1 achman ev 0 nvazman hamar:: ";
	int k;
	std::cin >> k;
       	if(k==1) {
		p =sort(achox, a, n);
	} else if(k == 0) {	
		p =sort(nvazox, a, n);
	}
	for(int i = 0; i < n; ++i) {
		std::cout << *(p++) << "  ";
	}
	return 0;
}
