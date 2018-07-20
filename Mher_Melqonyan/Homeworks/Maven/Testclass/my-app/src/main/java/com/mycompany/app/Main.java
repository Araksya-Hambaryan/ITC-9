package com.mycompany.app;
public class Main {

    public static void main(String[] args) {
        CustomArrayList<Double> arr = new CustomArrayList();
        arr.add(20.0);
        arr.add(30.0);
        arr.add(40.0);
        arr.add(50.0);
        arr.add(60.0);
        arr.add(70.0);
        arr.add(8.00);
        arr.add(90.0);
        arr.insert(7, 100.0);
        arr.removeByIndex(3);
        arr.removeByIndex(3);
        arr.removeByValue(92.0);
        arr.insert(20, 100.0);
        arr.replace(0, 777);
        arr.add(1000.0);
        arr.printArray();

        CustomArrayList<Integer> arr1 = new CustomArrayList();
        arr1.add(20);
        arr1.add(30);
        arr1.add(40);
        arr1.add(50);
        arr1.add(60);
        arr1.add(70);
        arr1.add(80);
        arr1.add(90);
        arr1.insert(7, 100);
        arr1.removeByIndex(3);
        arr1.removeByIndex(3);
        arr1.removeByValue(92);
        arr1.insert(20, 100);
        arr1.replace(0, 777);
        arr1.add(1000);
        System.out.println();
        arr1.printArray();

    }
}
