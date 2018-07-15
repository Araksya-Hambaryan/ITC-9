import java.util.*;

public class Main {
    public static void main(String[] args) {
        MyArrayList list = new MyArrayList();
        list.add(1);
        list.add(2);
        list.add(3);
        list.insert(1,12);
        list.printArrayList();
        list.popBack();
        list.printArrayList();
        list.remove(1);
        list.printArrayList();
    }
}
