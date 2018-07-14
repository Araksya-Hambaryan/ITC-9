public class Train extends Transport implements PublicTransport {
    private int meter;
    private int doors;
    private int windows;
    private float speed;

    public int getWindows() {
        return windows;
    }

    public int getDoors() {
        return doors;
    }

    public float getSpeed() {
        return speed;
    }

    public int getMeter() {
        return meter;
    }

    public void setWindows(int windows) {
        this.windows = windows;
    }

    public void setSpeed(float speed) {
        this.speed = speed;
    }

    public void setDoors(int doors) {
        this.doors = doors;
    }

    public void setMeter(int meter) {
        this.meter = meter;
    }
    public Train(int meter, int doors, int windows, float speed){
        this.meter= meter;
        this.doors = doors;
        this.windows= windows;
        this.speed= speed;
    }
    @Override
    public void startDriving(){
        System.out.println("Train starts to go.It's speed is  " + getSpeed()+ "\nIt has "+ getDoors() +
                " doors and " + getWindows()+ " windows");
    }
    @Override
    public void stopDriving(){
        System.out.println("Train stoped ");
    }

    @Override
    public void takesPeople(){
        System.out.println("Train takes people from stations");
    }
}
