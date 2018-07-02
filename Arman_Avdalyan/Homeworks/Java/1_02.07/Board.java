/* Chess.java */

class Board {
    private char[][] board = new char[32][];

    public Board() {
        board[0] = new char[]{' ',' ','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_',};
        board[1] = new char[]{' ','|',' ',' ',' ','|',' ',' ',' ','|',' ',' ',' ','|',' ',' ',' ','|',' ',' ',' ','|',' ',' ',' ','|',' ',' ',' ','|',' ',' ',' ','|'};
        board[2] = board[1].clone();
        board[3] = new char[]{' ','|','_','_','_','|','_','_','_','|','_','_','_','|','_','_','_','|','_','_','_','|','_','_','_','|','_','_','_','|','_','_','_','|'};
        for (int i = 4; i < 24; i+=3) {
            board[i] = board[1].clone(); 
            board[i + 1] = board[2].clone();
            board[i + 2] = board[3].clone();
        }
        for (int i = 2, j = 1; i < 24; i+=3, ++j) {
            board[i][0] = (char)(j + '0');
        }
    }
    
    char getElem(int x, int y) {
        return board[x][y];
    }

    public void printBoard() {
        System.out.println();
        for (int i = 0; i <= 24; ++i) {
            System.out.println(board[i]);
        }
        System.out.println("   A   B   C   D   E   F   G   H");
    }

    public void setDefault() {
        int size = 34;
        int height = 25;
        int toLower = 'a' - 'A';
        char[] tmpArr = {'R', 'B', 'H', 'Q'};
        for (int i = 0, j = 3; i < 4; ++i, j+=4) {
            board[2][j] = tmpArr[i];
            board[2][size - j] = tmpArr[i];
            board[height - 2][j] = (char)(tmpArr[i] + toLower);
            board[height - 2][size - j] = (char)(tmpArr[i] + toLower);
        }
        board[2][size - 15] = 'K';
        board[height - 2][size - 15] = 'k';
        for (int i = 0, j = 3; i < 8; ++i, j+=4) {
            board[5][j] = 'P';
            board[height - 5][j] = 'p';
        }
    }

    public void setByCoordinates(Figure figure) {
        System.out.println("aaa" + figure.getSymbol()); 
        int[] tmpX = {3, 7, 11, 15, 19, 23, 27, 30};    // values x and y on the board
        int[] tmpY = {2, 5, 8, 11, 14, 17, 20, 23};
        int x = figure.getX();
        int y = figure.getY();
        for (int i = 0; i < 8; ++i) {
            board[tmpY[y - 1]][tmpX[x - 1]] = figure.getSymbol();
        }
    }
}
