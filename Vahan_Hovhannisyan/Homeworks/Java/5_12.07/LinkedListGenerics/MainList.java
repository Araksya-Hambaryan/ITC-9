class MainList {
    public static void main (String[] args) {
        linkedList<Integer,Integer> ll = new linkedList<Integer,Integer>();
        ll.insertAt(1,0);
        ll.insertAt(1,1);
        ll.insertAt(1,2);
        ll.insertAt(2,7);
        ll.insertAt(5,6);
        ll.removeAt(5);
        ll.removeValue(2);
        ll.removeValue(10);
        ll.removeValue(7);
        ll.pushBack(8);
        ll.print();
    }
}
