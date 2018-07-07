import java.lang.reflect.*; 

public class Main {
    public static void main(String[] args) {

        try {
            Annotation annTest = new Annotation();  
            Method m1 = annTest.getClass().getDeclaredMethod("method1");  
            MyAnnotation myAnnotation1 = m1.getAnnotation(MyAnnotation.class);  
            System.out.println("MyAnnotation value is: " + myAnnotation1.value());
            Method m2 = annTest.getClass().getDeclaredMethod("method2");  
            MyAnnotation myAnnotation2 = m2.getAnnotation(MyAnnotation.class);  
            System.out.println("MyAnnotation value is: " + myAnnotation2.value());
        } catch (NoSuchMethodException ex) {
            System.out.println(ex);
        }

    }
}
