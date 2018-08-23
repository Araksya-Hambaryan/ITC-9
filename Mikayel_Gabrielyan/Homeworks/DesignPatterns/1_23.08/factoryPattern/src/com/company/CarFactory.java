package com.company;

public class CarFactory {

    public static Car getCar(String type, String speed, String color, int wheelsCount){
        if("SportCar".equalsIgnoreCase(type)) {
            return new SportCar(speed, color, wheelsCount);
        }
        else if("RoadCar".equalsIgnoreCase(type)) {
            return new RoadCar(speed, color, wheelsCount);
        }
        return null;
    }
}
