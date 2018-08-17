package loginregister;

import com.mongodb.MongoClient;
import com.mongodb.client.MongoCollection;
import com.mongodb.client.MongoDatabase;
import org.bson.Document;
import static com.mongodb.client.model.Filters.*;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.logging.Level;
import java.util.logging.Logger;

public class MongoManager extends DatabaseManager {

    private MongoCollection collection;
    private MongoClient mongoClient;

    MongoManager() {
        openConnection();
    }

    @Override
    public void openConnection() {
        mongoClient = new MongoClient();
        MongoDatabase database = mongoClient.getDatabase("users");
        collection = database.getCollection("user");
    }

    @Override
    public boolean createUser(String name, String userName, String password) {
        Document doc = new Document("name", name)
                .append("username", userName)
                .append("password", getHash(password));
        collection.insertOne(doc);
        return true;
    }

    @Override
    public boolean checkUser(String userName, String password) {
        Document docUsername = (Document) collection.find(eq("username", userName)).first();
        if (docUsername != null && docUsername.containsValue(getHash(password))) {
            return true;
        }
        return false;
    }

    @Override
    public void closeConnection() {
        mongoClient.close();
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
