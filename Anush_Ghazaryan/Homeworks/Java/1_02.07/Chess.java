import java.util.Scanner;
import java.util.Arrays;
import java.util.regex.*;

public class Chess {

    public enum Figures {
	emptyBox,whitePawn,whiteKing, whiteQueen, whiteRook, whiteBishop, whiteKnight,  
	blackKing, blackQueen, blackRook, blackBishop, blackKnight, blackPawn
    }
    
    public static void Board (Figures [][] chessBoard) {

        for (int i = 0; i < 8; i++) {
	    for (int j = 0; j < 8; j++) {

	        if (i == 0) {
		    switch (j) {
			case 0:
			case 7:
			    chessBoard[i][j] = Figures.blackRook;
			    break;
			case 1:
			case 6:
			    chessBoard[i][j] = Figures.blackKnight;
			    break;
			case 2:
			case 5:
			    chessBoard[i][j] = Figures.blackBishop;
			    break;
			case 3:
			    chessBoard[i][j] = Figures.blackQueen;
			    break;
			case 4:
			    chessBoard[i][j] = Figures.blackKing;
			    break;
		    }
		} else if (i == 1) {
		    chessBoard[i][j] = Figures.blackPawn;
		}

		else if (i > 1 && i < 6) {
		    chessBoard[i][j] = Figures.emptyBox;
		}

		else if (i == 6) {
		    chessBoard[i][j] = Figures.whitePawn;
		}

		else if (i == 7) {
		    switch (j) {
			case 0:
			case 7:
			    chessBoard[i][j] = Figures.whiteRook;
			    break;
			case 1:
			case 6:
			    chessBoard[i][j] = Figures.whiteKnight;
			    break;
			case 2:
			case 5:
			    chessBoard[i][j] = Figures.whiteBishop;
			    break;
			case 3:
			    chessBoard[i][j] = Figures.whiteQueen;
			    break;
			case 4:
			    chessBoard[i][j] = Figures.whiteKing;
			    break;
		    }
		}
          }

    }

}


    public static void printBoard(Figures[][] chessBoard) {
	char a = 'a';
	System.out.print(" ");
	for (int l = 0; l < 8; l++) {
	    System.out.print(String.format(" %2s", a));
	    a++;
	}
	System.out.println("\r");
		
	for (int i = 0; i < 8; i++) {
	    System.out.print(8-i + ". ");
			
	    for (int j = 0; j < 8; j++) {		
				
		switch (chessBoard[i][j]) {
				
		    case blackPawn:
			System.out.print(" \u265F ");
			break;
		    case blackRook:
			System.out.print(" \u265C ");
			break;
		    case blackKnight:
			System.out.print(" \u265E ");
			break;
		    case blackBishop:
			System.out.print(" \u265D ");
			break;
		    case blackQueen:
			System.out.print(" \u265B ");
			break;
		    case blackKing:
			System.out.print(" \u265A ");
			break;
		    case whitePawn:
			System.out.print(" \u2659 ");
			break;
		    case whiteRook:
			System.out.print(" \u2656 ");
			break;
		    case whiteKnight:
			System.out.print(" \u2658 ");
			break;
		    case whiteBishop:
			System.out.print(" \u2657 ");
			break;
		    case whiteQueen:
			System.out.print(" \u2655 ");
			break;
		    case whiteKing:
			System.out.print(" \u2654 ");
			break;
		    case emptyBox:
			System.out.print(" ");
			break;
		}
	}
		System.out.println("\r");
		}
}
    

    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	Figures[][] board = new Figures[8][8]; 
	Board(board);
	printBoard(board);
						
    }
}


