import java.util.Scanner;

public class chess {
    public static void defaultBorder(char border[][]) {
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                if (i == 1) {
                    border[i][j] = 'p';
                } 
                if (i == 6) {
                    border[i][j] = 'P';
                }
                border[0][0] = 'r';
                border[0][7] = 'r';
                border[7][0] = 'R';
                border[7][7] = 'R';
                border[0][1] = 'h';// dzi
                border[0][6] = 'h';
                border[7][1] = 'H';
                border[7][6] = 'H';
                border[0][2] = 'b';
                border[0][5] = 'b';
                border[7][2] = 'B';
                border[7][5] = 'B';
                border[0][3] = 'q';
                border[7][3] = 'Q';
                border[0][4] = 'k';
                border[7][4] = 'K';
            }
        }
    }
    
   /* public static void borderWithCoordinate(char border[][], int x, int y) {
        if (x > 7 || x < 0 || y > 7 || y < 0) {
            System.out.println("Invalid coordinate! Coordinate can be [0-7]");
        }
        for (int i = 0; i < 16; ++i) {
            System.out.println("Enter x");
            int x = new Scanner(System.in).nextInt();
        }
        
    }*/
   
    public static void printBorder(char border[][]) {
        System.out.print("  ________________________");
        System.out.print("\n");
        for (int i = 0; i < 8; ++i) {
                System.out.print(i);
            for (int j = 0; j < 8; ++j) {
                System.out.print("| ");
                System.out.print(border[i][j]);
            }
            System.out.print("\n");
            System.out.print(" |__|__|__|__|__|__|__|__|");
            System.out.print("\n");
        }
    }

    public static void main(String[] args) { 
        char[][] border = { 
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            };
        
        System.out.println("1 - default, 2 - with coordinate");
        int option = new Scanner(System.in).nextInt();
        if ( option == 1 ) {
            defaultBorder(border);
            printBorder(border);
        }
    }
}
