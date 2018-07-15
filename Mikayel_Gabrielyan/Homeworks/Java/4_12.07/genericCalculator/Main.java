public class Main {
    public static void main(String[] args) {
        GenericCalculator obj = new GenericCalculator();
            System.out.print("Integer -> ");
            obj.add(10, 5);
            System.out.print("\nFloat -> ");
            obj.sub(10.8f, 2.5f);
            System.out.print("\nDouble -> ");
            obj.mul(0.01, 10.0);
            System.out.print("\nFloat -> ");
            obj.div(27.9f, 3.1f);
    }
}