import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)

public @interface CustomTypeAnnotation {

	String [] tags() default "";
	String createdBy() default "Anush";
	String lastModified() default "07/07/2018";



}
