import java.util.*;

public class main {
    public static void main(String[] args) { 
        char[][] border = { {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                          };
        Border bord = new Border();
        bord.printBorder(border);
        System.out.println("1 - default, 2 - with coordinate");
        int option = new Scanner(System.in).nextInt();
        if ( option == 1 ) {
            bord.defaultBorder(border);
            bord.printBorder(border);
        }
        if (option == 2) { 
            if (bord.insertFiguresInBorder(border)) {
                 bord.printBorder(border);
            }
        }
        System.out.println("=====Move the pawn=====");
        Pawn pawn = new Pawn();
        pawn.movePawn(border);
    }
}
