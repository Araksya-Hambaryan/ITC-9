@CustomTypeAnnotation(
	createdBy = "MMM",
	tags = { "java", "annotations" }
)

public class AnnotationExample {

	@CustomMethodAnnotation
	String processed() {

		return "Shold be processed";

	}
	
	@CustomMethodAnnotation
	void throwException() {

		throw new RuntimeException("Method will throw an exception");


	}
	@CustomMethodAnnotation(enabled = false)
	void unprocessed() {

		throw new RuntimeException("Method won't be processed");
	}
}
