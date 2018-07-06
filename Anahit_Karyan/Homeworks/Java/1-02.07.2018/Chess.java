//import java.until.Scanner;

//public class Figurs {
//	public color;
//	public x;
//	public y;
	
//}

public class Chess
{
	public static void main(String[] args) {
		char[][] board = { 
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            };
        defaultBoarder(board);
        printBoarder(board);
        ReadFile(fileCord);
        }
    public static void defaultBoarder(char[][] board) {
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                board[7][0] = '\u2656';
                board[7][7] = '\u2656';
                board[7][1] = '\u2658';
                board[7][6] = '\u2658';
                board[7][2] = '\u2657';
                board[7][5] = '\u2657';
                board[7][3] = '\u2655';
                board[7][4] = '\u2654';
                board[0][0] = '\u265C';
                board[0][7] = '\u265C';
                board[0][1] = '\u265E';
                board[0][6] = '\u265E';
                board[0][2] = '\u265D';
                board[0][5] = '\u265D';
                board[0][3] = '\u265B';
                board[0][4] = '\u265A';
                if (i == 1) {
                    board[i][j] = '\u265F';
                }
                if (i == 6) {
                    board[i][j] = '\u2659';
                }
	     }
        }
    }
    

    public static void printBoarder(char[][] board) {
        int k = 8;
        System.out.print("   _______________________________");
        System.out.print("\n");
        for (int i = 0; i < 8; ++i) {
            System.out.print(k);
            k--;  
            for (int j = 0; j < 8; ++j) {
                System.out.print( " | ");
                System.out.print(board[i][j]);
            }
            System.out.print(" | ");
            System.out.print("\n");
            System.out.print("  |___|___|___|___|___|___|___|___|");
            System.out.print("\n");
        }
	     System.out.print("    A   B   C   D   E   F   G   H");
             System.out.print("\n");
  
    }
   
  
	public static String ReadFile(String fileCord) throws FileNotFoundException {
    //obyekt tox sargelu hamar
    StringBuilder sb = new StringBuilder();

    exists(fileCord);

    try {
        //obyekt file kardalu hamar bufer
        BufferedReader in = new BufferedReader(new FileReader( file.getAbsoluteFile()));
        try {
            //ciklum tox tox karfum enq filey
            String s;
            while ((s = in.readLine()) != null) {
                sb.append(s);
                sb.append("\n");
            }
        } finally {
            //pakum enq filey
            in.close();
        }
    } catch(IOException e) {
        throw new RuntimeException(e);
    }

    //veradarcnum enq filic stacac text@
    return sb.toString();
}


   

    
}
