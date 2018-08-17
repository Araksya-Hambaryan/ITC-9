package loginregister;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Properties;
import java.util.logging.Level;
import java.util.logging.Logger;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

public class SQLManager extends DatabaseManager {

    private static Connection connection;
    private final String JDBC_PREFIX = "jdbc:postgresql://localhost:5432/postgres";
    private final static String USER_NAME = "postgres";
    private final static String PASSWORD = "postgres";

    public SQLManager() {
        openConnection();
    }

    @Override
    public void finalize() {
        closeConnection();
    }

    @Override
    protected void closeConnection() {
        try {
            connection.close();
            System.out.println("[SQLManager] Connection is closed.");
        } catch (SQLException e) {
            System.out.println("[SQLManager] Connection close failed.");
        }
    }

    @Override
    protected void openConnection() {
        Properties props = new Properties();
        props.setProperty("user", USER_NAME);
        props.setProperty("password", PASSWORD);
        props.setProperty("ssl", "true");
        try {
            connection = DriverManager.getConnection(JDBC_PREFIX, props);
            System.out.println("[SQLManager] Connection is created.");
        } catch (SQLException ex) {
            Logger.getLogger(SQLManager.class.getName()).log(Level.SEVERE, null, ex);
        }
    }

    @Override
    public boolean createUser(String name, String userName, String password) {
        try {
            String sql = "INSERT INTO users(name, username, password) VALUES(?,?,?)";
            PreparedStatement statement = connection.prepareStatement(sql);
            statement.setString(1, name);
            statement.setString(2, userName);
            statement.setString(3, getHash(password));
            statement.executeUpdate();
        } catch (SQLException ex) {
            Logger.getLogger(SQLManager.class.getName()).log(Level.SEVERE, null, ex);
        }
        return true;
    }

    @Override
    public boolean checkUser(String userName, String password) {
        try {
            String query = "SELECT * FROM users WHERE username=? AND password=?";
            PreparedStatement statement = connection.prepareStatement(query);
            statement.setString(1, userName);
            statement.setString(2, password);
            ResultSet rs = statement.executeQuery();
            if (rs.next()) {
                return true;
            }
        } catch (SQLException ex) {
            Logger.getLogger(SQLManager.class
                    .getName()).log(Level.SEVERE, null, ex);
        }
        return false;
    }

    private String getHash(String password) {
        MessageDigest md = null;
        try {
            md = MessageDigest.getInstance("MD5");
        } catch (NoSuchAlgorithmException ex) {
            Logger.getLogger(SQLManager.class.getName()).log(Level.SEVERE, null, ex);
        }
        md.update(password.getBytes());
        byte[] bytes = md.digest();
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < bytes.length; i++) {
            sb.append(Integer.toString((bytes[i] & 0xff) + 0x100, 16).substring(1));
        }
        return sb.toString();
    }
}
