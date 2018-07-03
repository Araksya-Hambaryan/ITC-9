public class Board {
    public char board[][] = new char[8][8];
    
    Board() {
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                this.board[i][j]= 'x';
            }
        }
    }
 
    public void arrangeStones() {
        for (int j = 0; j < 8; j++) {
            this.board[1][j]= 'P';
            this.board[6][j]= 'p';
        }
        this.board[0][0]= 'R';
        this.board[0][7]= 'R';
        this.board[7][0]= 'r';
        this.board[7][7]= 'r';
        this.board[0][1]= 'N';
        this.board[0][6]= 'N';
        this.board[7][1]= 'n';
        this.board[7][6]= 'n';
        this.board[0][2]= 'B';
        this.board[0][5]= 'B';
        this.board[7][2]= 'b';
        this.board[7][5]= 'b';
        this.board[0][3]= 'Q';
        this.board[0][4]= 'K';
        this.board[7][3]= 'k';
        this.board[7][4]= 'q';
    }
    
    public void pieceStep(char color, int x, int y) {
        this.board[x][y] = 'x';
        if ( color == 'w') {
            this.board[x+2][y] = 'P';
        } else {
            this.board[x-2][y] = 'p';
        }
    }
    
    public void printBoard() {
        System.out.println();
        for (int i = 0; i < 8; i++) {
            System.out.print(i+1);
            System.out.print("  ");
            for (int j = 0; j < 8; j++) {
                System.out.print(this.board[i][j]);
                System.out.print(" ");
            }
            System.out.println();
        }
        System.out.println();
        System.out.println("   A B C D E F G H");
        System.out.println();
    }
}
