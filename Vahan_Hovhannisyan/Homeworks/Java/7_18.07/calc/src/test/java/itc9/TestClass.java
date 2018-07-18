package itc9;
import org.testng.annotations.*;
import org.testng.Assert;
import itc9.*;

public class TestClass {
    Calculator<Integer> calc; 
    @BeforeTest
    public void obj() {
        calc = new Calculator<Integer>(5,10);
    }

    @Test
    public void  testPlus () {
        calc = new Calculator<Integer>(5,10);
        Assert.assertEquals(calc.plus(),15);
    }
    
	@Test
	public void testMinus () {
		calc = new Calculator<Integer>(-1,1);
		Assert.assertEquals(calc.minus(),-2);
	}

	@Test
	public void testMul () {
		calc = new Calculator<Integer>(0,7);
		Assert.assertEquals(calc.bazm(),0);
	}    

	@Test
	public void testDiv () {
		calc = new Calculator<Integer>(5,2);
		Assert.assertEquals(calc.baj(),2);
    }

    @Test (expectedExceptions = ArithmeticException.class)
    public void testDiv2 () {    
        calc = new Calculator<Integer>(9,0);
        calc.baj();
	}

}
