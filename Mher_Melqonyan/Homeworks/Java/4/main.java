class main {
    public static void main(String[] args) {
        arrayList al = new arrayList();
        al.insertAt(0,1);
        al.insertAt(1,2);
        int ran;
        for(int i = 2; i < 15; ++i){
            ran=i + (int) (Math.random() * 100);
            al.insertAt(i, ran);
        }
        al.print();
        System.out.println("in 4 th index added 0");
        al.insertAt(4,0);
        al.print();
        al.deleteAt(6);
        System.out.println("in 6 th index deleted value");
        al.print();
    }
}
