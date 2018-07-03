public class Board {
    public char board[][] = new char[8][8];
    Board() {
    }
 
    public void arrangeStones() {
        for (int i = 0; i < 8; i++) {
            for (int j = 1; j < 8; j++) {
                this.board[i][j]= 'x';
            }
        }
    }
    public void printBoard() {
        System.out.println();
        for (int i = 0; i < 8; i++) {
            System.out.print(i+1);
            System.out.print(" ");
            for (int j = 0; j < 8; j++) {
                System.out.print(this.board[i][j]);
                System.out.print(" ");
            }
            System.out.println();
        }
        System.out.println();
        System.out.println("   A B C D E F G");
        System.out.println();
    }
}
