//package transport;
import java.util.*;

public class Car extends Transport {
    Car(String name, int countOfWeel, String color) {
        m_name = name;
        m_countOfWeel = countOfWeel;
        m_color = color;
    }
    @Override
    public void move() {
        System.out.println("=====Car=====");
        System.out.println("Move of "+getName());

    }
}
