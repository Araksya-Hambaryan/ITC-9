public class Main {
    public static void main(String[] args) {
        ArrayList arr0 = new ArrayList();
        for(int i = 0; i < 20; ++i) {
            arr0.addItem(i);       
        }
        System.out.println("Array created by def. canstr. and added 20 times:");
        arr0.printArray();

        ArrayList arr1 = new ArrayList(5, 0.75F);
        arr1.printArray();
        for(int i = 0; i < 5; ++i) {
            arr1.addItem(i);       
        }
        System.out.println("Custom capacity(5) Array  and added 5 times:");
        arr1.printArray();

        ArrayList arr2 = new ArrayList(8, 1);
        arr1.printArray();
        for(int i = 0; i < 4; ++i) {
            arr2.addItem(i);       
        }
        System.out.println("Created Array of size 8 and added 5 times:");
        arr2.printArray();

        arr2.insert(2, 99);
        System.out.println("Inserted 99 at 2nd index:");
        arr2.printArray();

        arr2.remove(5);
        System.out.println("Removed item at fifth index:");
        arr2.printArray();

        arr2.removeByValue(99);
        System.out.println("Removed item by value 99:");
        arr2.printArray();
        
        System.out.println("Now size is: " + arr2.getSize());
    }
}

