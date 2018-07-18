package com.itc.arrList;

import org.testng.Assert;
import org.testng.annotations.AfterTest;
import org.testng.annotations.BeforeTest;
import org.testng.annotations.Test;


public class AppTest {
    static MyArrList m_obj = null;

    @BeforeTest
    public static void creatObject() {
        m_obj = new MyArrList();
        m_obj.add(3);
        m_obj.add(6);
        System.out.println("BeforeTest: running function creatObject()");
    }

    @Test
    public static void getSizeTest() {
        Assert.assertEquals(m_obj.getSize(), 4);
        System.out.println("ArrayList size is 4");
    }

    @Test
    public static void getElementTest() {
        try {
            m_obj.add(5);
            m_obj.add(9);
            Assert.assertEquals(m_obj.getElement(1), 6);
            System.out.println("ArrayList[1] = 6");
        } catch(IndexOutOfBoundsException ex) {
            System.out.println(ex);
            System.out.println("Its Exception");
        }
    }

    @Test
    public static void popArrListTest() {
        m_obj.pop();
        Assert.assertEquals(m_obj.getSize(), 4);
        System.out.println("Size is now 4");
    }

    @Test
    public static void insertArrListTest() {
        m_obj.insert(2,15);
        Assert.assertEquals(m_obj.getElement(2), 15);
        System.out.println("In index 2 inserted value 15");

    }

    @Test
    public static void removeArrListTest() {
        m_obj.add(50);
        m_obj.remove(3);
        Assert.assertEquals(m_obj.getSize(), 4);
        System.out.println("Removed 3-rd index value");
    }

    @AfterTest
    public static void printMessage() {
        System.out.println("AfterTest: All test's is successfully running");
    }
}
