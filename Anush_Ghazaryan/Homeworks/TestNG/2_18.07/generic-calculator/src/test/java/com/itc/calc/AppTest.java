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
    public static void subTrueIntegerTesting(){
        Calculator c = new Calculator();
        Assert.assertEquals(c.sub((Integer)189,(Integer)628),-439);
        System.out.println("The Subtraction of Integer nums is True");
    }

    @Test
    public static void subFalseIntegerTesting(){
        Calculator c = new Calculator();
        Assert.assertNotEquals(c.sub((Integer)45,(Integer)2),47);
        System.out.println("The Subtraction of Integer nums is False");
    }

    @Test
    public static void subTrueDoubleTesting(){
        Calculator c = new Calculator();
        Assert.assertEquals(c.sub((Double)45.5,(Double)6.2),39.3);
        System.out.println("The Subtraction of Double nums is True");
    }

    @Test
    public static void subFalseDoubleTesting(){
        Calculator c = new Calculator();
        Assert.assertNotEquals(c.sub((Double)5.5,(Double)6.3),-1.8);
        System.out.println("The Subtraction of Double nums is False");
    }


    @Test
    public static void subTrueFloatTesting(){
        Calculator c = new Calculator();
        Assert.assertEquals(c.sub((Float)5.5f,(Float)1.5f),4f);
        System.out.println("The Subtraction of Float nums is True");
    }

    @Test
    public static void subFalseFloatTesting(){
        Calculator c = new Calculator();
        Assert.assertNotEquals(c.sub((Float)5.5f,(Float)6.3f),1.8f);
        System.out.println("The Subtraction of Double nums is False");
    }

    @Test
    public static void mulIntegerTrueTesting(){
        Calculator c = new Calculator();
        Assert.assertEquals(c.mul((Integer)5,(Integer)5),25);
        System.out.println("The Multiplication of Integer numbers is True");
    }

    @Test
    public static void mulIntegerFalseTesting(){
        Calculator c = new Calculator();
        Assert.assertNotEquals(c.mul((Integer)5,(Integer)5),35);
        System.out.println("The Multiplication of Integer numbers is False");
    }

    @Test
    public static void mulDoubleTrueTesting(){
        Calculator c = new Calculator();
        Assert.assertEquals(c.mul((Double)5.5,(Double)5.5),30.25);
        System.out.println("The Multiplication of Double numbers is True");
    }

    @Test
    public static void mulDoubleFalseTesting(){
        Calculator c = new Calculator();
        Assert.assertNotEquals(c.mul((Double)5.5,(Double)5.5),25);
        System.out.println("The Multiplication of Double numbers is False");
    }

    @Test
    public static void mulFloatTrueTesting(){
        Calculator c = new Calculator();
        Assert.assertEquals(c.mul((Float)5.5f,(Float)5.5f),30.25f);
        System.out.println("The Multiplication of Float numbers is True");
    }

    @Test
    public static void mulFloatFalseTesting(){
        Calculator c = new Calculator();
        Assert.assertNotEquals(c.mul((Float)5.5f,(Float)5.5f),25f);
        System.out.println("The Multiplication of Float numbers is False");
    }

    @Test
    public static void divIntegerTrueTesting(){
        Calculator c = new Calculator();
        Assert.assertEquals(c.div((Integer)12,(Integer)2),6);
        System.out.println("The Division of Integer numbers is True");
    }

    @Test
    public static void divIntegerFalseTesting(){
        Calculator c = new Calculator();
        Assert.assertNotEquals(c.div((Integer)12,(Integer)2),3);
        System.out.println("The Division of Integer numbers is False");
    }

    @Test
    public static void divDoubleTrueTesting(){
        Calculator c = new Calculator();
        Assert.assertEquals(c.div((Double)45.5,(Double)2.0),22.75);
        System.out.println("The Division of Double numbers is True");
    }

    @Test
    public static void divDoubleFalseTesting(){
        Calculator c = new Calculator();
        Assert.assertNotEquals(c.div((Double)45.5,(Double)2.0),33.75);
        System.out.println("The Division of Double numbers is False");
    }


    @Test
    public static void divFloatTrueTesting(){
        Calculator c = new Calculator();
        Assert.assertEquals(c.div((Float)45.5f,(Float)2.0f),22.75f);
        System.out.println("The Division of Float numbers is True");
    }

    @Test
    public static void divFloatFalseTesting(){
        Calculator c = new Calculator();
        Assert.assertNotEquals(c.div((Float)45.5f,(Float)2.0f),33.75f);
        System.out.println("The Division of Float numbers is False");
    }

}
