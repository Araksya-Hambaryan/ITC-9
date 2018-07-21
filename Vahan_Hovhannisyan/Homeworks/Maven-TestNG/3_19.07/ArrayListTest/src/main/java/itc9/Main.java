package itc9;
class Main {
    public static void main(String[] args) {
        CustomArrayList arr = new CustomArrayList();
        arr.add(10);
        arr.add(20);
        arr.add(30);
        arr.add(40);
        arr.add(50);
        arr.add(60);
        arr.add(70);
        arr.add(80);
        arr.add(90);
        arr.insert(7, 100);
        arr.removeByIndex(3);
        arr.removeByIndex(3);
        arr.removeByValue(92);
        arr.insert(20, 100);
        arr.replace(0, 777);
        arr.printArray();
    }
}
