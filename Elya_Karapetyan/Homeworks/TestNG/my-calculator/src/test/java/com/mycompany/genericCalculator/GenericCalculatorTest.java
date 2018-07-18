package com.mycompany.genericCalculator;

import org.testng.Assert;
import org.testng.annotations.Test;


public class GenericCalculatorTest {
    @Test
	public void testForAddNum(){
    	Assert.assertEquals(com.mycompany.genericGenericcalculator.GenericCalculator.addNum(3, 4),7);
		System.out.println("ok");
    }
}
