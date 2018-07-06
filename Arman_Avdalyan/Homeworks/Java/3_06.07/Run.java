import java.lang.annotation.*;  
@Target(ElementType.METHOD)
@Retention(RetentionPolicy.RUNTIME)

public @interface Run {
    public int x() default 10;
    public int y() default 20;
    public int runCount() default 2;
}
