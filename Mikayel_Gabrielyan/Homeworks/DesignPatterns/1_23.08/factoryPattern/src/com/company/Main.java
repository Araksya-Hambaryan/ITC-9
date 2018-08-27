package com.company;

public class Main {

    public static void main(String[] args) {
        Car sportCar = CarFactory.getCar("SportCar","300 km/h","red",4);
        Car roadCar = CarFactory.getCar("RoadCar","200 km/h","black",4);
        System.out.println("Factory SportCar Config -> " + sportCar);
        System.out.println("Factory RoadCar Config -> " + roadCar);
    }
}
