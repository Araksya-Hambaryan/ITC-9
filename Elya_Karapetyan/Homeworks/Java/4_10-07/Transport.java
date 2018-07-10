//package transport;

public abstract class Transport {
    protected String m_name;
    protected int m_countOfWeel; 
    protected String m_color;
    abstract public void move();
    String getName() {
        return m_name;
    }
    int getCountOfWell() {
        return m_countOfWeel;
    }
    String getColor() {
        return m_color;
    }
    class Motor {
        private double m_volume;
        private double m_power;
        public Motor(double volume, double power) {
            m_volume = volume;
            m_power = power;
        }
        public void printInfo() {
            System.out.println("Car name: "+Transport.this.m_name+"\nCount of well: "+Transport.this.m_countOfWeel+"\nColor: "+Transport.this.m_color+"\nVolume of motor: "+m_volume+"\nPower of motor: "+m_power);
        }
    }   

}
