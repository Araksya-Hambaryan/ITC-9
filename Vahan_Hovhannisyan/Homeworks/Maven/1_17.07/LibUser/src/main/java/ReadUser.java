
public class ReadUser {
    public static void main(String[] args) {
        try {
            System.out.println(ReadTextAsString.readFileAsString("src/main/java/somefile.txt"));
        } catch (Exception e) {
            System.out.println("Some exception occured.");
        }
    }
}
