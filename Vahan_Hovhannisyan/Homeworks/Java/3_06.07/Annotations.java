class Annotation{
    @MyAnnotation(value=1)
    private void ann1(){
        System.out.println("annotation1");
    }
    @MyAnnotation(value=2)
    public void ann2() {
        System.out.println("annotation2");
    }
    public void regularM() {
        System.out.println("regular method");
    }

}

