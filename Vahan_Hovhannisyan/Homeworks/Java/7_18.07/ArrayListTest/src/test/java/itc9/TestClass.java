package itc9;
import org.testng.annotations.*;
import org.testng.Assert;
import itc9.*;

public class TestClass {
	CustomArrayList arr = null; 
	@BeforeMethod   //setUp
		public void testBefore() {
			arr = new CustomArrayList();
			System.out.println("Running testBefore       Before------------->");
		}

	@AfterMethod  //tearDown
		public void testAfter() {
			arr = null;
			Assert.assertNull(arr);
			System.out.println("Running testAfter        After------------>.\n");
		}

	@Test
	public void  testSize () {
		arr.add(5);
		Assert.assertEquals(arr.size(),1);
		System.out.println("Running testSize.");
	}

	@Test
	public void testGetElement() {
		try {
			arr.add(3);
			arr.add(5);
			Assert.assertEquals(arr.get(0), 3);
			System.out.println("Running testGetElement");
		} catch(Exception e) {
			System.out.println("Some exception occured.");
		}
	}

	@Test
	public void testInsert () {
		try {
			arr.insert(0,1);
			arr.insert(1,2);
			Assert.assertEquals(arr.get(0), 1); 
			System.out.println("Running testInsert");
		} catch(Exception e) {
			System.out.println("Some exception occured.");
		}
	}   

	@Test
	public void testRemove () {
		try {
			arr.insert(0,1);
			arr.insert(1,2);
			arr.removeByIndex(0);
			Assert.assertEquals(arr.get(0), 2); 
			System.out.println("Running testRemove");
		} catch(Exception e) {
			System.out.println("Some exception occured.");
		}
	} 
	@Test
	public void testRemoveByValue () {
		try {
			arr.add(3);
			arr.add(5);
			arr.removeByValue(3);
			Assert.assertEquals(arr.get(0), 5); 
			System.out.println("Running testRemoveByValue");
		} catch(Exception e) {
			System.out.println("Some exception occured.");
		}
	}   

	@Test
	public void testAdd() {
		try {
			arr.insert(0,1);
			arr.insert(1,2);
			Assert.assertEquals(arr.get(1), 2); 
			System.out.println("Running testAdd");
		} catch(Exception e) {
			System.out.println("Some exception occured.");
		}
	}   

	@Test
	public void testReplace () {
		try {
			arr.insert(0,1);
			arr.insert(1,2);
			arr.replace(0,7);
			Assert.assertEquals(arr.get(0), 7); 
			System.out.println("Running testReplace");
		} catch(Exception e) {
			System.out.println("Some exception occured.");
		}
	}  
} 

