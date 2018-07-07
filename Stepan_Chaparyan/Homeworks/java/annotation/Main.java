import java.lang.reflect.*;  

class Main{  
    public static void main(String args[])throws Exception{  

        AnnotationHelper testAnnotation = new AnnotationHelper();  

        Method method1=testAnnotation.getClass().getDeclaredMethod("Method1");  
        MyAnnotation myAnnotation1=method1.getAnnotation(MyAnnotation.class);  
        System.out.println("MyAnnotation testString is: "+myAnnotation1.testString());

        Method method2=testAnnotation.getClass().getMethod("Method2");
        MyAnnotation myAnnotation2=method2.getAnnotation(MyAnnotation.class);  
        System.out.println("MyAnnotation value is: "+myAnnotation2.value());
    }
}
