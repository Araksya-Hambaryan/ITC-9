package com.mycompany.genericCalculator;

import org.testng.Assert;
import org.testng.annotations.Test;

import static com.mycompany.genericCalculator.GenericCalculator.*;


public class GenericCalculatorTest {
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
        Integer firstNum = -5;
        Integer secondNum = 5;
        Integer result = 0;
        Assert.assertEquals(addNum(firstNum, secondNum), result);
        System.out.println("-5 + 5 = 0 OK");
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
        Integer firstNum = 5;
        Integer secondNum = 0;
        Integer result = 0;
        Assert.assertEquals(multNum(firstNum, secondNum), result);
        System.out.println("5 * 0 = 0 OK");
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
