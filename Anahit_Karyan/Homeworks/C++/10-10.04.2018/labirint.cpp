#include <iostream>

bool canMove(char matrix[12][12], int x, int y) {

	if ( 0 > x > 11 || 0 > y > 11  || matrix[x][y] == '#') {

		return true;

	}
	return false;


}

bool travers(char matrix[12][12], int x, int y, char dir) {


	if (4 == x && 11 == y) {

		return true;

	} else if(2 == x && 0 == y) {

		return false;

	}


	if(dir == 'v') {

		if(canMove(matrix, x, y-1)) {
			travers(matrix, x, y-1, 'v');

		}else if(canMove(matrix, x+1, y) ) {
			travers(matrix, x+1, y, '>');

		} else   if(canMove(matrix, x, y+1)) {
			travers(matrix, x, y+1, '^');

		} else {

			travers(matrix, x-1, y, '<');
		}

	} 

	if(dir == '>') {

		if(canMove(matrix, x +1, y)) {
			travers(matrix, x + 1, y, '>');

		} else if(canMove(matrix, x , y +1))  {
			travers(matrix, x, y +1, '^');

		} else   if(canMove(matrix, x, y -1)) {
			travers(matrix, x, y-1, 'v');

		} else {

			travers(matrix, x-1, y, '<');
		}
	} 

	if(dir == '^') {

		if(canMove(matrix, x , y + 1)) {
			travers(matrix, x , y + 1, '^');

		} else if(canMove(matrix, x , y -1) ) {
			travers(matrix, x, y -1, 'v');

		} else   if(canMove(matrix, x + 1, y )) {
			travers(matrix, x +1, y, '>');

		} else {

			travers(matrix, x-1, y, '<');
		}
	} 

	if(dir == '<') {

		if(canMove(matrix, x -1 , y )) {
			travers(matrix, x -1 , y , '<');

		}else if(canMove(matrix, x , y -1) ) {
			travers(matrix, x, y -1, 'v');

		} else   if(canMove(matrix, x + 1, y )) {
			travers(matrix, x +1, y, '>');

		} else {

			travers(matrix, x, y +1 , '^');
		}
	}
}
void printLabirint(char matrix[12][12]) {
	matrix[2][0] = 'X';
	for(int i = 0; i < 12; i++) {
		for(int j = 0; j < 12; j++) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}


int main() {

	char labirint[12][12] = {
		{'#','#','#','#','#','#','#','#','#','#','#','#'},

		{'#','.','.','.','#','.','.','.','.','.','.','#'},

		{'.','.','#','.','#','.','#','#','#','#','.','#'},

		{'#','#','#','.','#','.','.','.','.','#','.','#'},

		{'#','.','.','.','.','#','#','#','.','#','.','.'},

		{'#','#','#','#','.','#','.','#','.','#','.','#'},

		{'#','.','.','#','.','#','.','#','.','#','.','#'},

		{'#','#','.','#','.','#','.','#','.','#','.','#'},

		{'#','.','.','.','.','.','.','.','.','#','.','#'},

		{'#','#','#','#','#','#','.','#','#','#','.','#'},

		{'#','.','.','.','.','.','.','#','.','.','.','#'},

		{'#','#','#','#','#','#','#','#','#','#','#','#'}

	};

	if(travers(labirint,4,11,'v')){
		std::cout << "Hasel e elqin" << std::endl;
		printLabirint( labirint);
	}
	return 0;
}



