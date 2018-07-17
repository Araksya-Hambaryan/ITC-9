package com.itc.mvn;

import org.testng.Assert;
import org.testng.annotations.BeforeTest;
import org.testng.annotations.Test;

public class AppTest {
    @Test
    public static void isEqualTest(){
        Assert.assertEquals(JsonParser.sum(10, 15), 25, "This test is true");
    }
    @BeforeTest
    public static void beforTest(){
        System.out.println("----------- Before Test ----------");
    }
}
