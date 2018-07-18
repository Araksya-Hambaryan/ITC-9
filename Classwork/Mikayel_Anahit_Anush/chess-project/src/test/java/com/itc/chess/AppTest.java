package com.itc.chess;
import org.testng.Assert;
import org.testng.annotations.BeforeTest;
import org.testng.annotations.Test;

/**
 * Unit test for simple App.
 */
public class AppTest {
    @Test
    public static void checkBishopWayTestng() {
        Assert.assertTrue(com.itc.chess.Bishop.checkBishopWay(0, 5, 1, 4));
        System.out.println("Bishop's step is True");
    }


    @Test
    public static void checkHorseWayTestng() {
        Assert.assertTrue(com.itc.chess.Horse.checkHorseWay(1, 2, 2, 4));
        System.out.println("Hourse's step is True");
    }


    @Test
    public static void checkKingWayTestng() {
        Assert.assertTrue(com.itc.chess.King.checkKingWay(3, 6, 4, 5));
        System.out.println("King's step is True");
    }

    @Test
    public static void checkQueenWayTestng(){
        Assert.assertTrue(com.itc.chess.Queen.checkQueenWay(3,3,6,6));
        System.out.println("Queen's step is True ");
    }
    @Test
    public static void checkRookWayTestng(){
        Assert.assertFalse(com.itc.chess.Rook.checkRookWay(1,1,1,5));
        System.out.println("Rook's step is False");
    }


    @Test
    public static void getSymbolBoard(){
        Board.defaultBoard();
        Assert.assertEquals(com.itc.chess.Board.getSimb(0,0),'\u265C');
        System.out.println("Rook's coordiante");
    }

    @Test
    public static void addFigure(){
        Board.defaultBoard();
        Board.add(4,5,'\u265B');
        Assert.assertEquals(com.itc.chess.Board.getSimb(4,5), '\u265B');
        System.out.println("Add Figure");

    }

}