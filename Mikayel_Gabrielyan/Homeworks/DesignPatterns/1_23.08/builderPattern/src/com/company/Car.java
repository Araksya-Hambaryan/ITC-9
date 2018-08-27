package com.company;

public class Car {

    //required parameters
    private String color;
    private String speed;

    //optional parameters
    private boolean isXpac;
    private boolean isNew;


    public String getColor() {
        return color;
    }

    public String getSpeed() {
        return speed;
    }

    public boolean isXpac() {
        return isXpac;
    }

    public boolean isNew() {
        return isNew;
    }

    private Car(CarBuilder builder) {
        this.color=builder.color;
        this.speed=builder.speed;
        this.isXpac=builder.isXpac;
        this.isNew=builder.isNew;
    }

    //Builder Class
    public static class CarBuilder{

        // required parameters
        private String color;
        private String speed;

        // optional parameters
        private boolean isXpac;
        private boolean isNew;

        public CarBuilder(String color, String speed){
            this.color=color;
            this.speed=speed;
        }

        public CarBuilder setIsXpac(boolean isXpac) {
            this.isXpac = isXpac;
            return this;
        }

        public CarBuilder setIsNew(boolean isNew) {
            this.isNew = isNew;
            return this;
        }

        public Car build(){
            return new Car(this);
        }
    }

}