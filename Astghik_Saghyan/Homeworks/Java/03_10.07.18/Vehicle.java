class Vehicle extends Transport{

    @Override
    void transportation() {
        System.out.println("The Transport subclasses refer to transport");
    }    

    protected String licensePlate = null;

    public void setLicensePlate(String license) {
        this.licensePlate = license;
    }
    
    public String getLicensePlate() {
        return this.licensePlate;
    }
}

