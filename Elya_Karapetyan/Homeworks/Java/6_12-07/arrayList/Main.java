import java.util.*;

public class Main {
    public static void main(String[] args) {
        MyArrayList<Integer> list = new MyArrayList<>();
        list.add(1);
        list.add(2);
        list.add(3);
        list.insert(1,12);
        list.printArrayList();
        list.popBack();
        list.printArrayList();
        list.remove(1);
        list.printArrayList();

        MyArrayList<Float> list1 = new MyArrayList<>();
        list1.add(1.45f);
        list1.add(21.12f);
        list1.add(3.2f);
        list1.insert(1,12.12f);
        list1.printArrayList();
        list1.popBack();
        list1.printArrayList();
        list1.remove(1);
        list1.printArrayList();

    }
}
