public class Queen {
    public static boolean step(int x1, int y1, int x2, int y2) {
        char simb1 = Board.getSimb(x1, y1);
        char simb2 = Board.getSimb(x2, y2);
        if(simb1 == '\u265B') {
            if(checkQueenWay(x1, y1, x2, y2) == true && (simb2 == ' ' || (simb2 >= '\u2654' && simb2 <= '\u2659'))) {
                Board.remove(x1, y1);
                Board.add(x2, y2, simb1);
                return true;
            } else {
                System.out.println("Queen@ chi karox aydpes sharjvel");
                return false;
            }
        } else if(simb1 == '\u2655') {
            if(checkQueenWay(x1, y1, x2, y2) == true && (simb2 == ' ' || (simb2 >= '\u265A' && simb2 <= '\u265F'))) {
                Board.remove(x1, y1);
                Board.add(x2, y2, simb1);
                return true;
            } else {
                System.out.println("Queen@ chi karox aydpes sharjvel");
                return false;
            }
        } else {
            System.out.println("Queen@ chi karox aydpes sharjvel");
            return false;
        }
    }
    public static boolean checkQueenWay(int x1, int y1, int x2, int y2) {
        if(Bishop.checkBishopWay(x1, y1, x2, y2) == true || Rook.checkRookWay(x1, y1, x2, y2) == true) {
            return true;
        } else {
            return false;
        }
    }
}