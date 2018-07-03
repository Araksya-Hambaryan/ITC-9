import java.util.*;
import java.io.File;
import java.io.FileNotFoundException;

public class Main {

    public static void readCoordinatesFromFile(List <String> listOfCoordinates) {
         try {
             File file = new File("coordinates.txt");
             Scanner scan = new Scanner(file);
             while (scan.hasNextLine()) {
                listOfCoordinates.add(scan.nextLine());
             }
         } catch (FileNotFoundException exception) {
             System.out.println("\n\nFile does not exist!");
             System.exit(1);
         }
    }

    public static void main(String[] args) {
        Board board = new Board();
        System.out.println("\n==========Chess board==========\n");
        board.printBoard();
        System.out.print("\n\nPress 1 for the default board or 2 - with coordinatei: ");
        int option = new Scanner(System.in).nextInt();
        if ( option == 1 ) {
            board.initDefaultBorder();
            board.printBoard();
            return;
        } 
        if (option == 2) {
            List<String> listOfCoordinates = new ArrayList<String>();
            readCoordinatesFromFile(listOfCoordinates);
            board.initBoardWithCoordinates(listOfCoordinates);
            board.printBoard();
            return;
        }
        return;
    }
}
