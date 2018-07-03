import java.util.Scanner;

public class Border {
    public static void defaultBorder(char[][] border) {
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
    
   public static boolean isValidCoordinate(char[][] border, char figure) {
        System.out.print("Enter x: ");
        int x = new Scanner(System.in).nextInt();
        System.out.print("Enter y: ");
        int y = new Scanner(System.in).nextInt();
        if (x > 7 || x < 0 || y > 7 || y < 0) {
            System.out.println("Invalid coordinate! Coordinate can be [0-7]");
            return false;
        }
        if (border[x][y] != ' ') {
            System.out.println("Invalid coordinate! That coordinate already used");
            return false;
        }
        border[x][y] = figure;
        return true;
   }

   public static boolean coordinateFigures(char[][] border, String figureName, int count) {
       System.out.println("===Coordinates of "+figureName+" ===");
       for (int i = 0; i < count; ++i) {
           System.out.println(i+"-th "+figureName);
           if (!isValidCoordinate(border, figureName.charAt(0))) {
               return false;
           }
       }
       return true;
   }

   public static boolean insertFiguresInBorder(char[][] border) {
        if (!coordinateFigures(border, "pawn", 8)) {
            return false;
        }
        if (!coordinateFigures(border, "rook", 2)) {
            return false;
        }
        if (!coordinateFigures(border, "bishop", 2)) {
            return false;
        }
        if (!coordinateFigures(border, "king", 1)) {
            return false;
        }
        if (!coordinateFigures(border, "queen", 1)) {
            return false;
        }
        return true;
   }

   public static void printBorder(char[][] border) {
        int row = 7;
        System.out.println("     A   B   C   D   E   F   G   H");
        System.out.print("    ________________________________");
        System.out.print("\n");
        for (int i = 0; i < 8; ++i) {
                System.out.print(row+" ");
            for (int j = 0; j < 8; ++j) {
                System.out.print(" | ");
                System.out.print(border[i][j]);
            }
            System.out.print(" |");
            System.out.print("\n");
            System.out.print("   |___|___|___|___|___|___|___|___|");
            System.out.print("\n");
            --row;
        }
    }
}
