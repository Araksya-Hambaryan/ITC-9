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
            StringBuffer stringBuffer = new StringBuffer();
            String line;
            while ((line = bufferedReader.readLine()) != null) {
                char[] chars = line.toCharArray();
                char fig = chars[0];
                int x = (int)chars[1];
                int y = (int)chars[2];
                System.out.println(fig);
                System.out.println(((Object)fig).getClass().getName());
                System.out.println(x);
                System.out.println(((Object)x).getClass().getName());
                System.out.println(y);
                System.out.println(((Object)y).getClass().getName());



                //b1.putFigure( fig, x, y);
            } 
            fileReader.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
         
        
 


