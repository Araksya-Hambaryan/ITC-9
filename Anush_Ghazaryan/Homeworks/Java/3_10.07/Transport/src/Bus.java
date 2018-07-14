public class Bus extends Transport implements PublicTransport {
    private int doors;
    private int windows;
    private float speed;

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
        this.doors = 2;
    }

    public void setSpeed(float speed) {
        this.speed = speed;
    }

    public void setWindows(int windows) {
        this.windows = 10;
    }

    public Bus(float speed, int doors,int windows){
        this.doors = doors;
        this.windows = windows;
        this.speed = speed;
    }
    @Override
    public void takesPeople(){
        System.out.println("Bus takes people from  stations");
    }
    @Override
    public void startDriving(){
        System.out.println("Bus starts to go. It's speed is  " + getSpeed() + "\nIt has "+ getDoors()+" doors and "
                + getWindows()+ " windows");
    }
    @Override
    public void stopDriving(){
        System.out.println("Bus stopped ");
    }

}
