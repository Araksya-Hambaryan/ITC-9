import java.lang.reflect.Method;
import java.lang.reflect.InvocationTargetException;

class Main {
    public static void main(String[] args) {
        callMethods();
    }

    public static void callMethods(){
        TestClass test = new TestClass();
        Method[] methods = test.getClass().getDeclaredMethods();
        Run run = null;
        int count = 0;
        for (Method method : methods) {
            run = method.getAnnotation(Run.class);
            method.setAccessible(true);
            if (run != null) {
                count = run.runCount();
                for (int i = 0; i < count; ++i) {
                    try {
                        method.invoke(test, count);
                    } catch (IllegalAccessException | InvocationTargetException e) {
                        System.out.println("Cannot call function");
                    } catch (IllegalArgumentException e) {
                        System.out.println("Cannot call function. Too few arguments.");
                    }
                }
            }
        }
    }
}
