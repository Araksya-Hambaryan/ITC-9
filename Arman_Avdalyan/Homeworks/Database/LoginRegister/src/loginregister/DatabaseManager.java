package loginregister;

public abstract class DatabaseManager {

    private static DatabaseManager instanceSql;
    private static DatabaseManager instanceMongo;
    private static final boolean[] LOCK_INSTANCE = new boolean[]{};

    public static DatabaseManager getInstance() {
        synchronized (LOCK_INSTANCE) {
            if (MainPage.isSql) {
                if (instanceSql == null) {
                    instanceSql = new SQLManager();
                }
                return instanceSql;
            } else {
                if (instanceMongo == null) {
                    instanceMongo = new MongoManager();
                }
                return instanceMongo;
            }
        }
    }

    public abstract boolean createUser(String name, String userName, String password);

    public abstract boolean checkUser(String userName, String password);

    protected abstract void openConnection();

    protected abstract void closeConnection();

}
