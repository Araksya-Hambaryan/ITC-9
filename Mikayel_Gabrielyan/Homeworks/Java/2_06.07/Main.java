import java.lang.reflect.*; 

public class Main {
    public static void main(String[] args) {

        Annotation annTest = new Annotation();  
        Method m1 = annTest.getClass().getDeclaredMethod("method1");  
        MyAnnotation myAnnotation = m1.getAnnotation(MyAnnotation.class);  
        System.out.println("MyAnnotation value is: " + myAnnotation.value());

    }
}
