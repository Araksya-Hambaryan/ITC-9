package com.itc.chess;

public class King {
    public static boolean step(int x1, int y1, int x2, int y2) {
        char simb1 = Board.getSimb(x1, y1);
        char simb2 = Board.getSimb(x2, y2);
        if(simb1 == '\u265A') {
            if(checkKingWay(x1, y1, x2, y2) == true && (simb2 == ' ' || (simb2 >= '\u2654' && simb2 <= '\u2659'))) {
                Board.remove(x1, y1);
                Board.add(x2, y2, simb1);
                return true;
            } else {
                System.out.println("King@ chi karox aydpes sharjvel");
                return false;
            }
        } else if(simb1 == '\u2654') {
            if(checkKingWay(x1, y1, x2, y2) == true && (simb2 == ' ' || (simb2 >= '\u265A' && simb2 <= '\u265F'))) {
                Board.remove(x1, y1);
                Board.add(x2, y2, simb1);
                return true;
            } else {
                System.out.println("King@ chi karox aydpes sharjvel");
                return false;
            }
        } else {
            System.out.println("King@ chi karox aydpes sharjvel");
            return false;
        }
    }
    public static boolean checkKingWay(int x1, int y1, int x2, int y2) {
        if((Math.abs(x1 - x2) == Math.abs(y1 - y2) && Math.abs(y1 - y2) == 1)) {
            return true;
        } else if(((Math.abs(x1 - x2) == 0) && (Math.abs(y1 - y2) == 1)) || ((Math.abs(x1 - x2) == 1) && (Math.abs(y1 - y2) == 0))) {
            return true;
        } else {
            return false;
        }
    }
}