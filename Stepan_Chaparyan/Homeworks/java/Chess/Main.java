public class Main {
    public static void main(String[] args) {

	char[][] border = { 
                {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                };

	Board board1 = new Board();
        board1.defaultBorder(border); 
        board1.printBorder(border);

	CurrentGame board2 = new CurrentGame();
        board2.defaultBorder(border); 
        board2.printBorder(border);

        
        
    }
}
