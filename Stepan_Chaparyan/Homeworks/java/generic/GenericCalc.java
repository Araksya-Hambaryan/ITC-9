class GenericCalc {
    public static <N extends Number> void sum (N num1, N num2) {
        System.out.println(num1 + " + " + num2 + " = " + (num1.floatValue() + num2.floatValue()));
    }
  
    public static <N extends Number> void substr (N num1, N num2 ) {
        System.out.println(num1 + " - " + num2 + " = " + (num1.floatValue() - num2.floatValue()));
    }

    public static <N extends Number> void multipl (N num1, N num2) {
        System.out.println(num1 + " * " + num2 + " = " + (num1.floatValue() * num2.floatValue()));
    }
  
    public static <N extends Number> void division (N num1, N num2 ) {
        System.out.println(num1 + " / " + num2 + " = " + (num1.floatValue() / num2.floatValue()));
    }

    public static void main(String[] args) {
        sum(7,4.5);
        substr(5.5,15);
        multipl(9,8);
        multipl(-4,0.2);
        division(80.5,-10);
        division(18,4.5);
    }
}
