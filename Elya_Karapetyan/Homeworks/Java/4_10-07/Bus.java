//package transport;
import java.util.*;

public class Bus extends Transport {
    Bus(String name, int countOfWeel, String color) {
        m_name = name;
        m_countOfWeel = countOfWeel;
        m_color = color;
    }
    @Override
    public void move() {
        System.out.println("=====Bus=====");
        System.out.println("Move of "+getName());
    }
}
