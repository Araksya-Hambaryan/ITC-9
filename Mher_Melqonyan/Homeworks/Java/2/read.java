import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;
public class read {
    public static String board[][] = new String[9][9];
    public static void main (String[] args) { 
        drow();
        try {
            get();
        } catch (IOException e) {
            // nothing to catch:)
        }       
    }
    public static void drow(){

        int i; 
        int j;
        for(i = 0; i < 9; ++i){    
            for(j = 0; j < 9; ++j){
                board[i][j] = "|__";
            }
        }
        for( i = 0; i < 9; i++){
            for( j = 0; j < 9; j++){
                System.out.print(board[i][j]);
            }
            System.out.println(" ");
        }
    }
    public static void setFigures( String[][] board, String fig, int xc, int yc) {
        board[xc][yc]="|"+fig;
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                System.out.print(board[i][j]);
            }
            System.out.println(" ");

        }
    }





    public static void get() throws IOException {
        char sp;
        int count=0;
        int xc;
        int yc;
        int len;
        String col;
        String fig;
        String cor;
        String str;
        FileReader fin = new FileReader("inventory.txt");
        Scanner src = new Scanner(fin);
        while (src.hasNext()) {
            ++count;
            if (src.hasNextLine()) {
                str = src.nextLine();
                len=str.length();
                if (len != 9){
                    System.out.println("In line "+count+" input type is false");
                    System.exit(0);
                } else {
                    col = str.substring(0, 2);
                    fig = str.substring(3, 5);
                    cor = str.substring(6, 9);
                    //System.out.println(cor);
                    if (str.charAt(2)==' ' && str.charAt(5)==' ' && str.charAt(7)==' ' ) {
                        xc = Integer.parseInt(String.valueOf(cor.charAt(0)));
                        yc = Integer.parseInt(String.valueOf(cor.charAt(2)));
                        if(xc < 1 || xc > 8 || yc < 1 || yc > 8) {
                            System.out.println("Out of Board");
                            System.exit(0);
                        }else{
                            setFigures(board, fig, xc, yc);
                            System.out.println(" ");
                        }
                    } else {
                        System.out.println("In line "+count+" please add spaces right");
                        System.exit(0);
                    }
                }
            }
        }
        fin.close();
    }
}

