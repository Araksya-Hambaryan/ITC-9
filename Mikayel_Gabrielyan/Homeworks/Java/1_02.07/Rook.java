public class Rook {
    public static boolean step(int x1, int y1, int x2, int y2) {
        char simb1 = Board.getSimb(x1, y1);
        char simb2 = Board.getSimb(x2, y2);
        System.out.println(simb1);
        System.out.println(y2 + ", " + y1);
        System.out.println(x2 + ", " + x1);
        System.out.println(simb2);
        if((simb1 == 'r') && ((x2 == x1 && y2 != y1) || (x2 != x1 && y2 == y1))) {
            if(checkRookWay(x1, y1, x2, y2) == true && (simb2 == ' ' || (simb2 > 'A' && simb2 < 'Z'))) {
                Board.remove(x1, y1);
                Board.add(x2, y2, simb1);
                return true;
            } else {
                System.out.println("Bishop@ chi karox aydpes sharjvel");
                return false;
            }
        } else if((simb1 == 'B') && (Math.abs(x2 - x1) == Math.abs(y2 - y1))) {
            if(checkRookWay(x1, y1, x2, y2) == true && (simb2 == ' ' || (simb2 > 'a' && simb2 < 'z'))) {
                Board.remove(x1, y1);
                Board.add(x2, y2, simb1);
                return true;
            } else {
                System.out.println("Bishop@ chi karox aydpes sharjvel");
                return false;
            }
        } else {
            System.out.println("Bishop@ chi karox aydpes sharjvel");
            return false;
        }
    }
    public static boolean checkRookWay(int x1, int y1, int x2, int y2) {
        if(x1 == x2) {
            if(Math.abs(y1 - y2) == 1) {
                return true;
            } else if(y1 < y2) {
                while(y1 < y2 -1) {
                    y1++;
                    if(Board.getSimb(x1, y1) != ' '){
                        return false;
                    }
                }
                return true;
            } else if(y1 > y2) {
                while(y1 -1 > y2) {
                    y1--;
                    if(Board.getSimb(x1, y1) != ' '){
                        return false;
                    }
                }
                return true;
            } else {
                return false;
            }
        } else if(y1 == y2) {
            if(Math.abs(x1 - x2) == 1) {
                return true;
            } else if(x1 < x2) {
                while(x1 < x2 -1) {
                    x1++;
                    if(Board.getSimb(x1, y1) != ' '){
                        return false;
                    }
                }
                return true;
            } else if(x1 > x2) {
                while(x1 -1 > x2) {
                    x1--;
                    if(Board.getSimb(x1, y1) != ' '){
                        return false;
                    }
                }
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
}