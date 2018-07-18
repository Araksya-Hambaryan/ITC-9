package com.mycompany.arrayList;

import org.testng.Assert;
import org.testng.annotations.*;

public class MyArrayListTest {
    MyArrayList<Integer> arrList;
    @BeforeTest
    public void CreateOvject() {
        arrList = new MyArrayList<Integer>();
        System.out.println("Before Class");
    }
    @BeforeMethod
    public void printListBefore() {
        System.out.println("Befor--->");
        arrList.printArrayList();
    }
    @AfterMethod
    public void printListAfter() {
        System.out.println("After--->");
        arrList.printArrayList();
    }
    @Test
    public void testForGetSize() {
        Integer size = arrList.getSize();
        Integer m_size = 0;
        Assert.assertEquals(size, m_size);
        System.out.println("Corect size!");
    }
    @Test
    public void testForAddElment() {
        arrList.add(55);
        Integer element = 55;
        Integer index = arrList.getSize() - 1;
        Assert.assertEquals(arrList.getElement(index), element);
        System.out.println("added corect!");
    }
    @Test
    public void testInsertElemnet() {
        arrList.insert(1,55);
        Integer element = 55;
        Integer index = 1;
        Assert.assertEquals(arrList.getElement(index), element);
        System.out.println("insert corect!");
    }
    @Test
    public void testForPopElement() {
        Integer m_size = arrList.getSize();
        arrList.popBack();
        Integer size = arrList.getSize() + 1;
        Assert.assertEquals(m_size, size);
        System.out.println("pop corect!");
    }
    @Test
    public void testRemoveElement() {
        int index = arrList.getSize() - 1;
        Integer lastElement = arrList.getElement(index);
        Integer zero = 0;
        Assert.assertEquals(lastElement, zero);
        System.out.println("insert corect!");
    }
}
