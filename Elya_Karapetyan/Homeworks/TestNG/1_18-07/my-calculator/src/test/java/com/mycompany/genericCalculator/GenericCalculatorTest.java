package com.mycompany.genericCalculator;

import org.testng.Assert;
import org.testng.annotations.Test;
import org.testng.annotations.BeforeMethod;
import org.testng.annotations.AfterMethod;
import org.testng.annotations.BeforeClass;
import org.testng.annotations.AfterClass;
import org.testng.annotations.BeforeTest;
import org.testng.annotations.AfterTest;

import static com.mycompany.genericCalculator.GenericCalculator.*;


public class GenericCalculatorTest {
    @BeforeMethod
    public void beforeMethod() {
        System.out.println("in beforeMethod");
    }

    @AfterMethod
    public void afterMethod() {
        System.out.println("in afterMethod");
    }

    @BeforeClass
    public void beforeClass() {
        System.out.println("in beforeClass");
    }

    @AfterClass
    public void afterClass() {
        System.out.println("in afterClass");
    }

    @BeforeTest
    public void beforeTest() {
        System.out.println("in beforeTest");
    }

    @AfterTest
    public void afterTest() {
        System.out.println("in afterTest");
    }

    @Test
	public void testForAddZeroes(){
        Integer firstNum = 0;
        Integer secondNum = 0;
        Integer result = 0;
    	Assert.assertEquals(addNum(firstNum, secondNum), result);
        System.out.println("0 + 0 = 0 OK");
    }
    @Test
    public void testForAddOppositeNum(){
        Double firstNum = -5.5;
        Double secondNum = 5.5;
        Double result = 0.0;
        Assert.assertEquals(addNum(firstNum, secondNum), result);
        System.out.println("-5.5 + 5.5 = 0 OK");
    }
    @Test
    public void testForSubZeroes(){
        Integer firstNum = 0;
        Integer secondNum = 0;
        Integer result = 0;
        Assert.assertEquals(subNum(firstNum, secondNum), result);
        System.out.println("0 - 0 = 0 OK");
    }
    @Test
    public void testForSubOppositeNum() {
        Integer firstNum = -5;
        Integer secondNum = 5;
        Integer result = -10;
        Assert.assertEquals(subNum(firstNum, secondNum), result);
        System.out.println("-5 - 5 = -10 OK");
    }
    @Test
    public void testForMultWithZero(){
        Float firstNum = 5.02f;
        Float secondNum = 0.0f;
        Float result = 0.0f;
        Assert.assertEquals(multNum(firstNum, secondNum), result);
        System.out.println("5.02 * 0 = 0 OK");
    }
    @Test
    public void testForMultWithNegativNum(){
        Integer firstNum = 5;
        Integer secondNum = -5;
        Integer result = -25;
        Assert.assertEquals(multNum(firstNum, secondNum), result);
        System.out.println("-5 * 5 = -25 OK");
    }
    @Test
    public void testForDivid(){
        Integer firstNum = 5;
        Integer secondNum = 5;
        Integer result = 1;
        Assert.assertEquals(dividNum(firstNum, secondNum), result);
        System.out.println("5 * 5 = 1 OK");
    }
    @Test
    public void testForDividWithNegativNum(){
        Integer firstNum = 5;
        Integer secondNum = -5;
        Integer result = -1;
        Assert.assertEquals(dividNum(firstNum, secondNum), result);
        System.out.println("-5 / 5 = -1 OK");
    }
}
