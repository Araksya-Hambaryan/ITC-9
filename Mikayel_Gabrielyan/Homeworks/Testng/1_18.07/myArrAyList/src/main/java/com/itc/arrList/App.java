package com.itc.arrList;

public class App {
    public static void main(String[] args) {
        MyArrList list = new MyArrList();
        try {
            list.add(3);
            list.add(5);
            list.add(7);
            list.add(9);
            list.printArrList();
            list.insert(2,11);
            list.printArrList();
            list.pop();
            System.out.println(list.getElement(1));
            list.printArrList();
            list.remove(1);
            list.printArrList();
            list.insert(10,10);
            list.printArrList();
        } catch(IndexOutOfBoundsException ex) {
            System.out.println(ex);
        }
        list.add(15);
        list.printArrList();
    }
}
