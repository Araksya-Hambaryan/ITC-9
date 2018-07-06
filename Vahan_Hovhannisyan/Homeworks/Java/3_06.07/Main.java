import java.lang.reflect.*;  

class Main{  
    public static void main(String args[])throws Exception{  

        Annotation h=new Annotation();  
        Method m1=h.getClass().getDeclaredMethod("ann1");  
        m1.setAccessible(true);

        MyAnnotation manno1=m1.getAnnotation(MyAnnotation.class);  
        System.out.println("I am a method from custom annotation.My value is: "+manno1.value());

        Method m2=h.getClass().getMethod("ann2");
        MyAnnotation manno2=m2.getAnnotation(MyAnnotation.class);  
        System.out.println("I am a method from custom annotation.My value is: "+manno2.value());
    }
}
