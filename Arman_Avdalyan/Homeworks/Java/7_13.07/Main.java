import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>(200);
        list.clear();
        Producer producer1  = new Producer(list, 1, 200);
        Producer producer2  = new Producer(list, 2, 200);
        Producer producer3  = new Producer(list, 3, 200);
        Consumer consumer1 = new Consumer(list, 1);
        Consumer consumer2 = new Consumer(list, 2);
        Consumer consumer3 = new Consumer(list, 3);

        Thread producerThread1 = new Thread(producer1);
        Thread producerThread2 = new Thread(producer2);
        Thread producerThread3 = new Thread(producer3);
        Thread consumerThread1 = new Thread(consumer1);
        Thread consumerThread2 = new Thread(consumer2);
        Thread consumerThread3 = new Thread(consumer3);

        producerThread1.start();
        producerThread2.start();
        producerThread3.start();
        consumerThread1.start();
        consumerThread2.start();
        consumerThread3.start();

    }
}