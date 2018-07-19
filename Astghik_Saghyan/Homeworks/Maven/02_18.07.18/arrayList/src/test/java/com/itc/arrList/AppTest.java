package com.itc.arrList;
import com.itc.arrList.ArrayList;
import org.testng.annotations.*;
import org.testng.Assert;





public class AppTest {
    ArrayList arrList = null;
    @BeforeMethod
    public void createObj() {
        arrList = new ArrayList();
        System.out.println("----------------------------------------Before");
    }

    @AfterMethod
    public void RemoveObj() {
        arrList = null;
        Assert.assertNull(arrList);
        System.out.println("----------------------------------------After");
        
    }

    @Test
    public void testAdd() {
        arrList.addItem(5);
        arrList.addItem(6);
        arrList.addItem(3);
        arrList.addItem(2);
        arrList.addItem(5);
        arrList.printArray();
        Assert.assertEquals(arrList.getSize(), 5);
    }

    @Test
    public void testInsert() {
        arrList.addItem(5);
        arrList.addItem(6);
        arrList.addItem(3);
        arrList.addItem(2);
        arrList.addItem(5);
        arrList.insert(1, 99);
        arrList.printArray();
        Assert.assertEquals(arrList.getItem(1), 99);
    }

    @Test
    public void testRemoveByValue() {
        arrList.addItem(5);
        arrList.addItem(6);
        arrList.addItem(3);
        arrList.addItem(2);
        arrList.addItem(5);
        arrList.removeByValue(99);
        arrList.printArray();
        Assert.assertEquals(arrList.getByValue(99), 0);
    }

} 
