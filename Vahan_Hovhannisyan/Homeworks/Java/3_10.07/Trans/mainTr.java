package Trans;
import Trans.*;
class mainTr {
    public static void main(String[] args) {
        Car c = new Car();
        c.move();
        System.out.println("Car has "+c.numberOfWheels+" wheels.");
        Car.Interior inter = new Car.Interior();
        inter.show();

        AirPlane ap = new AirPlane();
        ap.move();
        System.out.println("Airplane has "+ap.numberOfWings+" wings.");
    }
}
