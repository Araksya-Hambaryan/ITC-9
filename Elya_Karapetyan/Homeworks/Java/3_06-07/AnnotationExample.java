import java.lang.annotation.*;
import java.lang.reflect.*;

//Creating annotation
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.METHOD)
@interface MyAnnotation{
     int value() default 5;
    String str() default "annotation"; 
    String privateStr();
}

//Declaring annotation
class ClassWithAnnotation {
    @MyAnnotation(str = "public String", privateStr = "private String")
    public void foo() {
        System.out.println("Annotation1");
    }
    @MyAnnotation( value = 55, privateStr = "private String")
    private void f() {
        System.out.println("Annotation2");
    }
}

//Accessing annotation
public class AnnotationExample {
    public static void main(String[] args) throws Exception {
        ClassWithAnnotation c = new ClassWithAnnotation();
        Method m = c.getClass().getMethod("foo");
        MyAnnotation a = m.getAnnotation(MyAnnotation.class);
        System.out.println("value: "+a.value()+"\nfirst string: "+a.str()+"\nsecond string: "+a.privateStr());
       // Method privateField = Class.forName("ClassWithAnnotation").getMethod("f");
        /*Method m1 = c.getClass().getMethod("f");
        MyAnnotation a1 = m.getAnnotation(MyAnnotation.class);
        System.out.println("value: "+a1.value()+"\nfirst string: "+a1.str()+"\nsecond string: "+a1.privateStr());*/
    }
}
