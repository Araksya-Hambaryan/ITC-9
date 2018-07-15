class GenCalc
{
    static <N extends Number> void sum (N num1, N num2) {
        System.out.println("The sum of " + num1 + " and " + num2 + " is " + (num1.floatValue() + num2.floatValue()));
    }
  
    static <N extends Number> void substraction ( N num1, N num2 ) {
        System.out.println("The difference of " + num1 + " and " + num2 + " is " + (num1.floatValue() - num2.floatValue()));
    }

     static <N extends Number> void multiplication (N num1, N num2) {
        System.out.println("The product of " + num1 + " and " + num2 + " is " + (num1.floatValue() * num2.floatValue()));
    }
  
    static <N extends Number> void division ( N num1, N num2 ) {
        if ( num2.floatValue() == 0 ) {
            System.out.println("Error! Division by zero!");
            return;
        }
        System.out.println("The quotient of " + num1 + " and " + num2 + " is " + (num1.floatValue() / num2.floatValue()));
    }

    public static void main(String[] args)
    {
        sum(11,1.0);
        substraction(10.5,5);
        multiplication(5,2);
        multiplication(-1,0.1);
        division(5.6,0);
        division(8,4.5);
    }
}
