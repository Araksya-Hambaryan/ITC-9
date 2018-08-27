public class ThreadSafeSingleton {

    private static ThreadSafeSingleton instance;
    private static boolean isCreated = false;

    private ThreadSafeSingleton(){
        if( isCreated ) {
            throw new InstantiationError( "Creating of this object is not allowed." );
        }
    }

    public static synchronized ThreadSafeSingleton getInstance() {
        if(instance == null){
            instance = new ThreadSafeSingleton();
            isCreated = true;
        }
        return instance;
    }
}
