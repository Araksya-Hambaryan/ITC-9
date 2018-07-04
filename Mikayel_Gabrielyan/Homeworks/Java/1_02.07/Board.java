import java.util.Scanner;
public class Board {
    public static char[][] board = { 
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            };
    public static void defaultBoard() {
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                board[0][0] = 'r';
                board[0][7] = 'r';
                board[0][1] = 'h';
                board[0][6] = 'h';
                board[0][2] = 'b';
                board[0][5] = 'b';
                board[0][3] = 'q';
                board[0][4] = 'k';
                board[7][0] = 'R';
                board[7][7] = 'R';
                board[7][1] = 'H';
                board[7][6] = 'H';
                board[7][2] = 'B';
                board[7][5] = 'B';
                board[7][3] = 'Q';
                board[7][4] = 'K';
                if (i == 1) {
                    board[i][j] = 'p';
                }
                if (i == 6) {
                    board[i][j] = 'P';
                }
            }
        }
    }
    public static void printBoard() {
        System.out.print("  ________________________________");
        System.out.print("\n");
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                System.out.print(" | ");
                System.out.print(board[i][j]);
            }
            System.out.print(" | ");
            System.out.print("\n");
            System.out.print(" |___|___|___|___|___|___|___|___|");
            System.out.print("\n");
        }
    }
    public static char getSimb(int x, int y) {
        return board[x][y];
    }
    public static void remove(int x, int y) {
        board[x][y] = ' ';
    }
    public static void add(int x, int y, char simb) {
        board[x][y] = simb;
    }
    public static boolean validCoord(int x, int y) {
        if(x < 0 || x > 7 || y < 0 || y > 7 ) {
            return false;
        } else {
            return true;
        }
    }
}
