public class Run {

	public static void main(String [] args){

        ArrayList list = new ArrayList();
        list.add(new Integer(10));
        list.add(new Integer(25));
        list.add(new Integer(1));
        list.add(new Integer(23));
        list.add(new Integer(14));
        System.out.println();
        for(int i = 0; i < list.size(); i++){
            System.out.print(list.get(i) + " ");
         }
        list.add(new Integer(9));
        System.out.println("Element at Index 5:" + list.get(5));
        System.out.println("ArrayList size: " + list.size());
        System.out.println("Removing element at index 2: " + list.remove(2));
        System.out.println();
        for(int i = 0; i < list.size(); i++){
            System.out.print(list.get(i) + " ");
        }
        System.out.println();
    }

}
