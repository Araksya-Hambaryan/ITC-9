package com.itc.chess;

import org.testng.Assert;
import org.testng.annotations.BeforeMethod;
import org.testng.annotations.BeforeTest;
import org.testng.annotations.Test;

/**
 * Unit test for simple App.
 */
public class AppTest {
    @BeforeMethod
    public void beforeAllMethods(){
        Board.defaultBoard();
        Board.add(4,5,'\u265B');
    }
    @Test
    public  void checkBishopWayTestng() {
        Assert.assertTrue(Bishop.checkBishopWay(0, 5, 1, 4));

    }


    @Test
    public  void checkHorseWayTestng() {
        Assert.assertTrue(Horse.checkHorseWay(1, 2, 2, 4));

    }


    @Test
    public  void checkKingWayTestng() {
        Assert.assertTrue(King.checkKingWay(3, 6, 4, 5));

    }

    @Test
    public void checkQueenWayTestng(){
        Assert.assertTrue(Queen.checkQueenWay(3,3,6,6));
    }
    @Test
    public void checkRookWayTestng(){
        Assert.assertFalse(Rook.checkRookWay(1,1,1,5));
    }


    @Test
    public void getSymbolBoard(){

        Assert.assertEquals(Board.getSimb(0,0),'\u265C');
    }

    @Test
    public void addFigure(){
        Assert.assertEquals(Board.getSimb(4,5), '\u265B');

    }

}