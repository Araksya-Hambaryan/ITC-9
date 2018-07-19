package com.itc.calculator;
import com.itc.calculator.Calc;
import org.testng.annotations.*;
import org.testng.Assert;

public class AppTest {
	
	@Test
	public static void plusTest() {
		Assert.assertEquals(Calc.<Float>plus(5.0f,2.0f), 7.0f);		
		Assert.assertEquals(Calc.<Float>plus(50.0f,2.0f), 52.0f);		
		Assert.assertEquals(Calc.<Float>plus(0.0f,2.0f), 2.0f);		
		Assert.assertEquals(Calc.<Float>plus(-5.0f,2.0f), -3.0f);		
		Assert.assertEquals(Calc.<Float>plus(-5.0f,-2.0f), -7.0f);		
	}
	@Test
	public static void minusTest() {
		Assert.assertEquals(Calc.<Float>minus(5.0f,2.0f), 3.0f);		
		Assert.assertEquals(Calc.<Float>minus(50.0f,2.0f), 48.0f);		
		Assert.assertEquals(Calc.<Float>minus(0.0f,2.0f), -2.0f);		
		Assert.assertEquals(Calc.<Float>minus(-5.0f,2.0f), -7.0f);		
		Assert.assertEquals(Calc.<Float>minus(-5.0f,-2.0f), -3.0f);		
	}
	@Test
	public static void bajTest() {
		Assert.assertEquals(Calc.<Float>baj(5.0f,2.0f), 2.5f);		
		Assert.assertEquals(Calc.<Float>baj(50.0f,2.0f), 25.0f);		
		Assert.assertEquals(Calc.<Float>baj(6.4f,2.0f), 3.2f);		
		Assert.assertEquals(Calc.<Float>baj(5.0f,1.0f), 5.0f);		
	}
    @Test 
	public static void dividByZero() {
		try {
			Calc.<Float>baj(5.0f, 0.0f);
		} catch (ArithmeticException ex) {
			System.out.println(ex);
			System.out.println("==================all ok============================");
		}
	}
	@Test
	public static void bazmTest() {
		Assert.assertEquals(Calc.<Float>bazm(5.0f,1.0f), 5.0f);		
		Assert.assertEquals(Calc.<Float>bazm(5.0f,3.0f), 15.0f);		
		Assert.assertEquals(Calc.<Float>bazm(51.0f,1.0f), 51.0f);		
		Assert.assertEquals(Calc.<Float>bazm(5.0f,0.0f), 0.0f);		
	}

}
