import java.util.Arrays;
class arrayList {
    int initialSize = 10;
    int[] arr = new int[initialSize];
    int currentSize = 0;
    double loadFactor = 0.75;

    void doubleSize() {
        initialSize = currentSize * 2;
        int[] newArr = Arrays.copyOf(arr,initialSize);
        arr = newArr;
    }

    void insertAt(int index, int value) {
        if (!validInsert(index)) {
            System.out.println("Current index is invalid"); 
            return;
        } else if (isFull()) {
            doubleSize();
        } else {
            ++currentSize;
            for (int i = currentSize -1; i > index; --i) {
                arr[i] = arr[i - 1]; 
            }
            arr[index] = value;
        }   
    }

    void deleteAt(int index) {
        if (!validInsert(index)) {
            System.out.println("Current index is invalid");
            return;
        } else {
            --currentSize;
            for (int i=index; i < currentSize; ++i) {
                arr[i] = arr[i+1]; 
            }
        }   
    }

    boolean isFull() {
        if ( (currentSize / initialSize) > loadFactor ) {
            return true;
        } else {
            return false;
        }
    }

    boolean validInsert (int index) {
        if ( index < 0 || index -1 > (currentSize) ) {
            System.out.println("Invalid index curr=" + currentSize + " " + index);
            return false;
        } else {
            return true;
        }
    }

    void print() {
        for (int i = 0; i < currentSize; ++i) {
            System.out.println("Element at index " + i + " is: " + arr[i]);
        }
    }
}
