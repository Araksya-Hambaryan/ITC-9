package com.company;

public abstract class Car {

    public abstract String getSpeed();
    public abstract String getColor();
    public abstract int getWheelsCount();

    @Override
    public String toString(){
        return "Speed = "+this.getSpeed()+", Color = "+this.getColor()+", Wheels Count = "+this.getWheelsCount();
    }
}
