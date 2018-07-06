class chess {
    public static String chessTable[][] = new String[10][9];
    public static void main(String[] args) {
        defaultChess();
        print(chessTable);
    }
    public static void defaultChess() {
        for (int i=0; i<=9; ++i) {
            for (int j=0; j<=8; ++j) {
                switch ( i ) {
                    case 0:
                        if (j < 8){
                            chessTable[0][j] = "___";
                        } else {
                            chessTable[0][8] = "_";
                        } 
                        break;
                    case 1:  
                        if (j == 0 || j == 7) {
                            chessTable[1][j] = "|R*";
                        } else if (j == 1 || j == 6) {
                            chessTable[1][j] = "|H*";
                        } else if (j == 2 || j == 5 ) {
                            chessTable[1][j] = "|B*";
                        } else if (j == 3 ) {
                            chessTable[1][j] = "|Q*";
                        } else if (j == 4 ) {
                            chessTable[1][j] = "|K*";
                        }
                        break;
                    case 2:
                        chessTable[2][j] = "|S*";
                        break;
                    case 7:
                        chessTable[7][j] = "|S#";
                        break;
                    case 8:
                        if (j == 0 || j == 7) {
                            chessTable[8][j] = "|R#";
                        } else if (j == 1 || j == 6) {
                            chessTable[8][j] = "|H#";
                        } else if (j == 2 || j == 5 ) {
                            chessTable[8][j] = "|B#";
                        } else if (j == 3 ) {
                            chessTable[8][j] = "|K#";
                        } else if (j == 4 ) {
                            chessTable[8][j] = "|Q#";
                        }
                        break;
                    case 9:
                        chessTable[i][j]="---";

                        break;
                    default:
                        chessTable[i][j]="|__";
                        break;
                }
                if ( i > 0 ) {
                    chessTable[i][8] = "|";
                }
            }
        }
    }
    public static void print (String[][] chessTable) {
        for (int i=0; i<=9; ++i) {
            for (int j = 0; j <=8; ++j) {
                System.out.print(chessTable[i][j]);
            }
            System.out.println();
        }
    }
}
