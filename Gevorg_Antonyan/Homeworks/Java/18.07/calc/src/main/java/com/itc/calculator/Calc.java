package com.itc.calculator;

public class Calc <T extends Number> {

    public static <T extends Number> float plus(T var1, T var2) {
        float num1;
        num1 = var1.floatValue();
        float num2;
        num2 = var2.floatValue();
        float sum = num1 + num2;
        System.out.println(sum);
        return sum;
    }

    public static <T extends Number> float minus(T var1, T var2) {
        float num1;
        num1 = var1.floatValue();
        float num2;
        num2 = var2.floatValue();
        float minus = num1 - num2;
        System.out.println(minus);
        return minus;
    }

    public static <T extends Number> float baj(T var1, T var2) {
        float num1;
        num1 = var1.floatValue();
        float num2;
        num2 = var2.floatValue();
		if(0.0f == num2) {
			throw new ArithmeticException();
		} else {
        	float baj = num1 / num2;
        	System.out.println(baj);
        	return baj;
		}
    }

    public static <T extends Number> float bazm(T var1, T var2) {
        float num1;
        num1 = var1.floatValue();
        float num2;
        num2 = var2.floatValue();
        float bazm = num1 * num2;
        System.out.println(bazm);
        return bazm;
    }
}
