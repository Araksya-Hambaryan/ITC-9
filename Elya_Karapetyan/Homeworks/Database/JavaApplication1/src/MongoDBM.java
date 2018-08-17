
import com.mongodb.BasicDBObject;
import com.mongodb.Block;
import com.mongodb.MongoClient;
import com.mongodb.client.MongoCollection;
import com.mongodb.client.MongoCursor;
import com.mongodb.client.MongoDatabase;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;
import org.bson.Document;

public class MongoDBM extends DatabaseManager {
    private MongoClient mongoClient;
    private MongoDatabase database;
    
    @Override
    protected void createConnection() {
        mongoClient= new MongoClient("localhost",27017);
        database = mongoClient.getDatabase("mydb");
    }

    @Override
    protected void closeConnection() {
        mongoClient.close();
    }

    @Override
    public int register(String name, String username, String password) {
        System.out.println("----------mongo register---------------");
        createConnection();
        MongoCollection<Document> col = database.getCollection("myusers");

        BasicDBObject query = new BasicDBObject("name", name);
       
        col.find(query).forEach(new Block<Document>() {
            @Override
            public void apply(final Document document) {
                System.out.println(document.toJson());
            }
        });       
        return 0;
    }

    @Override
    public void login(String username, String password) throws SQLException {
        System.out.println("----------mongo login---------------");
    }
   
    
    /*private void readingData() {
        MongoCollection<Document> col = database.getCollection("myusers");

        try (MongoCursor<Document> cur = col.find().iterator()) {
            while (cur.hasNext()) {

                Document doc = cur.next();
                List list = new ArrayList(doc.values());
                System.out.print(list.get(1));
                System.out.print(": ");
                System.out.println(list.get(2));
            }
        }
    }*/
    
}
