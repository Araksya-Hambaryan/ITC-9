class Main {
    public static void main(String[] args) {
        CustomLinkedList arr = new CustomLinkedList();
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
    }
}
