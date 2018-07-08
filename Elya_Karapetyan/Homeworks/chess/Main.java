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
            System.out.println("\n\nFile does not exist! Default coordinate: K 58 3");
            listOfCoordinates.add("K 5 3");
        }
    }

    public static void main(String[] args) {

        Board b = new Board();
        List<String> listOfCoordinates = new ArrayList<String>();
        readCoordinatesFromFile(listOfCoordinates);
        b.clearBoard();
        b.initBoard(listOfCoordinates);
        b.printBoard();
    }
}
