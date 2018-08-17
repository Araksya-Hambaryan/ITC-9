
import java.sql.SQLException;


public abstract class DatabaseManager {
    private static DatabaseManager instance = null;
    private static final boolean[] LOCK_INSTANCE = new boolean[]{};
    
    protected abstract void createConnection();
    protected abstract void closeConnection();
    public abstract void register(String name, String username, String password);
    public abstract void login(String username, String password) throws SQLException;
    
    public static DatabaseManager getInstance()
    {
        if (instance != null) {
            return instance;
        }

        synchronized (LOCK_INSTANCE) {
            if (instance != null) {
                return instance;
            }
            if (NewJFrame.isMongo) {
                instance = new MongoDBM();
                return instance;
            } 
            instance = new PostgresDBM();
            return instance;
        }
    }   
}
