package itc9;
import org.testng.annotations.Test;
import org.testng.Assert;
import itc9.*;

public class TestClass {
    Calculator<Integer> calc = null; 

    @Test
    public void  testPlus () {
        calc = new Calculator<Integer>(5,10);
        Assert.assertEquals(calc.plus(),15);
        calc = null;
    }
    
	@Test
	public void testMinus () {
		calc = new Calculator<Integer>(-1,1);
		Assert.assertEquals(calc.minus(),-2);
        calc = null;
	}

	@Test
	public void testMul () {
		calc = new Calculator<Integer>(0,7);
		Assert.assertEquals(calc.bazm(),0);
	    calc = null;
    }    

	@Test
	public void testDiv () {
		calc = new Calculator<Integer>(5,2);
		Assert.assertEquals(calc.baj(),2);
        calc = null;
    }

    @Test (expectedExceptions = ArithmeticException.class)
    public void testDiv2 () {    
        calc = new Calculator<Integer>(9,0);
        calc.baj();
        calc = null;
	}

}
