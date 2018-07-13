import java.util.Arrays;
import java.io.*; 
public class ArrayList{
	private	int size = 0;
	private	int[] arr;
	private int capacity = 16;
	private float loadFactor = 0.5f;

	public ArrayList(){
		arr = new int[capacity];
	}
	public ArrayList(int capacity,float loadFactor){
		this.capacity = capacity;
		this.loadFactor = loadFactor;
		arr = new int[capacity];
	}

	public int getSize() {
		return size;
	}	

	public int getElement(int index){
		if (index < 0 || index >= size) {
			System.out.print("incorrect index");
            return 0;
		}
		return arr[index];
	}

	public void resize() {
		capacity = capacity * 2;
		arr = Arrays.copyOf(arr, capacity);
	}

	public void printList() {
		for( int i = 0; i < size; ++i) {
			System.out.print(arr[i] + " , ");
		}
    System.out.println();
	}
	public void push(int element){
		if (capacity * loadFactor == size) {
			resize();
		}
		++size;
		arr[size - 1] = element;
	}

	public void pop() {
		--size;
		if(size < 0){
			System.out.println("ArrayList is empaty ");
		}
		int[] temp = Arrays.copyOf(arr, size);

		arr = new int[size];
		for(int i = 0; i < size ; ++i){
			arr[i] = temp[i];
		}

	}	


	public void insert(int index, int value) {
		if (index < 0 || index >= size) {
			System.out.print("incorrect index");
		}
		if (capacity * loadFactor == size) {
			resize();
		}
		++size;
		int[] temp = Arrays.copyOf(arr, capacity);
		for( int i = 0; i < index; ++i) {
			arr[i] = temp[i];
		}
		arr[index] = value;
		for( int i = index + 1; i < size; ++i) {
			arr[i] = temp[i - 1];
		}
	}
	
	public void remove(int index) {
		if (index < 0 || index >= size) {
			System.out.print("incorrect index");
		}
		int[] temp = Arrays.copyOf(arr, capacity);
		--size;

		for( int i = 0; i < index; ++i) {
			arr[i] = temp[i];
		}

		for( int i = index ; i < size; ++i) {
			arr[i] = temp[i + 1];
		}

	}
}
