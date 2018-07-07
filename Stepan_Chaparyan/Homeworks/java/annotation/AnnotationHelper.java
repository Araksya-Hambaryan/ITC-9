class AnnotationHelper{
    @MyAnnotation(value=5, testString="test1")
    private void Method1(){
        System.out.println("testMethod1");
    }
    @MyAnnotation(value=10, testString="test1")
    public void Method2() {
        System.out.println("testMethod2");
    }
    public void MethodWithOutAnnotation() {
        System.out.println("testMethod3");
    }

}

