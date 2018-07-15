import java.util.*;

public class Board {
    private Figure[][] m_board;
    public Board() {
        defaultBoard();
    }    
    
    public void defaultBoard() {
        m_board = new Figure[8][8];
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) { 
                if (i > 1 && i < 6) {
                    m_board[i][j] = new Figure();
                    m_board[i][j].setName(' ');
                }
                if (i == 1) {
                    m_board[i][j] = new Pawn(i, j, '\u265F', 'w');
                }
                if (i == 6) {
                    m_board[i][j] = new Pawn(i, j, '\u2659', 'b');
                }
                m_board[0][0] = new Rook(0, 0, '\u265C', 'w');
                m_board[0][7] = new Rook(0, 7, '\u265C', 'w');
                m_board[7][0] = new Rook(7, 0, '\u2656', 'b');
                m_board[7][7] = new Rook(7, 7, '\u2656', 'b');
                m_board[0][1] = new Horse(0, 1, '\u265E', 'w');
                m_board[0][6] = new Horse(0, 6, '\u265E', 'w');
                m_board[7][1] = new Horse(7, 1, '\u2658', 'b');
                m_board[7][6] = new Horse(7, 6, '\u2658', 'b');
                m_board[0][2] = new Bishop(0, 2, '\u265D', 'w');
                m_board[0][5] = new Bishop(0, 5, '\u265D', 'w');
                m_board[7][2] = new Bishop(7, 2, '\u2657', 'b');
                m_board[7][5] = new Bishop(7, 5, '\u2657', 'b');
                m_board[0][3] = new Queen(0, 3, '\u265B', 'w');
                m_board[7][3] = new Queen(7, 3, '\u2655', 'b');
                m_board[0][4] = new King(0, 4, '\u265A', 'w');
                m_board[7][4] = new King(7, 4, '\u2654', 'b');
            }
        }    
    }

    public void initBoard(List <String> listOfCoordinates) {
        int sizeOfList = listOfCoordinates.size();
        if (sizeOfList < 1 || sizeOfList > 32) {
            System.out.println("\nIncorect count of coordinate! Coordiante can be [1-32]");
            return;
        }
        for (int i = 0; i < sizeOfList; ++i) {
            String coordinateAndFigure = listOfCoordinates.get(i);
            char name = ' ';
            char color = ' ';
            int x = 0;
            int y = 0;
            try {
                name = coordinateAndFigure.charAt(0);
                color = coordinateAndFigure.charAt(2);
                x = coordinateAndFigure.charAt(4) - '0';
                y = coordinateAndFigure.charAt(6) - '0';
                if (x > 7 || x < 0 || y > 7 || y < 0) {
                    System.out.println("\nIncorect coordinate, Coordinate can be [0-7]\n");
                }
            } catch (StringIndexOutOfBoundsException e) {
                System.out.println("\n\nString index out Of size!");
            }
            if (m_board[x][y].getName() != ' ') {
                System.out.println("Invalid coordinate! That coordinate already used");
                return;
            }
            char img = getFigureImage(name);
            m_board[x][y].setName(img);
        }
    }


    public char getFigureImage(char name) {
        switch(name) {
            case 'p': // spitak
                return '\u265F';
            case 'P': // sev
                return '\u2659';
            case 'k':
                return '\u265A';
            case 'K':
                return '\u2654';
            case 'q':
                return '\u265B';
            case 'Q':
                return '\u2655';
            case 'b':
                return '\u265D';
            case 'B':
                return '\u2657';
            case 'h':
                return '\u265E';
            case 'H':
                return '\u2658';
            case 'r':
                return '\u265C';
            case 'R':
                return '\u2656';
            default:
                return '0';
        }
    }


    public void clearBoard() {
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) { 
                m_board[i][j].setName(' ');
            }
        }
    }

    public void printBoard() {
        int row = 8;
        System.out.println("\n     A   B   C   D   E   F   G   H");
        System.out.print("    ________________________________\n");
        for (int i = 0; i < 8; ++i) {
            System.out.print(row+" ");
            for (int j = 0; j < 8; ++j) {
                System.out.print(" | ");
                System.out.print(m_board[i][j].getName());
            }
            System.out.print(" |");
            System.out.print("\n   |___|___|___|___|___|___|___|___|\n");
            --row;
        } 
        System.out.println("\n\n");  
    }
}
