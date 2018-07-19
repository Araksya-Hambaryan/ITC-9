package www.itclib.lib;
import java.io.File;
import java.io.FileReader;
import java.io.BufferedReader;
import java.io.IOException;

public class MyLib 
{
    public static void main( String[] args )
    {
        System.out.println( "Hello World!" );
    }

    public void fileProc(String fileName) {
        System.out.println( "FileProc called!"+fileName );
        
          try {
            ClassLoader classLoader = getClass().getClassLoader();
            File file = new File(classLoader.getResource(fileName).getFile());



//            File file = new File(fileName);
            FileReader fileReader = new FileReader(file);
            BufferedReader bufferedReader = new BufferedReader(fileReader);
            String line;
            while ((line = bufferedReader.readLine()) != null) {
                System.out.println(line);
            }
            fileReader.close();
        } catch (IOException e) {
            System.out.println("Catched exeption!");
            e.printStackTrace();
        }
    }
}
