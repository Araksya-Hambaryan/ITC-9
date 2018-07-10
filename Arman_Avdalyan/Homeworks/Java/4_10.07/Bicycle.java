class Bicycle implements Vehicle {
    
    public Car(String color) {
        this.color = color;
        this.transmission = 0;
        this.power = 0;
        this.engine = 0;
        this.seats = 1;
        this.doors = 0;
    }

    public void rotatePedals() {...}

    public void brack() {...}
    
    public void steering() {...}

    void setColor() {...}
    String getColor() {...}

    void setSeats() {...}
    int getSeats() {...}
}
