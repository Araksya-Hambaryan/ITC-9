public class Run {

	 public static void main(String [] args){
        LinkedList<Integer> list = new LinkedList<Integer>();
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);
        list.addAfter(65, 30);
        list.deleteFront();
        list.deleteAfter(65);
        list.traverse();

    }



}
