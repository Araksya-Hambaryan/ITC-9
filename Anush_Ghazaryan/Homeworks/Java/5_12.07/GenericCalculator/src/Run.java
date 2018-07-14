public class Run {
    public static void main(String[]args){
        Calculator<Integer> c1 = new Calculator<>();
        Calculator<Double> c2 = new Calculator<>();
        System.out.println(c1.add(5,4));
        System.out.println(c2.div(12.0,6.0));

    }
}
