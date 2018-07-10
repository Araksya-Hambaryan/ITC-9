package Trans;
class AirPlane implements Transport {
    @Override
    public void move() {
        System.out.println("Airplane moves at max speed of 1400km/h");
    }
    int numberOfWings=2;
}

