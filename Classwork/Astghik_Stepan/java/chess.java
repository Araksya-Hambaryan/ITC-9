public class chess {
    public static void main(String[] args) {
        Soldier s1 = new Soldier();
        System.out.println(s1.color);
        Board b1 = new Board();
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                b1.board[i][j]= 'x';
                System.out.print(b1.board[i][j]);
            }
            System.out.println();
        }
    }
}
         
        
 


