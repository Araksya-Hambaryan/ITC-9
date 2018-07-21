package com.mycompany.app;
import org.testng.annotations.*;
import org.testng.Assert;
public class AppTest {
    CustomArrayList<Double> arr=null;
    @BeforeMethod
    public void objBefore() {
        arr=new CustomArrayList();
	    System.out.println("Before testing array crates again");
    }

    @AfterMethod
    public void objAfter() {
        arr = null;
    }

    @Test
    public void testSize() {
        arr.add(5.0);
        Assert.assertEquals(arr.size(),16);
        System.out.println("Running testSize.");
    }

	@Test
    public void testDoubleSize() {
        arr.add(5.0);
		arr.resizeArray();
        Assert.assertEquals(arr.size(),32);
        System.out.println("size is double.");
    }

}
