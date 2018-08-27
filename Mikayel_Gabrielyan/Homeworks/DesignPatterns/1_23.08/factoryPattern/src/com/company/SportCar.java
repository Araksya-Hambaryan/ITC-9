package com.company;

public class SportCar extends Car {

    private String speed;
    private String color;
    private int wheelsCount;

    public SportCar(String speed, String color, int wheelsCount){
        this.speed=speed;
        this.color=color;
        this.wheelsCount=wheelsCount;
    }

    @Override
    public String getSpeed() {
        return this.speed;
    }

    @Override
    public String getColor() {
        return this.color;
    }

    @Override
    public int getWheelsCount() {
        return this.wheelsCount;
    }
}
