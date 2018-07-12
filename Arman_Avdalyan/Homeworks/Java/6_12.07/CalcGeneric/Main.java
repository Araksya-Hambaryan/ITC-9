public class Main {

    public static void main(String[] args) {
        Calculator c = new Calculator();
        try {
            System.out.println("Integer num = " + (Integer) c.add(4, 8));
            System.out.println("Double num = " + (Double) c.sub(8.5, 10.7));
            System.out.println("Float num = " + (Float) c.mul(8.5f, 10.7f));
            Integer num = (Integer) c.mul(7, 5);
            System.out.println("num = " + num);
        } catch (ClassCastException e) {
            System.out.println("Can't cast numbers.");
        }
    }
}
