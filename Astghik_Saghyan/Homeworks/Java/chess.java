public class chess {
    public static void main(String[] args) {
        Board b1 = new Board();
        b1.arrangeStones();
        b1.pieceStep('w', 1, 2);
        b1.pieceStep('b', 6, 3);
        b1.printBoard();
        Soldier s1 = new Soldier();
        System.out.println(s1.color);
    }
}
         
        
 


