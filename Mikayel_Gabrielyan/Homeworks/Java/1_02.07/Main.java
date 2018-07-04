import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Board.defaultBoard();
        Board.printBoard();
        char check = ' ';
        Scanner in = new Scanner(System.in);
        while(check != 'k' || check != 'K') {
            System.out.println("Mutqagrel koordinatner@:");
            int firstX = in.nextInt();
            int firstY = in.nextInt();
            char simb = Board.getSimb(firstX, firstY);
            if(Board.validCoord(firstX, firstY) == true && simb != ' ') {
                int secondX = in.nextInt();
                int secondY = in.nextInt();
                if(Board.validCoord(secondX, secondY) == true) {
                    check = Board.getSimb(secondX, secondY);
                    if(simb == 'p' || simb == 'P') {
                        Pawn.step(firstX, firstY, secondX, secondY);
                        Board.printBoard();
                    } else if(simb == 'r' || simb == 'R') {
                        Rook.step(firstX, firstY, secondX, secondY);
                        Board.printBoard();
                    } else if(simb == 'b' || simb == 'B') {
                        Bishop.step(firstX, firstY, secondX, secondY);
                        Board.printBoard();
                    } else {
                        System.out.println("Sxal @ntrutyun");
                    } 
                } else {
                System.out.println("Sxal mutqagrum");
                }
            } else {
                System.out.println("Sxal koordinati mutqagrum");
            } 
        }
    }
}