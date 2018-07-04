public class Pawn {
    public static boolean step(int x1, int y1, int x2, int y2) {
        char simb1 = Board.getSimb(x1, y1);
        char simb2 = Board.getSimb(x2, y2);
        System.out.println(simb1);
        System.out.println(y2 + ", " + y1);
        System.out.println(x2 + ", " + x1);
        System.out.println(simb2);
        if((simb1 == '\u265F') && (x2 - x1 == 1) && (simb2 == ' ')) {
            Board.remove(x1, y1);
            Board.add(x2, y2, simb1);
            return true;
        } else if(simb1 == '\u2659' && (x1 - x2 == 1) && simb2 == ' ') {
            Board.remove(x1, y1);
            Board.add(x2, y2, simb1);
            return true;
        } else if(simb1 == '\u265F' && (x2 - x1 == 1) && ((y2 -y1 == 1) || (y2 - y1 == -1)) && (simb2 >= '\u2654' && simb2 <= '\u2659')) {
            Board.remove(x1, y1);
            Board.add(x2, y2, simb1);
            return true;
        } else if(simb1 == '\u2659' && (x1 - x2 == 1) && ((y2 -y1 == 1) || (y2 - y1 == -1)) && (simb2 >= '\u265A' && simb2 <= '\u265F')) {
            Board.remove(x1, y1);
            Board.add(x2, y2, simb1);
            return true;
        } else {
            System.out.println("Pawn@ chi karox aydpes sharjvel");
            return false;
        }
    }
}