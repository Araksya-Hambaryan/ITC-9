package com.itc.calc;

import org.testng.Assert;
import org.testng.annotations.BeforeMethod;
import org.testng.annotations.Test;

public class AppTest {
    Calculator c;

    @BeforeMethod
    public void BeforeAllMethods(){
        c = new Calculator();
    }

    @Test
    public void addTrueIntegerTesting(){

        Assert.assertEquals(c.add((Integer)8,(Integer)7),15);
    }

    @Test
    public void addFalseIntegerTesting(){

        Assert.assertNotEquals(c.add((Integer)14,(Integer)14),48);
    }

    @Test
    public void addFalseDoubleTesting(){

        Assert.assertNotEquals(c.add((Double)8.5,(Double)5.5),15.5);
    }

    @Test
    public void addTrueDoubleTesting(){

        Assert.assertNotEquals(c.add((Double)25.5,(Double)5.5),31);
    }

    @Test
    public void addTrueeFloatTesting(){

        Assert.assertEquals(c.add((Float)49.8f,(Float)55.2f),105f);
    }

    @Test
    public void subTrueIntegerTesting(){

        Assert.assertEquals(c.sub((Integer)189,(Integer)628),-439);
    }

    @Test
    public void subFalseIntegerTesting(){

        Assert.assertNotEquals(c.sub((Integer)45,(Integer)2),47);
    }

    @Test
    public void subTrueDoubleTesting(){

        Assert.assertEquals(c.sub((Double)45.5,(Double)6.2),39.3);
    }

    @Test
    public void subFalseDoubleTesting(){

        Assert.assertNotEquals(c.sub((Double)5.5,(Double)6.3),-1.8);
    }


    @Test
    public void subTrueFloatTesting(){

        Assert.assertEquals(c.sub((Float)5.5f,(Float)1.5f),4f);
    }

    @Test
    public void subFalseFloatTesting(){

        Assert.assertNotEquals(c.sub((Float)5.5f,(Float)6.3f),1.8f);
    }

    @Test
    public void mulIntegerTrueTesting(){

        Assert.assertEquals(c.mul((Integer)5,(Integer)5),25);
    }

    @Test
    public void mulIntegerFalseTesting(){

        Assert.assertNotEquals(c.mul((Integer)5,(Integer)5),35);
    }

    @Test
    public void mulDoubleTrueTesting(){

        Assert.assertEquals(c.mul((Double)5.5,(Double)5.5),30.25);
    }

    @Test
    public void mulDoubleFalseTesting(){

        Assert.assertNotEquals(c.mul((Double)5.5,(Double)5.5),25);
    }

    @Test
    public void mulFloatTrueTesting(){

        Assert.assertEquals(c.mul((Float)5.5f,(Float)5.5f),30.25f);
    }

    @Test
    public void mulFloatFalseTesting(){

        Assert.assertNotEquals(c.mul((Float)5.5f,(Float)5.5f),25f);
    }

    @Test
    public void divIntegerTrueTesting(){

        Assert.assertEquals(c.div((Integer)12,(Integer)2),6);
    }

    @Test
    public void divIntegerFalseTesting(){

        Assert.assertNotEquals(c.div((Integer)12,(Integer)2),3);
    }

    @Test
    public void divDoubleTrueTesting(){

        Assert.assertEquals(c.div((Double)45.5,(Double)2.0),22.75);
    }

    @Test
    public void divDoubleFalseTesting(){


        Assert.assertNotEquals(c.div((Double)45.5,(Double)2.0),33.75);
    }


    @Test
    public void divFloatTrueTesting(){

        Assert.assertEquals(c.div((Float)45.5f,(Float)2.0f),22.75f);
    }

    @Test
    public void divFloatFalseTesting(){
        Assert.assertNotEquals(c.div((Float)45.5f,(Float)2.0f),33.75f);
    }

}
