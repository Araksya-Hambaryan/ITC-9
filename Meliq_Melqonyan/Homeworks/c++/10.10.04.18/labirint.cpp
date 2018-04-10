#include <iostream>

bool stugum(char** &arr, int &x, int &y, int size) {
	if((x == size) || (x == 0) || (y == 0) || (y == size)) {
		return true;
	} else if(*arr[x + 1] == '_' || *arr[x + 1] == '*') {
		if(*arr[x + 1] == '_') {
			*arr[x + 1] = '*';
		} else {
			*arr[x + 1] = '_';
		}
		return stugum(arr, ++x, y, size);
	} else if(*arr[x - 1] == '_' || *arr[x - 1] == '*') {
		if(*arr[x - 1] == '_') {
			*arr[x - 1] = '*';
		} else {
			*arr[x - 1] = '_';
		}
		return stugum(arr, --x, y, size);
	} else if(*arr[y + 1] == '_' || *arr[y + 1] == '*') {
		if(*arr[y + 1] == '_') {
			*arr[y + 1] = '*';
		} else {
			*arr[y + 1] = '_';
		}
		return stugum(arr, x, ++y, size);
	} else if(*arr[y - 1] == '_' || *arr[y - 1] == '*') {
		if(*arr[y - 1] == '_') {
			*arr[y - 1] = '*';
		} else {
			*arr[y - 1] = '_';
		}
		return stugum(arr, x, --y, size);
	} else {
		return false;
	}
}

int main() {
	const int size = 5;
	char **arr = new char* [size];
	for(int i = 0; i < size; ++i) {
		arr[i] = new char [size];
	}
	for(int i = 0; i < size; ++i) {
		std::cout << "nermuceq " << i << "-rd tox@";
		for(int j = 0; j < size; ++j) {
			std::cin >> arr[i][j];
		}
		std::cout << '\n';
	}
	int i = 0;
	int j = 0;
	do { 
		std::cout << "vorne mutq@:" << std::endl;
		std::cout << "vor toxum e mutq@::";
		std::cin >> i;
		std::cout << "vor sjunum e na::";
		std::cin >> j;
	} while (arr[i][j] == '#');
	int k = stugum(arr, j, i, size);
	if(k == 1) {
		std::cout << "elq ka" << std::endl;
	} else {
		std::cout << "elq chka" << std::endl;
	}
	for(int i = 0; i < size; ++i) {
		for(int j = 0; j < size; ++j) {
			std::cout << arr[i][j];
		}
		std::cout << '\n';
	}
	for(i = 0; i < size; ++i) {
		delete []arr[i];
	}
	delete []arr;
	return 0;
}















