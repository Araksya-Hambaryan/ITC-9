import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) {
        ArrayList arrList = new ArrayList();
            arrList.printList(); 
            arrList.push(6);
	        arrList.push(1);
  	        arrList.push(8);
            arrList.printList();
            arrList.insert(1,2);
            arrList.printList();
            arrList.pop();
            arrList.printList();
            arrList.remove(3);
            arrList.printList();
         
    }
}
