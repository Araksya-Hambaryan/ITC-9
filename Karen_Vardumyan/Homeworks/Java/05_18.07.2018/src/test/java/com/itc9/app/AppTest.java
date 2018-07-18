package com.itc9.app;

import org.testng.Assert;
import org.testng.annotations.Test;
import org.testng.annotations.BeforeMethod;
import org.testng.annotations.AfterMethod;
import org.testng.annotations.BeforeClass;


public class AppTest {

   	@Test
    public static void test1() {
        Bord bord = new Bord();
        char [][] newBord = bord.creatBordDef();
		int countOfBlackSolders = 0;
		for(int i=3; i<34; i=i+4) {
	        if(arr[6][i] == '\u2659') {
				countOfBlackSolders++;
			}
	    }
        Assert.assertNotEquals(countOfBlackSolders, 8 , "tesrt2 pass");
    }


    @Test
    public static void test1() {
    	Bord bord = new Bord();
     	char [][] newBord = bord.creatBordDef();
     	Assert.assertEquals(newBord[3][3], '\u2656', "tesrt1 pass");
    }

	@Test
    public static void test1() {
        Bord bord = new Bord();
        char [][] newBord = bord.creatBordDef();
        Assert.assertEquals(newBord[24][23], '\u265D', "tesrt2 pass");
    }

	@Test
    public static void test1() {
        Bord bord = new Bord();
        char [][] newBord = bord.creatBordDef();
        Assert.assertEquals(newBord[3][19], '\u2654', "tesrt2 pass");
    }

	@Test
    public static void test1() {
        Bord bord = new Bord();
        char [][] newBord = bord.creatBordDef();
        Assert.assertNotEquals(newBord[0][0], '\u265D', "tesrt2 pass");
    }
}
