
import com.mongodb.BasicDBObject;
import com.mongodb.Block;
import com.mongodb.MongoClient;
import com.mongodb.client.MongoCollection;
import com.mongodb.client.MongoCursor;
import com.mongodb.client.MongoDatabase;
import static com.mongodb.client.model.Filters.eq;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;
import javax.swing.JOptionPane;
import org.bson.Document;

public class MongoDBM extends DatabaseManager {
    private MongoClient mongoClient;
    private MongoCollection collection;        
    private MongoDatabase database;
    
    @Override
    protected void createConnection() {
        mongoClient= new MongoClient("localhost",27017);
        database = mongoClient.getDatabase("mydb");
        collection = database.getCollection("user");
    }

    @Override
    protected void closeConnection() {
        mongoClient.close();
    }

    @Override
    public void register(String name, String username, String password) {
        createConnection();
        Document doc = new Document("name", name)
                .append("username", username)
                .append("password", password);
        collection.insertOne(doc);
        JOptionPane.showMessageDialog(null, "Registration done");
        closeConnection();
    }

    @Override
    public void login(String username, String password) throws SQLException {
        createConnection();
        Document docUsername = (Document) collection.find(eq("username", username)).first();
        if (docUsername != null && docUsername.containsValue(password)) {
            JOptionPane.showMessageDialog(null,"username and password matched");
            return;
        }
        JOptionPane.showMessageDialog(null,"username and password do not matched");
        return;
    }
}
