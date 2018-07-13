public class Main {
    public static void main(String[] args) {
        ArrayList<Integer> arr0 = new ArrayList<>();
        for(int i = 0; i < 20; ++i) {
            arr0.addItem(i);       
        }
        System.out.println("Array of Integers:");
        arr0.printArray();

        ArrayList<Float> arr1 = new ArrayList<>();
        for(Float i = 0F; i < 20F; ++i) {
            arr1.addItem(i);       
        }
        System.out.println("Array of Floats:");
        arr1.printArray();
    }
}

