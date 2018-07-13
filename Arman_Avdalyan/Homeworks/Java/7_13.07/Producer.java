import java.util.ArrayList;

public class Producer implements Runnable {

    private ArrayList<Integer> list;
    private int producerId;
    private int itemCount;

    public Producer(ArrayList list, int producerId, int itemCount) {
        this.list = list;
        this.producerId = producerId;
        this.itemCount = itemCount;
    }

    @Override
    public synchronized void run() throws IndexOutOfBoundsException {
        int tmp = 0;

        for (int i = 0; i < 500; i++) {
            if (list.size() >= 100) {
                System.out.println("Producer " + producerId + " sleeping: ");
            }
            if (list.size() <= 80 && tmp >= 80) {
                System.out.println("Producer " + producerId + " working: ");
            }
            while (list.size() >= 100) {
                try {
                    Thread.sleep(1000);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
            try {
                list.add(0);
            } catch (IndexOutOfBoundsException e) {
                e.getMessage();
            }
            tmp = list.size();
        }
    }
}