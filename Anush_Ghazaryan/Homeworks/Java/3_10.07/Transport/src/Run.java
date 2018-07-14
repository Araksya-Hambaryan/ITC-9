public class Run {
    public static  void main(String [] args){
        Car car = new Car(75, 2,2);
        car.startDriving();
        car.stopDriving();

        Train train = new Train(5,4,10,60);
        train.startDriving();
        train.takesPeople();
        train.stopDriving();

        Bus bus = new Bus(70,4,5);
        bus.startDriving();
        bus.takesPeople();
        bus.stopDriving();

    }
}
