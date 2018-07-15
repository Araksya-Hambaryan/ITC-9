import java.util.Random;
class Q {
    int randomNum;
    int numberOfElements=0;

    synchronized public void get() {
        try {
            while ( numberOfElements <= 0 ) {
                wait();
            }
            Thread.sleep(150);
        } catch (InterruptedException e) {
            System.out.println("Thread interrupted.");
        }
        System.out.println("Got: "+ randomNum);
        System.out.println("Number of elements: "+ (--numberOfElements));
        notify();
    }


    synchronized public void put(int randomNum) {
        try {
            while ( numberOfElements >= 100 ) {
                wait();
            }
            Thread.sleep(150);
        } catch (Exception e) {
            System.out.println("Exception occured.");
        }
        this.randomNum=randomNum;
        System.out.println("Put: " + randomNum);
        ++numberOfElements;
        notify();
    }
}

class Producer implements Runnable {
    Producer (Q q) {
        this.q=q;
    }
    Q q;
    public void run() {
        Random rand = new Random();
        while( true ) {
            int randomNum = rand.nextInt((100-1) + 1);    
            q.put(randomNum);
        }
    }
}

class Consumer implements Runnable {
    Consumer (Q q) {
        this.q=q;
    }
    Q q;
    public void run() {
        while( true ) {
            q.get();
        }
    }
}

class PCmodel {
    public static void main(String[] args) {
        Q q = new Q();
        Consumer c = new Consumer(q);
        Producer p = new Producer(q);
        try {
            Thread conThr1 = new Thread(c);
            Thread conThr2 = new Thread(c);

            Thread proThr1 = new Thread(p);
            Thread proThr2 = new Thread(p);
            Thread proThr3 = new Thread(p);

            System.out.println("Press ctrl+c to exit program.");
            proThr1.start();
            proThr2.start();
            proThr3.start();

            conThr1.start();
            conThr2.start();
        }
        catch (Exception e) {
            System.out.println("Some exception occured.");
        }
    }
}
