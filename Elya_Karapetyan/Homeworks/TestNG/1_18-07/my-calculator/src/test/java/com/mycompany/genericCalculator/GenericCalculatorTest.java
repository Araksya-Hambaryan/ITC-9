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
    @Test
    public void testForAddZeroes(){
    	Assert.assertEquals(addNum((Integer)0, (Integer)0), (Integer)0);
    }
    @Test
    public void testForAddOppositeNum(){
        Assert.assertEquals(addNum((Double)(-5.5), (Double)5.5), (Double)0.0);
    }
    @Test
    public void testForSubZeroes(){
        Assert.assertEquals(subNum((Integer)0, (Integer)0), (Integer)0);
    }
    @Test
    public void testForSubOppositeNum() {
        Assert.assertEquals(subNum((Integer)(-5), (Integer)5), (Integer)(-10));
    }
    @Test
    public void testForMultWithZero(){
        Assert.assertEquals(multNum((Float)5.02f, (Float)0f), (Float)0f);
    }
    @Test
    public void testForMultWithNegativNum(){
        Assert.assertEquals(multNum((Integer)(-5), (Integer)5), (Integer)(-25));
    }
    @Test
    public void testForDivid(){
        Assert.assertEquals(dividNum((Integer)5, (Integer)5), (Integer)1);
    }
    @Test
    public void testForDividByZero(){
        try {
            dividNum(5, 0);
            Assert.assertFalse(true);
        } catch(ArithmeticException e) {
            Assert.assertTrue(true);
        } 
    }
    @Test
    public void testForDividWithNegativNum(){
        Assert.assertEquals(dividNum((Integer)(-5), (Integer)5), (Integer)(-1));
    }
}
