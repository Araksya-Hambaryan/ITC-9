import java.lang.annotation.Annotation;
import java.lang.reflect.Method;

public class AnnotationTest {

	public static void main(String[]args) {

		System.out.println("Processing ");
		
		int success = 0;
		int failed = 0;
		int total = 0;
		int disabled = 0;

		Class <AnnotationExample> object = AnnotationExample.class;

		if(object.isAnnotationPresent(CustomTypeAnnotation.class)) {


		}
		Annotation annotation = object.getAnnotation(CustomTypeAnnotation.class);
		CustomTypeAnnotation custom = (CustomTypeAnnotation) annotation;

		System.out.printf("CreatedBy :%s", custom.createdBy());
		System.out.printf("Tags : ");
		int tagLength = custom.tags().length;

		for( String tag : custom.tags()) {
			if(tagLength > 1) {
				System.out.print(tag+", ");
			
			}else {
				System.out.print(tag);
			}
			--tagLength;

		}
		System.out.printf("LastModified :%s%n%n ",custom.lastModified());

	}
	for(Method method : object.getDeclaredMethods()) {
		if(method.isAnnotationPresent(CustomMethodAnnotation.class)){
			Annotation annotation = method.getAnnotation(CustomMethodAnnotation.class);
			CustomMethodAnnotation customMethod = (CustomMethodAnnotation)annotation;
			
			if(customMethod.enabled()) {
				String result = "n/a";

				try {
					result = (String)method.invoke(object.newInstance());
					System.out.printf("%s - customMethod '%s' - processed %n - result: %n", ++total, method.getName(), result);
					++success;
				} catch ( Throwable ex ) {
					System.out.printf("%s - customMethod '%s' - didn't process%n",++total,method.getName());

				++disabled;

				}
			}
		}
		System.out.printf("%nResult : Total :%d, Failed %d, Disabled : %d%n", total, success, failed, disabled);

	}

}
