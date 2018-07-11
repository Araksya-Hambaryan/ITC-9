public class Main {
    public static void main(String[] args) {
        ArrayList arr0 = new ArrayList();
        arr0.printArray();
        ArrayList arr1 = new ArrayList(5, 0.75F);
        arr1.printArray();
        for(int i = 0; i < 5; ++i) {
            arr1.addItem(i);       
        }
        arr1.printArray();

    }
}

