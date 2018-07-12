import java.util.Arrays;
class arrayList {
    int initialSize = 10;
    int[] arr = new int[initialSize];
    int currentSize = 0;
    double loadFactor = 0.75;

    void doubleSize() {
        initialSize = currentSize * 2;
        int[] newArr = Arrays.copyOf(arr,initialSize);
        arr = Arrays.copyOf(newArr,initialSize);
    }

    void insertAt(int index, int value) {
        if (validIndex(index)) {  
            if (isAlmostFull()) {
                doubleSize();
                insertAt(index,value);
            } else {
                ++currentSize;
                for (int i = currentSize -1; i > index; --i) {
                    arr[i] = arr[i - 1]; 
                }
                arr[index] = value;
            }
        }
    }

    void removeAt (int index) {
        if (validIndex(index)) {
            for (int i = index - 1; i < currentSize; ++i) {
                arr[i] = arr[i + 1];
                arr[currentSize] = 0;
            }
            --currentSize;
        }
    }

    void removeValue(int value) {
        for ( int i = 0; i < currentSize; ++i) {
            if ( arr[i] == value ) {
                removeAt(i + 1);
                return;
            }
        }
        System.out.println("No such value in the array list!");
    }

    void getSize() {
        System.out.println("Size of array list is: " + currentSize);
    }
    void getElementAt(int index) {
        if (validIndex(index)) {
            System.out.println("The requested element is: " + arr[index]);
        }
    }

    void pushBack(int value) {
        insertAt(currentSize, value);
    }

    boolean isAlmostFull() {
        if ( (currentSize / initialSize) > loadFactor ) {
            return true;
        } else {
            return false;
        }
    }

    boolean validIndex (int index) {
        if ( index < 0 || index > (currentSize) ) {
            throw new IndexOutOfBoundsException("Invalid index!");
        } else {
            return true;
        }
    }

    void printArr() {
        System.out.print("Array List: [ ");
        for (int i = 0; i < currentSize; ++i) {
            System.out.print(arr[i] + " ");
        }
        System.out.println("]");
    }
}
