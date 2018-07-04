import java.util.*;

public class Board {
    private char[][] m_board;
    public Board() {
        m_board = new char[8][8];
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                m_board[i][j] = ' ';   
            }
        }
    }    
        
    public void initDefaultBorder() {   
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                if (i == 1) {
                    m_board[i][j] = 'p';
                }
                if (i == 6) {
                    m_board[i][j] = 'P';
                }
                m_board[0][0] = 'r';
                m_board[0][7] = 'r';
                m_board[7][0] = 'R';
                m_board[7][7] = 'R';
                m_board[0][1] = 'h';
                m_board[0][6] = 'h';
                m_board[7][1] = 'H';
                m_board[7][6] = 'H';
                m_board[0][2] = 'b';
                m_board[0][5] = 'b';
                m_board[7][2] = 'B';
                m_board[7][5] = 'B';
                m_board[0][3] = 'q';
                m_board[7][3] = 'Q';
                m_board[0][4] = 'k';
                m_board[7][4] = 'K';
            }
        }
    }

    public void initBoardWithCoordinates(List <String> listOfCoordinates) {
        int sizeOfList = listOfCoordinates.size();
        if (sizeOfList < 1 || sizeOfList > 32) {
            System.out.println("\nIncorect count of coordinate! Coordiante can be [1-32]");
            return;
        }
        for (int i = 0; i < sizeOfList; ++i) {
            String coordinateAndFigure = listOfCoordinates.get(i);
            char figure = ' ';
            int x = 0;
            int y = 0;
            try {
                figure = coordinateAndFigure.charAt(0);
                x = coordinateAndFigure.charAt(2) - '0';
                y = coordinateAndFigure.charAt(4) - '0';
                if (x > 7 || x < 0 || y > 7 || y < 0) {
                    throw new IncorectCooddinateException();
                }
            } catch (StringIndexOutOfBoundsException e) {
                System.out.println("\n\nString index out Of size!");
                System.exit(1);
            } catch (IncorectCoordinateException e) {
                System.out.println("\n\n"+e.getMessage());
                return;
            }
            if (m_board[x][y] != ' ') {
                System.out.println("Invalid coordinate! That coordinate already used");
                return;
            }
            m_board[x][y] = figure;
        }
    }

    public void printBoard() {
        int row = 7;
        System.out.println("\n     A   B   C   D   E   F   G   H");
        System.out.print("    ________________________________\n");
        for (int i = 0; i < 8; ++i) {
            System.out.print(row+" ");
            for (int j = 0; j < 8; ++j) {
               System.out.print(" | ");
               System.out.print(m_board[i][j]);
            }
            System.out.print(" |");
            System.out.print("\n   |___|___|___|___|___|___|___|___|\n");
            --row;
        }  
    }
}
