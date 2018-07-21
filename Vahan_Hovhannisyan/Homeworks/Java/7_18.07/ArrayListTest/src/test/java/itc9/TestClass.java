package itc9;
import org.testng.annotations.*;
import org.testng.Assert;
import itc9.*;

public class TestClass {
    CustomArrayList arr = null; 
    @BeforeMethod   //setUp
    public void testBefore() {
            arr = new CustomArrayList();
        }

    @AfterMethod  //tearDown
    public void testAfter() {
            arr = null;
            Assert.assertNull(arr);
        }

    @Test
    public void  testSize () {
        arr.add(5);
        Assert.assertEquals(arr.size(),1);
    }

    @Test
    public void testGetElement() {
        arr.add(3);
        arr.add(5);
        Assert.assertEquals(arr.get(0), 3);
    }

    @Test
    public void testInsert () {
        arr.insert(0,1);
        arr.insert(1,2);
        Assert.assertEquals(arr.get(0), 1); 
    }   

    @Test
    public void testRemove () {
        arr.insert(0,1);
        arr.insert(1,2);
        arr.removeByIndex(0);
        Assert.assertEquals(arr.get(0), 2); 
    } 
    @Test
    public void testRemoveByValue () {
        arr.add(3);
        arr.add(5);
        arr.removeByValue(3);
        Assert.assertEquals(arr.get(0), 5); 
    }   

    @Test
    public void testAdd() {
        arr.insert(0,1);
        arr.insert(1,2);
        Assert.assertEquals(arr.get(1), 2); 
    }   

    @Test
    public void testReplace () {
        arr.insert(0,1);
        arr.insert(1,2);
        arr.replace(0,7);
        Assert.assertEquals(arr.get(0), 7); 
    }  
} 

