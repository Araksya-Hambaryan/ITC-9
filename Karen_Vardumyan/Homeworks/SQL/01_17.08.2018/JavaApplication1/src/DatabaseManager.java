import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public abstract class DatabaseManager {

    private static DatabaseManager instance = null;
    private static final boolean[] LOCK_INSTANCE = new boolean[]{};
     
    public static DatabaseManager getInstance() {
        if (instance != null) {
            return instance;
        }
        synchronized (LOCK_INSTANCE) {
            if (instance != null) {
                return instance;
            }

            
            if (NewJFrame.radioValue == 0) {
                instance = new DatabaseManagerPost();
            } else {
                instance = new DatabaseManagerMongo();
            }
            return instance;
        }
    }

    public abstract void createConnection();
        
    public abstract void closeConnection();
	
    public abstract int register(String name, String username, String password);
      
}