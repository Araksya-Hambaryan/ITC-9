public class ArrayList <T extends Number> {
    int size;
    int inCap;
    float loadFact;
    Number[] arrayList = null;/////////////////

    ArrayList() {
        this.inCap = 16;
        this.loadFact = 0.75F;
        arrayList = new Number[inCap];//////////////
        this.size = 0;
    }
    
    ArrayList(int size, T fill) {
        this.inCap = size*2;
        this.loadFact = 0.75F;
        arrayList = new Number[inCap];/////////////////
        this.size = size;
        for(int i = 0; i < size; ++i) {
            arrayList[i] = fill;
        }
    }

    ArrayList(int inCap, float loadFact) {
        arrayList = new Number[inCap];//////////////////
        this.size = 0;
        this.inCap = inCap;
        this.loadFact = loadFact;
    }    

    void addItem(T newElem) {
        arrayList[size] = newElem;
        ++size;
        isNeedResize();
    }

    void insert(int index, T newElem) {
        for(int i = size; i > index; --i) {
            arrayList[i] = arrayList[i-1];
        }
        arrayList[index] = newElem;
        ++size;
        isNeedResize();
    }

    void remove(int index) {
        for(int i = index; i < size; ++i) {
            arrayList[i] = arrayList[i+1];
        }
        arrayList[size] = null;
        --size;
    }

    void removeByValue(T value) {
        int index;
        for(int i = 0; i < size; ++i) {
            if(arrayList[i] == value) {
                index = i;
                remove(index);
                return;
            }
        }
    }

    int getSize() {
        return this.size;
    }

    void isNeedResize() {
        if(size > loadFact*inCap) {
            inCap = inCap*2;
            Number[] arrayTmp = new Number[inCap];////////////
            for(int i = 0; i < this.size; ++i) {
                arrayTmp[i] = arrayList[i];
            }
            arrayList = arrayTmp;
            System.out.println("Array is recreated!");
        }
    }

    void printArray() {
        if (this.size == 0) {
            System.out.println("The array is empty!");
            return;
        }
    

        for(int i = 0; i < this.size; ++i) {
            System.out.print(arrayList[i] + " ");
        }
        System.out.println();
    }

}

