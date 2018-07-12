public class Main {

    public static void main(String[] args) {
        CustomLinkedList<Integer> arr = new CustomLinkedList();
        arr.add(10);
        arr.add(20);
        arr.add(30);
        arr.add(40);
        arr.replace(0, 777);
        arr.insert(2, 100);
        arr.removeByIndex(3);
        arr.removeByValue(40);
        arr.removeByValue(40);
        arr.print();
        System.out.println("-----------------------------");
        CustomLinkedList<Double> arr1 = new CustomLinkedList();
        arr1.add(0.5);
        arr1.add(50.0);
        arr1.add(40.0);
        arr1.add(90.0);
        arr1.replace(0, 0.7);
        arr1.insert(2, 0.8);
        arr1.removeByIndex(3);
        arr1.removeByValue(90.0);
        arr1.removeByValue(90.0);
        arr1.print();
    }
}
