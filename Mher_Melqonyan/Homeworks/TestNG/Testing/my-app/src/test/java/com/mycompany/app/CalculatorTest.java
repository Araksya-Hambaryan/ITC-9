package com.mycompany.app;

import org.testng.Assert;
import org.testng.annotations.Test;
import org.testng.annotations.*;
import static com.mycompany.app.Calculator.*;


public class CalculatorTest {
    @BeforeMethod
    public void beforeMethod() {
        System.out.println("beforeMethod");
    }

    @AfterMethod
    public void afterMethod() {
        System.out.println("afterMethod");
    }

    @BeforeClass
    public void beforeClass() {
        System.out.println("beforeClass");
    }

    @AfterClass
    public void afterClass() {
        System.out.println("afterClass");
    }

    @BeforeTest
    public void beforeTest() {
        System.out.println("beforeTest");
    }

    @AfterTest
    public void afterTest() {
        System.out.println("afterTest");
    }

    @Test
    public void testAddInts(){
       System.out.println("4 + 5 =");
        Integer firstNum = 4;
        Integer secondNum = 5;
        Integer result = 9;
        Assert.assertEquals(addNum(firstNum, secondNum), result);
        System.out.println("result = 9");
    }
    @Test
    public void testAddDouble(){
 System.out.println("1.55 -4.3 = ");
        Double firstNum = 1.55;
        Double secondNum = -4.3;
        Double result = -2.75;
        Assert.assertEquals(addNum(firstNum, secondNum), result);
        System.out.println("result = -2.75");
    }
    @Test
    public void testSubInt(){
 System.out.println("15 - 6 =");
        Integer firstNum = 15;
        Integer secondNum = 6;
        Integer result = 9;
        Assert.assertEquals(subNum(firstNum, secondNum), result);
        System.out.println("result = 9");
    }
    @Test
    public void test() {
 System.out.println("-7 - 11 = ");
        Integer firstNum = -7;
        Integer secondNum = 11;
        Integer result = -18;
        Assert.assertEquals(subNum(firstNum, secondNum), result);
        System.out.println("result = -18");
    }
    @Test
    public void testMulFloats(){
 System.out.println("72.6 * 12.3 =");
        Float firstNum = 72.6f;
        Float secondNum = 12.3f;
        Float result = 892.98f;
        Assert.assertEquals(multNum(firstNum, secondNum), result);
        System.out.println("result = 892.98f");
    }
  }
