import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Board.defaultBoard();
        Board.printBoard();
        Scanner in = new Scanner(System.in);
        int a = 5;
        while(a > 0) {
            int firstX = in.nextInt();
            int firstY = in.nextInt();
            int secondX = in.nextInt();
            int secondY = in.nextInt();
            Pawn.step(firstX, firstY, secondX, secondY);
            Board.printBoard();
            a--;
        }
    }
}