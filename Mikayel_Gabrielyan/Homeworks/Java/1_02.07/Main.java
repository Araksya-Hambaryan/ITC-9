import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Board.defaultBoard();
        Board.printBoard();
        boolean valid = false;
        boolean check = false;
        Scanner in = new Scanner(System.in);
        int count = 0;
        while(check != true) {
            switch(count) {
                case 0:
                    System.out.println("Qayl@ spitaknerinn e :");
                    break;
                case 1:
                    System.out.println("Qayl@ severinn e :");
                    break;
            }
            System.out.println("Mutqagrel figuri koordinatner@ orinak -> A2 :");
            String str = in.next();
            int firstX = str.charAt(1);
            firstX -= 49;
            int firstY = str.charAt(0);
            firstY -= 65;
            char simb = Board.getSimb(firstX, firstY);
            if((count == 0 && (simb >= '\u265A' && simb <= '\u265F')) || (count == 1  && (simb >= '\u2654' && simb <= '\u2659'))) {
                if(Board.validCoord(firstX, firstY) == true && simb != ' ') {
                    System.out.println("Mutqagrel figuri nor koordinatner@ orinak -> A3 :");
                    str = in.next();
                    int secondX = str.charAt(1);
                    secondX -= 49;
                    int secondY = str.charAt(0);
                    secondY -= 65;
                    if(Board.validCoord(secondX, secondY) == true) {
                        char simb2 = Board.getSimb(secondX, secondY);
                        if(simb == '\u265F' || simb == '\u2659') {
                            valid = Pawn.step(firstX, firstY, secondX, secondY);
                            Board.printBoard();
                            check = changeCheck(valid, simb2);
                            count = changeCount(valid, count);
                        } else if(simb == '\u265C' || simb == '\u2656') {
                            valid = Rook.step(firstX, firstY, secondX, secondY);
                            Board.printBoard();
                            check = changeCheck(valid, simb2);
                            count = changeCount(valid, count);
                        } else if(simb == '\u265D' || simb == '\u2657') {
                            valid = Bishop.step(firstX, firstY, secondX, secondY);
                            Board.printBoard();
                            check = changeCheck(valid, simb2);
                            count = changeCount(valid, count);
                        } else if(simb == '\u265E' || simb == '\u2658') {
                            valid = Horse.step(firstX, firstY, secondX, secondY);
                            Board.printBoard();
                            check = changeCheck(valid, simb2);
                            count = changeCount(valid, count);
                        } else if(simb == '\u265B' || simb == '\u2655') {
                            valid = Queen.step(firstX, firstY, secondX, secondY);
                            Board.printBoard();
                            check = changeCheck(valid, simb2);
                            count = changeCount(valid, count);
                        } else if(simb == '\u265A' || simb == '\u2654') {
                            valid = King.step(firstX, firstY, secondX, secondY);
                            Board.printBoard();
                            check = changeCheck(valid, simb2);
                            count = changeCount(valid, count);
                        } else {
                            System.out.println("Nman koordinatum figur chka");
                        } 
                    } else {
                        System.out.println("Sxal koordinati mutqagrum");
                    }
                } else {
                    System.out.println("Sxal koordinati mutqagrum");
                }
            } else {
                System.out.println("Sxal guyni figuri @ntrutyun");
            } 
        }
        System.out.println("Xaxn avartvec, Duq haxteciq !!!");
    }
    public static int changeCount(boolean tF, int count) {
        if(tF == true) {
            if(count == 0) {
                return 1;
            } else {
                return 0;
            }
        } else {
             if(count == 0) {
                return 0;
            } else {
                return 1;
            }
        }
    }
    public static boolean changeCheck(boolean tF,char simbol) {
        if(tF == true && (simbol == '\u2654' || simbol == '\u265A')) {
            return true;
        } else {
            return false;
        }
    }
}