package com.itc.chess;

public class Rook {
    public static boolean step(int x1, int y1, int x2, int y2) {
        char simb1 = Board.getSimb(x1, y1);
        char simb2 = Board.getSimb(x2, y2);
        if((simb1 == '\u265C') && ((x2 == x1 && y2 != y1) || (x2 != x1 && y2 == y1))) {
            if(checkRookWay(x1, y1, x2, y2) == true && (simb2 == ' ' || (simb2 >= '\u2654' && simb2 <= '\u2659'))) {
                Board.remove(x1, y1);
                Board.add(x2, y2, simb1);
                return true;
            } else {
                System.out.println("Rook@ chi karox aydpes sharjvel");
                return false;
            }
        } else if((simb1 == '\u2656') && ((x2 == x1 && y2 != y1) || (x2 != x1 && y2 == y1))) {
            if(checkRookWay(x1, y1, x2, y2) == true && (simb2 == ' ' || (simb2 >= '\u265A' && simb2 <= '\u265F'))) {
                Board.remove(x1, y1);
                Board.add(x2, y2, simb1);
                return true;
            } else {
                System.out.println("Rook@ chi karox aydpes sharjvel");
                return false;
            }
        } else {
            System.out.println("Rook@ chi karox aydpes sharjvel");
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
                while(y1 > y2 + 1) {
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
                while(x1 > x2 + 1) {
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