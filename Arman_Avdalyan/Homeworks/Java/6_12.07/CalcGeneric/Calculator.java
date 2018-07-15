public class Calculator<T extends Number> {

    public Number add(T num1, T num2) {
        String type = num1.getClass().getName();
        if (type == "java.lang.Integer") {
            return (Integer)num1 + (Integer)num2;
        }
        if (type == "java.lang.Double") {
            return (Double)num1 + (Double) num2;
        }
        if (type == "java.lang.Float") {
            return (Float)num1 + (Float) num2;
        }
        return null;
    }

    public Number sub(T num1, T num2) {
        String type = num1.getClass().getName();
        if (type == "java.lang.Integer") {
            return (Integer)num1 - (Integer)num2;
        }
        if (type == "java.lang.Double") {
            return (Double)num1 - (Double) num2;
        }
        if (type == "java.lang.Float") {
            return (Float)num1 - (Float) num2;
        }
        return null;
    }

    public Number div(T num1, T num2) {
        String type = num1.getClass().getName();
        if (type == "java.lang.Integer") {
            return (Integer)num1 / (Integer)num2;
        }
        if (type == "java.lang.Double") {
            return (Double)num1 / (Double) num2;
        }
        if (type == "java.lang.Float") {
            return (Float)num1 / (Float) num2;
        }
        return null;
    }

    public Number mul(T num1, T num2) {
        String type = num1.getClass().getName();
        if (type == "java.lang.Integer") {
            return (Integer)num1 * (Integer)num2;
        }
        if (type == "java.lang.Double") {
            return (Double)num1 * (Double) num2;
        }
        if (type == "java.lang.Float") {
            return (Float)num1 * (Float) num2;
        }
        return null;
    }
}