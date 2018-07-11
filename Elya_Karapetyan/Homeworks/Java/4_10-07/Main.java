//package transport;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Car c = new Car("BMW", 4, "red");
        Car.Motor m = c.new Motor(2.0, 3);
        c.move();
        m.printInfo();
        Bicycle b = new Bicycle("bicycle", 2, "blue");
        Bicycle.Motor bm = b.new Motor(0, 0);
        b.move();
        bm.printInfo();
        Bus bus = new Bus("bus", 6, "green");
        Bus.Motor busm = bus.new Motor(1.8, 2);
        bus.move();
        busm.printInfo();

    }
}
