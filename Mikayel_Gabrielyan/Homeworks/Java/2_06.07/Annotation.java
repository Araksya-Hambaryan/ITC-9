class Annotation {
    @MyAnnotation(value = 1)
    public void method1() {
        System.out.println("MyAnnotationMethod1 -> public : ");
    }
    @MyAnnotation(value = 2)
    private void method2() {
        System.out.println("MyAnnotationMethod2 -> private : ");
    }
    public void classMethod() {
        System.out.println("ClassMethod -> public : ");
    }
}