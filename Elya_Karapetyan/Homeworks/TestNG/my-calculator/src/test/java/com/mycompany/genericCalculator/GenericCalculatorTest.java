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
    public void testForAdd(){
        Integer firstNum = -5;
        Integer secondNum = 5;
        Integer result = 0;
        Assert.assertEquals(addNum(firstNum, secondNum), result);
        System.out.println("-5 + 5 = 0 OK");
    }
}
