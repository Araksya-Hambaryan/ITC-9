import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Board.defaultBoard();
        Board.printBoard();
        char check = ' ';
        Scanner in = new Scanner(System.in);
        while(check != 'k' || check != 'K') {
            System.out.println("Mutqagrel koordinatner@:");
            String str = in.next();
            int firstX = str.charAt(1);
            firstX -= 49;
            int firstY = str.charAt(0);
            firstY -= 65;
            System.out.println("firstX" + firstX);
            System.out.println("firstY" + firstY);
            char simb = Board.getSimb(firstX, firstY);
            if(Board.validCoord(firstX, firstY) == true && simb != ' ') {
                str = in.next();
                int secondX = str.charAt(1);
                secondX -= 49;
                int secondY = str.charAt(0);
                secondY -= 65;
                System.out.println("secondX" + secondX);
                System.out.println("secondY" + secondY);
                if(Board.validCoord(secondX, secondY) == true) {
                    check = Board.getSimb(secondX, secondY);
                    if(simb == '\u265F' || simb == '\u2659') {
                        Pawn.step(firstX, firstY, secondX, secondY);
                        Board.printBoard();
                    } else if(simb == '\u265C' || simb == '\u2656') {
                        Rook.step(firstX, firstY, secondX, secondY);
                        Board.printBoard();
                    } else if(simb == '\u265D' || simb == '\u2657') {
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