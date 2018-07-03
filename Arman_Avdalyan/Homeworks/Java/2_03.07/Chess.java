/* Board.java */
import java.util.Scanner;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.File;
import java.io.IOException;
import java.io.FileNotFoundException;

public class Chess {
    public static void main (String[] args) {
        printHeading();
        Board b = new Board();
        if (getVariant() == 'D') {
            b.setDefault();
            b.printBoard();
        } else {
            byCoordinates(b);
        }
    }

    private static void printHeading() {
        System.out.println("Hello!!!");
        System.out.println("Uppercase letters are black figures and lowercases are white. ");
        System.out.println("If yow want to set figures by default input D.");
        System.out.println("If yow want to set figures by coordinates input C : ");
    }

    private static char getVariant() {
        char variant = ' ';
        Scanner sc = new Scanner(System.in);
        variant = sc.next().charAt(0);
        while (variant != 'D' && variant != 'C') {
            System.out.println("Please input D(default) or C(by coordinates) : ");
            variant = sc.next().charAt(0);
        }
        return variant;
    }

    private static void byCoordinates(Board b) {
        System.out.println("OK. Here are the figures \nKing(K,k)\nQueen(Q,q)\nRook(R,q)\nBishop(B,b)\nKnigh(H,h)\nPawn(P,p)");
        int countOfFigures = 32;
        int[] xCoord = new int[countOfFigures];
        int[] yCoord = new int[countOfFigures];
        char[] figures = new char[countOfFigures];
        int index = 0;
        int x = 0;
        int y = 0;
        char tmpX = ' ';
        char tmpFig = ' ';
        char color = ' ';
        File file = new File("coordinates.txt");
        BufferedReader reader = null;
        String line = null;
        String[] splitArr;
        try {
            reader = new BufferedReader(new FileReader(file));
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
        Figure fig;
        try {
            while ((line = reader.readLine()) != null) {
                splitArr = line.split("\\s+");
                try {
                    tmpFig = splitArr[0].charAt(0);
                    x = (int)(splitArr[1].charAt(0) - '0' - ('A' - '1'));
                    y = (int)(splitArr[2].charAt(0) - '0');
                } catch(ArrayIndexOutOfBoundsException e) {
                    return;
                }
                ++index;
                if (tmpFig > 'a') {
                    color = 'w';
                } else {
                    color = 'b';
                }
                if (tmpFig == 'K' || tmpFig == 'k') {
                    fig = new King(color, x, y);
                } else if (tmpFig == 'Q' || tmpFig == 'q') {
                    fig = new Queen(color, x, y);
                } else if (tmpFig == 'R' || tmpFig == 'r') {
                    fig = new Rook(color, x, y);
                } else if (tmpFig == 'B' || tmpFig == 'b') {
                    fig = new Bishop(color, x, y);
                } else if (tmpFig == 'H' || tmpFig == 'h') {
                    fig = new Knight(color, x, y);
                } else {
                    fig = new Pawn(color, x, y);
                }
                b.setByCoordinates(fig);
            }
        }catch (IOException e) {
            e.printStackTrace();
        }
        b.printBoard();
    }

    private static boolean checkFigures(char[] figures, char fig) {
        int count = 0;
        char[] figArray = {'K', 'Q', 'R', 'B', 'H', 'P', 'k', 'q', 'r', 'b', 'h', 'p'};
        for (char item : figArray) {
            if (item == fig) {
                ++count;
                break;
            }
        }
        if (count == 0) {
            System.out.println("\nYou inputed incorrect figure. ");
            return false;
        }
        count = 0;
        for (char item : figures) {
            if (item == fig) {
                ++count;
            }
            if ((item == 'K' && fig == 'K' || item == 'k' && fig == 'k' )|| item == 'Q' && fig == 'Q' || item == 'q' && fig == 'q') {
                System.out.println("\nFigure already exists. ");
                return false;
            }
        }
        if (count >= 8 && (fig == 'P' || fig == 'p')) {
            System.out.println("\nFigures already exists. ");
            return false;
        }
        if (count >= 2 && fig != 'P' && fig != 'p') {
            System.out.println("\nFigures already exists. ");
            return false;
        }
        return true;
    }

    private static boolean checkCoordinates(int[] xCoord, int[] yCoord, int x, int y, int size) {
        if (x < 1 || x > 8 || y < 1 || y > 8) {
            System.out.println("\nWrong coordinates:Input again. ");
            return false;
        }
        for (int i = 0; i < size; ++i) {
            if (xCoord[i] == x && yCoord[i] == y) {
                System.out.println("\nThere is a figure. Please input another coordinates.");
                return false;
            }
        }
        return true;
    }
}
