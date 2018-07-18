package com.mycompany.genericGenericcalculator;

public class Genericcalculator<T extends Number> {
    public static <T extends Number> T addNum(T firstNumber, T secondNumber) {
        String type = firstNumber.getClass().getTypeName();
        Number sum = 0;
        if (type == "java.lang.Integer") {
            sum = firstNumber.intValue() + secondNumber.intValue();
            return (T) sum;
        }
        if (type == "java.lang.Float") {
            sum = firstNumber.floatValue() + secondNumber.floatValue();
            return (T) sum;
        }
        if (type == "java.lang.Double") {
            sum = firstNumber.doubleValue() + secondNumber.doubleValue();
            return (T) sum;
        }
        return null;
    }

    public static <T extends Number> T subNum(T firstNumber, T secondNumber) {
        String type = firstNumber.getClass().getTypeName();
        Number sum = 0;
        if (type == "java.lang.Integer") {
            sum = firstNumber.intValue() - secondNumber.intValue();
            return (T) sum;
        }
        if (type == "java.lang.Float") {
            sum = firstNumber.floatValue() - secondNumber.floatValue();
            return (T) sum;
        }
        if (type == "java.lang.Double") {
            sum = firstNumber.doubleValue() - secondNumber.doubleValue();
            return (T) sum;
        }
        return null;
    }
    public static <T extends Number> T multNum(T firstNumber, T secondNumber) {
        String type = firstNumber.getClass().getTypeName();
        Number sum = 0;
        if (type == "java.lang.Integer") {
            sum = firstNumber.intValue() * secondNumber.intValue();
            return (T) sum;
        }
        if (type == "java.lang.Float") {
            sum = firstNumber.floatValue() * secondNumber.floatValue();
            return (T) sum;
        }
        if (type == "java.lang.Double") {
            sum = firstNumber.doubleValue() * secondNumber.doubleValue();
            return (T) sum;
        }
        return null;
    }
    public static <T extends Number> T dividNum(T firstNumber, T secondNumber) {
        String type = firstNumber.getClass().getTypeName();
        Number sum = 0;
        if (type == "java.lang.Integer") {
            sum = firstNumber.intValue() / secondNumber.intValue();
            return (T) sum;
        }
        if (type == "java.lang.Float") {
            sum = firstNumber.floatValue() / secondNumber.floatValue();
            return (T) sum;
        }
        if (type == "java.lang.Double") {
            sum = firstNumber.doubleValue() / secondNumber.doubleValue();
            return (T) sum;
        }
        return null;
    }
}
