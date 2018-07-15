public class Calculator<T extends Number> {
    T num1;
    T num2;
    public Calculator(T var1, T var2) {
        this.num1 = var1;
        this.num2 = var2;
    }
    public float plus() {
        float num1;
        num1 = this.num1.floatValue();
        float num2;
        num2 = this.num2.floatValue();
        float sum = num1 + num2;
        System.out.println(sum);
        return sum;
    }
    public float minus () {
        float num1;
        num1 = this.num1.floatValue();
        float num2;
        num2 = this.num2.floatValue();
        float minus = num1 - num2;
        System.out.println(minus);
        return minus;
    }
    public float baj() {
        float num1;
        num1 = this.num1.floatValue();
        float num2;
        num2 = this.num2.floatValue();
        float baj = num1 / num2;
        System.out.println(baj);
        return baj;
    }
    public float bazm () {
        float num1;
        num1 = this.num1.floatValue();
        float num2;
        num2 = this.num2.floatValue();
        float bazm = num1 * num2;
        System.out.println(bazm);
        return bazm;
    }
}