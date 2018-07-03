import java.util.Scanner;
import java.lang.Math.*;

public class Pawn {
    private int x;
    private int y;
    public static boolean step(char[][] border, int currentX, int currentY, int goX, int goY) {
        if (currentX > 7 || currentX < 0 || currentY > 7 || currentY < 0 || goX > 7 || goX < 0 || goY > 7 || goY < 0 ) {
             System.out.println("Invalid coordinate! Coordinate can be [0-7]");
             return false;

        }
        System.out.println("current= "+border[currentX][currentY]);
        if (border[currentX][currentY] != 'p' || border[currentX][currentY] != 'P' )  {
            System.out.println("Invalid coordinate! In that coordinate there isn't pawn!");
            return false;
        }
        if (goX != currentX && (Math.abs(goY - currentY) != 1 || Math.abs(goY - currentY) != 2)) {
            System.out.println("Invalid coordinate! In that coordinate there isn't pawn!");
            return false;
        } 
        System.out.println(border[currentX][currentY]);
        System.out.println( border[goX][goY]);
        if (border[currentX][currentY] == 'p') {
            border[goX][goY] = 'p';
        }
        if (border[currentX][currentY] == 'P') {
            border[goX][goY] = 'P';
        }
        border[currentX][currentY] = ' ';
        return true;
    }

    public static void movePawn(char[][] border) {
        System.out.print("Enter current x: ");
        int currentX = new Scanner(System.in).nextInt();
        System.out.print("Enter current y: ");
        int currentY = new Scanner(System.in).nextInt();
        System.out.print("Enter go x: ");
        int goX = new Scanner(System.in).nextInt();
        System.out.print("Enter go y: ");
        int goY = new Scanner(System.in).nextInt();
        step(border, currentX, currentY, goX, goY);
    }
}
