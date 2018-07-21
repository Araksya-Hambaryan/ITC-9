package itc9.Lib;
import java.nio.file.*;
import java.io.IOException;

class ReadTextAsString {
    public static String readFileAsString(String fileName) {
        try {
            String data = "";
            data = new String(Files.readAllBytes(Paths.get(fileName)));
            return data;
        } catch (IOException ex) {
            System.err.println("An IOException was caught!");
            ex.printStackTrace();
            return "";
        }
    }
}
