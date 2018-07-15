public class GenericCalculator<T extends Number> {
    public void add(T num1, T num2) {
        String type = num1.getClass().getName();
        switch(type) {
            case "java.lang.Integer": 
                System.out.println((Integer)num1 + (Integer)num2);
                break;
            case "java.lang.Float": 
                System.out.println((Float)num1 + (Float)num2);
                break;
            case "java.lang.Double": 
                System.out.println((Double)num1 + (Double)num2);
                break;
            default:
                System.out.println("Invalid type");
        }
    }
    public void sub(T num1, T num2) {
        String type = num1.getClass().getName();
        switch(type) {
            case "java.lang.Integer": 
                System.out.println((Integer)num1 - (Integer)num2);
                break;
            case "java.lang.Float": 
                System.out.println((Float)num1 - (Float)num2);
                break;
            case "java.lang.Double": 
                System.out.println((Double)num1 - (Double)num2);
                break;
            default:
                System.out.println("Invalid type");
        }
    }
    public void mul(T num1, T num2) {
        String type = num1.getClass().getName();
        switch(type) {
            case "java.lang.Integer": 
                System.out.println((Integer)num1 * (Integer)num2);
                break;
            case "java.lang.Float": 
                System.out.println((Float)num1 * (Float)num2);
                break;
            case "java.lang.Double": 
                System.out.println((Double)num1 * (Double)num2);
                break;
            default:
                System.out.println("Invalid type");
        }
    }
    public void div(T num1, T num2) {
        String type = num1.getClass().getName();
        switch(type) {
            case "java.lang.Integer": 
                System.out.println((Integer)num1 / (Integer)num2);
                break;
            case "java.lang.Float": 
                System.out.println((Float)num1 / (Float)num2);
                break;
            case "java.lang.Double": 
                System.out.println((Double)num1 / (Double)num2);
                break;
            default:
                System.out.println("Invalid type");
        }
    }
}