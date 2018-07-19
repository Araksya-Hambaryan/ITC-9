package com.itc.arrList;

import org.testng.Assert;
import org.testng.annotations.AfterMethod;
import org.testng.annotations.AfterTest;
import org.testng.annotations.BeforeMethod;
import org.testng.annotations.Test;


public class AppTest {
    MyArrList m_obj = null;

    @BeforeMethod
    public void creatObject() {
        m_obj = new MyArrList();
        System.out.println("BeforeMethod: running function creatObject()");
    }

    @AfterMethod
    public void deleteObject() {
        m_obj = null;
        System.out.println("AfterMethod: running function deleteObject()");
    }

    @Test
    public void getSizeTest() {
        m_obj.add(1);
        m_obj.add(2);
        m_obj.add(3);
        m_obj.add(4);
        Assert.assertEquals(m_obj.getSize(), 4);
    }

    @Test
    public void getElementTest() {
        try {
            m_obj.add(5);
            m_obj.add(9);
            m_obj.add(15);
            Assert.assertEquals(m_obj.getElement(1), 9);
        } catch(IndexOutOfBoundsException ex) {
            System.out.println(ex);
        }
    }

    @Test
    public void popArrListTest() {
        m_obj.add(1);
        m_obj.add(2);
        m_obj.add(3);
        m_obj.add(4);
        Assert.assertEquals(m_obj.getSize(), 4);
        m_obj.pop();
        Assert.assertEquals(m_obj.getSize(), 3);
    }

    @Test
    public void insertArrListTest() {
        m_obj.add(5);
        m_obj.add(6);
        m_obj.add(7);
        m_obj.add(8);
        m_obj.insert(2,15);
        Assert.assertEquals(m_obj.getElement(2), 15);
        Assert.assertEquals(m_obj.getSize(), 5);

    }

    @Test
    public void removeArrListTest() {
        m_obj.add(5);
        m_obj.add(6);
        m_obj.add(7);
        m_obj.add(8);
        m_obj.add(9);
        Assert.assertEquals(m_obj.getElement(2), 7);
        m_obj.remove(2);
        Assert.assertEquals(m_obj.getElement(2), 8);
        Assert.assertEquals(m_obj.getSize(), 4);
    }

    @AfterTest
    public void printMessage() {
        System.out.println("AfterTest: All test's is successfully running");
    }
}
