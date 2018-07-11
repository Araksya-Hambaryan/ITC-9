import java.util.*;

public class Main {
    public static void main(String[] args) {
        MyLinkedList list = new MyLinkedList();
        list.pushBack(1);
        list.pushBack(2);
        list.pushBack(3);
        list.pushBack(333);
        list.insert(1,12);
        list.printList();
        System.out.println("2th elemnt's value: "+list.getElement(2));
        list.popBack();
        list.printList();
        list.remove(2);
        list.printList();
    }
}
