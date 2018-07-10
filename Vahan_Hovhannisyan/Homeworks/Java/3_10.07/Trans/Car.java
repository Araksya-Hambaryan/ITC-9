package Trans;
class Car implements Transport{
    @Override
    public void move() {
        System.out.println("Car moves at max speed of 400km/h");
    }
    int numberOfWheels=4;

   static class Interior {
        public void show() {
            System.out.println("Interior of car");
        }
    }    
}
