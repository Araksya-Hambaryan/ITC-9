public class Car extends Transport {
    private float speed;
    private int doors;
    private int windows;

    public float getSpeed() {
        return speed;
    }

    public int getDoors() {
        return doors;
    }

    public int getWindows() {
        return windows;
    }

    public void setDoors(int doors) {
        this.doors = 4;
    }

    public void setSpeed(float speed) {
        this.speed = speed;
    }

    public void setWindows(int windows) {
        this.windows = 4;
    }

    public Car(float speed, int doors, int windows){
        this.doors = doors;
        this.windows = windows;
        this.speed = speed;
    }
    @Override
    public void startDriving(){
        System.out.println("Car starts to go. It's speed is  " + getSpeed()+
                "\nIt has "+ getDoors()+" doors and " + getWindows()+ " windows");
    }
    @Override
    public void stopDriving(){
        System.out.println("Car stopped ");
    }
}
