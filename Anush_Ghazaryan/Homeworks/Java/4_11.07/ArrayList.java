import java.util.Arrays;
import java.io.*;
public class ArrayList {

    private Object[] arr = null;;
    private int size = 0;

    public ArrayList(){
        arr  = new Object[10];
    }

    public Object get(int index){
        if(index < size){
            return arr[index];
        } else {
            throw new ArrayIndexOutOfBoundsException();
        }
    }

    public void add(Object obj){
        if(arr.length - size <= 5){
            increaseListSize();
        }
        arr[size++] = obj;
    }

    public Object remove(int index){
        if(index < size){
            Object obj = arr[index];
            arr[index] = null;
            int tmp = index;
            while(tmp < size){
                arr[tmp] = arr[tmp+1];
                arr[tmp+1] = null;
                tmp++;
            }
            size--;
            return obj;
        } else {
            throw new ArrayIndexOutOfBoundsException();
        }
         
 }

    public int size(){
        return size;
    }

    private void increaseListSize(){
        arr = Arrays.copyOf(arr, arr.length * 2);
        System.out.println("\nNew length: "+ arr.length);
    }
}
