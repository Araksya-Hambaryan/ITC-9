public class Board {

    public void defaultBorder(char[][] border) {
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                border[0][0] = 'r';
                border[0][7] = 'r';
                border[0][1] = 'h';
                border[0][6] = 'h';
                border[0][2] = 'b';
                border[0][5] = 'b';
                border[0][3] = 'q';
                border[0][4] = 'k';
                border[7][0] = 'R';
                border[7][7] = 'R';
                border[7][1] = 'H';
                border[7][6] = 'H';
                border[7][2] = 'B';
                border[7][5] = 'B';
                border[7][3] = 'K';
                border[7][4] = 'Q';
                if (i == 1) {
                    border[i][j] = 'p';
                }
                if (i == 6) {
                    border[i][j] = 'P';
                }
            }
        }
    }
    public void printBorder(char[][] border) {
        System.out.print("  ________________________________");
        System.out.print("\n");
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                System.out.print(" | ");
                System.out.print(border[i][j]);
            }
            System.out.print(" | ");
            System.out.print("\n");
            System.out.print(" |___|___|___|___|___|___|___|___|");
            System.out.print("\n");
        }
    }
}
