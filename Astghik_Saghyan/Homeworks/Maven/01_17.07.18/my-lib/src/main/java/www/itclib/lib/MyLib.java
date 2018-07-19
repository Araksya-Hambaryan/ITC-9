package www.itclib.lib;

public class MyLib 
{
    public static void main( String[] args )
    {
        System.out.println( "Hello World!" );
    }

    public static void fileProc(String fileName) {
        System.out.println( "fileProc called!" );
          try {
            File file = new File(fileName);
            FileReader fileReader = new FileReader(file);
            BufferedReader bufferedReader = new BufferedReader(fileReader);
            String line;
            while ((line = bufferedReader.readLine()) != null) {
                System.out.println(line);
            }
            fileReader.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
