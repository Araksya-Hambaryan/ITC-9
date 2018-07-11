class arrayList {
	public int[] array;
	private int num;
	public arrayList() {
		this.array = new int[16];
		this.num = 0;
	}

	private void change(int start, int end) {
		for (int i = start; i < end - 1; ++i){
			this.array[i] = array[i + 1];
		}
	}

	private void test() {
		if (this.num <= this.array.length*3/4) {
			return;
		}
		int[] tmp = new int[this.array.length + 20];
		for (int i = 0; i < this.array.length; ++i) {
			tmp[i] = this.array[i];
		}
		this.array = tmp;
	}


	public int size() {
		return this.num;
	}

	public void add(int number){
		this.array[this.num] = number;
		this.num += 1;
		test();
	}

	public void insert(int index, int value) {
		if(index > this.num) {
			index = this.num;
			System.out.println("index is invaled, caused by add method");
		}
		for(int i = this.num + 1; i > index; --i) {
			this.array[i] = this.array[i - 1];
		}
		this.array[index] = value;
		this.num += 1;
		test();
	}

	public int get(int index){
		if(index > this.num) {
			index = this.num;
			System.out.println("index is invaled");
			return 0;
		}
		return this.array[index];
	}

	public void removeByIndex(int index) {
		if(index > this.num) {
			System.out.println("index is invaled");
			return;
		}
		change(index, this.num + 1);
		this.num -= 1;
	}

	public void removeByValue(int value) {
		boolean check = false;
		int index = 0;
		for (int i = 0; i < this.num; ++i) {
			if (this.array[i] == value) {
				check = true;
				index = i;
				break;
			}
		}
		if (check) {
			removeByIndex(index);
		}

	}


}
