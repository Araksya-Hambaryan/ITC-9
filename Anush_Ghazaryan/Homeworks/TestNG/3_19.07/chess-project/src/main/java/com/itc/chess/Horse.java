package com.itc.chess;

public class Horse {
    public static boolean step(int x1, int y1, int x2, int y2) {
        char simb1 = Board.getSimb(x1, y1);
        char simb2 = Board.getSimb(x2, y2);
        if(simb1 == '\u265E') {
            if(checkHorseWay(x1, y1, x2, y2) == true && (simb2 == ' ' || (simb2 >= '\u2654' && simb2 <= '\u2659'))) {
                Board.remove(x1, y1);
                Board.add(x2, y2, simb1);
                return true;
            } else {
                System.out.println("Horse@ chi karox aydpes sharjvel");
                return false;
            }
        } else if(simb1 == '\u2658') {
            if(checkHorseWay(x1, y1, x2, y2) == true && (simb2 == ' ' || (simb2 >= '\u265A' && simb2 <= '\u265F'))) {
                Board.remove(x1, y1);
                Board.add(x2, y2, simb1);
                return true;
            } else {
                System.out.println("Horse@ chi karox aydpes sharjvel");
                return false;
            }
        } else {
            System.out.println("Horse@ chi karox aydpes sharjvel");
            return false;
        }
    }
    public static boolean checkHorseWay(int x1, int y1, int x2, int y2) {
        if((Math.abs(x1 - x2) == 1) && (Math.abs(y1 - y2) == 2)) {
            return true;
        } else if((Math.abs(x1 - x2) == 2) && (Math.abs(y1 - y2) == 1)) {
            return true;
        } else {
            return false;
        }
    }
}