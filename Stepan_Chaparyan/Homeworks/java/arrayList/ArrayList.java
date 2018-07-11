class ArrayList {
    
    int size = 16;
    int[] arrayList = null;
    float loadFactor = 0.75;
    int initCap = 0;

    public ArrayList() {
        array = new int[size];
    }

    public ArrayList(int size, float loadFactor) {
        this.size = size;
        this.loadFactor = loadFactor;
        array = new int[size];
    }

    public int getSize() {
        return size;
    }

    public boolean setEmpty() {
        return size == 0;
    }

    void insert(int index, int Element) {
        for(int i = size; i > index; --i) {
            arrayList[i] = arrayList[i-1];
        }
        arrayList[index] = Element;
        ++size;
	if(size > loadFactor*initCap) {
        initCap = initCap*;
    }

    
    public boolean removeByValue(int value) {
        int index;
        for (int i = 0; i < size; ++i) {
            if (array[i] == value) {
                index = i;
                break;
            }
        }
    }

    public void replace(int index, int value) {
        if (index >= 0 && index < size) {
            array[index] = value;
        }
    }


    public void printArray() {
        if (this.size == 0) {
            System.out.println("The array is empty!");
        }
        for(int i = 0; i < this.size; ++i) {
            System.out.print(arrayList[i]);
        }
    }
}
