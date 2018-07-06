class TestClass {

    int x;
    int y;
    
    public TestClass() {
        x = 0;
        y = 0;
    }

    public void printHello() {
        System.out.println("Hello!!!");
    }
    
    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }

    @Run
    private void printX(int call) {
        System.out.println("printX -> This is a private method.( count of calls = " + call + " ) x = " + x);
    }

    @Run(runCount=5)
    private void printY(int call) {
        System.out.println("printY -> This is a private method.( count of calls = " + call + " ) y = " + y);
    }
    
    @Run(runCount=10)
    public void printSum(int call) {
        System.out.println("printSum -> This is a public method.( count of calls = " + call + " ) x + y = " + (x + y));
    }
}
