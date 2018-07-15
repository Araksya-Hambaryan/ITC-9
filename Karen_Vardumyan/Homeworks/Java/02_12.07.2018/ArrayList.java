class ArrayList {
	int size;
	int cup;
	int factor;
	int [] array;

	ArrayList(int size, int factor) {
		this.array = new int[size];
		this.cup = 0;
        this.size = size;
		this.factor = factor;
	}
	
	void add(int element) {
		if(cup < (size * factor)/100) {
			array[cup] = element;
		} else {
			int [] temp = new int[this.size * 2];
			for(int i=0; i<this.size; ++i) {
				temp[i] = array[i];
			}
	//		this.size = this.size * 2;
			temp[cup] = element;
			array = temp;
		}
		cup++;
	}
	int getSize() {
		return this.size;
	}
	void addByIndex(int value, int index) {
		cup++;
		array[index] = value;
	}
    int get(int index) {
		return array[index];
	}
}
