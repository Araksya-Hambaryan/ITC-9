import java.io.*;
public class chess {
    public static void main(String[] args) throws IOException {
        Board b1 = new Board();
        b1.arrangeStones();
        b1.pieceStep('w', 1, 2);
        b1.pieceStep('b', 6, 3);
        b1.printBoard();
        b1.putFigure('Q', 4, 4);
        b1.printBoard();
        Soldier s1 = new Soldier();

        /**read file**/

        try {
            File file = new File("input.txt");
            FileReader fileReader = new FileReader(file);
            BufferedReader bufferedReader = new BufferedReader(fileReader);
//            StringBuffer stringBuffer = new StringBuffer();
            String line;
            while ((line = bufferedReader.readLine()) != null) {
                char[] chars = line.toCharArray();
                char fig = chars[0];
                char chx = chars[1];
                char chy = chars[2];
                int x = Character.getNumericValue(chx);
                int y = Character.getNumericValue(chy);
                System.out.println("x = "+x);
                System.out.println("y = "+y);
                b1.putFigure( fig, x, y);
            } 
            b1.printBoard();
            fileReader.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
         
        
 


