import java.lang.Throwable;
import java.lang.reflect.*;  
import java.io.*;
class Main{  
    public static void main(String args[])throws Exception{  
        try {
        AnnMethods h = new AnnMethods();  
        Method m1 = h.getClass().getDeclaredMethod("ann1");  
        m1.setAccessible(true);

        MyCustomAnn manno1=m1.getAnnotation(MyCustomAnn.class);  
        System.out.println("I am a method from custom annotation.My value is: "+manno1.value());

        Method m2=h.getClass().getMethod("ann2");
        MyCustomAnn manno2=m2.getAnnotation(MyCustomAnn.class);  
        System.out.println("I am a method from custom annotation.My value is: "+manno2.value());
        } catch (NoSuchMethodException nsm) {
            System.out.println("No such method was found caught!");
            nsm.printStackTrace();
        } catch (Exception e) {
            System.out.println("Some error occured!");
            e.printStackTrace();
        }
    }
}
