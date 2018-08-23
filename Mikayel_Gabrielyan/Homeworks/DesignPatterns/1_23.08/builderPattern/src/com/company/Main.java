package com.company;

public class Main {

    public static void main(String[] args) {
        Car car = new Car.CarBuilder(
                "Black", "230 km/h").setIsXpac(false)
                .setIsNew(true).build();
        System.out.println("Builder Car Config ->  Color = " + car.getColor() + ", Speed = " + car.getSpeed() +
        ", Xpac a te che = " + car.isXpac() + ", Car is new = " + car.isNew());
    }
}
