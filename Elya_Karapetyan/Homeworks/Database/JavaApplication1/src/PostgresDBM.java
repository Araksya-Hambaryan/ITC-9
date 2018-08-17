import java.awt.HeadlessException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import javax.swing.JOptionPane;

public class PostgresDBM extends DatabaseManager {

    private Connection conn = null;
    private static final String DRIVER_NAME     = "org.postgresql.Driver";
    private static final String JDBC_PREFIX     = "jdbc:postgresql://";
    private static final String PARAM_USER      = "user";
    private static final String PARAM_PASSWORD  = "password";
    private static final String HOST_NAME = "localhost";
    private static final String DB_NAME = "postgres";
    private static final String USER_NAME = "postgres";
    private static final String PASSWORD = "postgres";
    private static final String PORT_NUMBER = "5432";

    public PostgresDBM() {
        super();
    }
    
    @Override
    protected void createConnection() {
        try {
            StringBuilder builder = new StringBuilder(JDBC_PREFIX);
            builder.append(HOST_NAME)
                   .append(":").append(PORT_NUMBER).append("/")
                   .append(DB_NAME)
                   .append("?").append(PARAM_USER + "=" + USER_NAME)
                   .append("&" + PARAM_PASSWORD + "=" + PASSWORD);

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
    protected void closeConnection(){
	try { 
            conn.close(); 
            System.out.println("[DatabaseManager] Connection is closed.");
        } catch (Exception e) { /* ignored */ }
    }
    
    @Override
    public int register(String name, String username, String password) {
       createConnection();
       Statement stmt = null;
       ResultSet rs = null;
        int result = 0;
        try{
            stmt=conn.createStatement();
            String query = "SELECT * FROM  myusers WHERE username='" + 
                                                                username + "'";
            rs = stmt.executeQuery(query);
            if(!rs.next()){             
                rs = stmt.executeQuery(query);
                String q = "INSERT INTO myusers (name, username, " +
                        "password) values ('" + name + "', '" +
                        username + "','" + password+"')";
                result = stmt.executeUpdate(q);
                JOptionPane.showMessageDialog(null, "Registration done");

            } else {
                JOptionPane.showMessageDialog(null, "Username already usage", "Error", JOptionPane.ERROR_MESSAGE);
            }
        } catch (Exception e) {
            System.out.println("Execution failed!");            
            e.printStackTrace();
            result = 2;
        } finally {
            try { stmt.close(); } catch (Exception e) { /* ignored */ }
            try { rs.close(); } catch (Exception e) { /* ignored */ }
        }
        closeConnection();
        return result;
    }
   
    @Override
    public void login(String username, String password) throws SQLException {
        createConnection();
        PreparedStatement pst = null;   
        ResultSet rs = null;
        String sql="select * from myusers where username=? and password=?";
        try {
            pst = conn.prepareStatement(sql);
            pst.setString(1, username);
            pst.setString(2,password);
            rs = pst.executeQuery();
            if(rs.next()) {
                JOptionPane.showMessageDialog(null,"username and password matched");
            } else {
                JOptionPane.showMessageDialog(null, "username and password do not matched");
            }
        } catch(SQLException | HeadlessException ex) {
            ex.printStackTrace();
        }
        closeConnection();
   }
}

