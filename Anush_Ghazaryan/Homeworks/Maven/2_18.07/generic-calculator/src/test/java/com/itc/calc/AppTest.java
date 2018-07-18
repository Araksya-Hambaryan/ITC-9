package com.itc.calc;


import org.testng.Assert;
import org.testng.annotations.Test;

public class AppTest {

    @Test
    public static void addTrueIntegerTesting(){
        Calculator c = new Calculator();
        Assert.assertEquals(c.add((Integer)8,(Integer)7),15);
        System.out.println("The Addition of Integer nums is True");
    }

    @Test
    public static void addFalseIntegerTesting(){
        Calculator c = new Calculator();
        Assert.assertNotEquals(c.add((Integer)14,(Integer)14),48);
        System.out.println("The Addition of Integer nums is False");
    }

    @Test
    public static void addFalseDoubleTesting(){
        Calculator c = new Calculator();
        Assert.assertNotEquals(c.add((Double)8.5,(Double)5.5),15.5);
        System.out.println("The Addition of Double nums is False");
    }

    @Test
    public static void addTrueDoubleTesting(){
        Calculator c = new Calculator();
        Assert.assertNotEquals(c.add((Double)25.5,(Double)5.5),31);
        System.out.println("The Addition of Double nums is True");
    }

    @Test
    public static void addTrueeFloatTesting(){
        Calculator c = new Calculator();
        Assert.assertEquals(c.add((Float)49.8f,(Float)55.2f),105f);
        System.out.println("The Addition of Float nums is True");
    }

    @Test
    public static void sumTrueIntegerTesting(){
        Calculator c = new Calculator();
        Assert.assertEquals(c.sub((Integer)189,(Integer)628),-439);
        System.out.println("The Subtraction of Integer nums is True");
    }


}
