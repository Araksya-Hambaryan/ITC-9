#include <iostream>

int main() {
    const int rows=12;
    const int columns=12;
    char maze[rows][columns] = {
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
                         {'#','#','#','#','#','#','#','#','#','#','#','#'},
  };
int i = 4;
int j = 11;
// If I go by the same path twice the program marks the path with '&' and moves clockwise
//It prevents the program from sticking in one location.
while (!((i == 2) && (j == 0))) {
  if ((i + 1) < 11 && maze[i + 1][j] == '.') {
    i++;
    maze[i][j] = '*';
  } else if ((j + 1) < 11 && maze[i][j + 1] == '.') {
    j++;
    maze[i][j] = '*';
  } else if ((i - 1) >= 0 && maze[i - 1][j] == '.') {
    i--;
    maze[i][j] = '*';
  } else if ((j - 1) >= 0 && maze[i][j - 1] == '.') {
    j--;
    maze[i][j] = '*';
  } else if ((i - 1) >= 0 && maze[i - 1][j] == '*') {
    i--;
    maze[i][j] = '&';
  } else if ((j + 1) < 11 && maze[i][j + 1] == '*') {
    j++;
    maze[i][j] = '&';
  } else if ((i + 1) < 11 && maze[i + 1][j] == '*') {
    i++;
    maze[i][j] = '&';
  } else if ((j - 1) >= 0 && maze[i][j - 1] == '*') {
    j--;
    maze[i][j] = '&';
  } else if ((i + 1) < 11 && maze[i + 1][j] == '&') {
    i++;
    maze[i][j] = '*';
  } else if ((j + 1) < 11 && maze[i][j + 1] == '&') {
    j++;
    maze[i][j] = '*';
  } else if ((i - 1) >= 0 && maze[i - 1][j] == '&') {
    i--;
    maze[i][j] = '*';
  } else if ((j - 1) >= 0 && maze[i][j - 1] == '&') {
    j--;
    maze[i][j] = '*';
  } else if ((i - 1) >= 0 && maze[i - 1][j] == '&') {
    i--;
    maze[i][j] = '&';
  }
}

std::cout << "Here is the path: \n";
for (int i = 0; i < 12; i++) {
  for (int j = 0; j < 12; j++) {
    std::cout << maze[i][j] << " ";
  }
  std::cout << "\n";
}
std::cout << "The coordinates of the exit are: ";
std::cout << i << ";" << j << "\n";

return 0;
}

