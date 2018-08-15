/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author student
 */

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author developer
 */
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class DatabaseManager {

    private Connection conn;
    private static DatabaseManager instance = null;
    private static final boolean[] LOCK_INSTANCE = new boolean[]{};
    private static final String DRIVER_NAME     = "org.postgresql.Driver";
    private static final String JDBC_PREFIX     = "jdbc:postgresql://";
    private static final String PARAM_USER      = "user";
    private static final String PARAM_PASSWORD  = "password";

    /**
     * This method is required to implement Singleton pattern for the DatabaseManager.
     */
    public static DatabaseManager getInstance(String hostName,
                                              String databaseName,
                                              String userName,
                                              String password)
    {
        if (instance != null) {
            return instance;
        }

        synchronized (LOCK_INSTANCE) {
            if (instance != null) {
                return instance;
            }

            instance = new DatabaseManager(hostName,
                                           databaseName,
                                           userName,
                                           password);
            return instance;
        }
    }

    /**
     * As DatabaseManager is Singleton, its constructor must be private.
     */
    private DatabaseManager(String hostName,
                            String databaseName,
                            String userName,
                            String password) {
        super();
        try {
            StringBuilder builder = new StringBuilder(JDBC_PREFIX);
            builder.append(hostName)
                   .append("/")
                   .append(databaseName)
                   .append("?").append(PARAM_USER + "=" + userName)
                   .append("&" + PARAM_PASSWORD + "=" + password);

            Class.forName(DRIVER_NAME).newInstance();
            conn = DriverManager.getConnection(builder.toString());
            System.out.println("[DatabaseManager] Connection is created.");
        } catch (SQLException ex) {
            // handle any errors
            System.out.println("SQLException: " + ex.getMessage());
            System.out.println("SQLState:     " + ex.getSQLState());
            System.out.println("VendorError:  " + ex.getErrorCode());
        } catch (Exception ex) {
            ex.printStackTrace();
        }
    }

    @Override
    public void finalize() {
        closeConnection();
    }
    
    /**
     * Closes the connection.
     */
    public void closeConnection(){
	try { conn.close(); 
        System.out.println("[DatabaseManager] Connection is closed.");
        } catch (Exception e) { /* ignored */ }
    }
    
   public boolean register(String name, String userName, String password) {
       return true;
   }
}