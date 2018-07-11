//package transport;
import java.util.*;

public class Bicycle extends Transport {
    Bicycle(String name, int countOfWeel, String color) {
        m_name = name;
        m_countOfWeel = countOfWeel;
        m_color = color;
    }
    @Override
    public void move() {
        System.out.println("=====Bicycle=====");
        System.out.println("Move of "+getName());
    }
}

