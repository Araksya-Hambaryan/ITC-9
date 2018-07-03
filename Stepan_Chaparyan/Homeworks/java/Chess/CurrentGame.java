// This is current game in one situation with some figures
public class CurrentGame {

// insert num, char, figure - for example 5 time

    public void defaultBorder(char[][] border) {
      for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            border[i][j] = ' ';
        }   
      }

        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {

                border[0][5] = 'b';
                border[2][3] = 'q';
                border[2][4] = 'k';

                border[4][5] = 'B';
                border[5][3] = 'K';
                border[6][4] = 'Q';
                
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
