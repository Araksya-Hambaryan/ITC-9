import java.lang.reflect.Array;
import java.util.ArrayList;

public class Consumer implements Runnable {

    private ArrayList<Integer> list;
    private int consumerId;

    public Consumer(ArrayList list, int consumerId) {
        this.list = list;
        this.consumerId = consumerId;
    }

    @Override
    public synchronized void run() {
        int tmp = 0;
        for (int i = 0; i < 500; i++) {
            if (list.size() == 0) {
                System.out.println("Consumer" + consumerId + " sleeping: ");
            }
            if (tmp == 0) {
                System.out.println("Consumer " + consumerId + " working: ");
            }
            while (list.isEmpty()) {
                try {
                    Thread.sleep(1000);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
            try {
                list.remove(0);
            } catch (IndexOutOfBoundsException e) {
                e.getMessage();
            }
            tmp = list.size();
        }
    }
}
