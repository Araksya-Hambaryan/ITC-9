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
        int[] tmpX = {3, 7, 11, 15, 19, 23, 27, 30};    // values x and y on the board
        int[] tmpY = {2, 5, 8, 11, 14, 17, 20, 23};
        return board[tmpY[y - 1]][tmpX[x - 1]];
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
        char[] blackFigures = {'\u2656', '\u2657', '\u2658', '\u2655'};
        char[] whiteFigures = {'\u265C', '\u265D', '\u265E', '\u265B'};
        for (int i = 0, j = 3; i < 4; ++i, j+=4) {
            board[2][j] = blackFigures[i];
            board[2][size - j] = blackFigures[i];
            board[height - 2][j] = (whiteFigures[i]);
            board[height - 2][size - j] = (whiteFigures[i]);
        }
        board[2][size - 15] = '\u2654';
        for (int i = 0, j = 3; i < 8; ++i, j+=4) {
            board[5][j] = '\u2659';
            board[height - 5][j] = '\u265F';
        }
        board[height - 2][size - 15] = '\u265A';
    }

    public void setByCoordinates(Figure figure) {
        int[] tmpX = {3, 7, 11, 15, 19, 23, 27, 30};    // values x and y on the board
        int[] tmpY = {2, 5, 8, 11, 14, 17, 20, 23};
        int x = figure.getX();
        int y = figure.getY();
        for (int i = 0; i < 8; ++i) {
            board[tmpY[y - 1]][tmpX[x - 1]] = figure.getSymbol();
        }
    }
}
