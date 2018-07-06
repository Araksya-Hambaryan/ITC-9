import java.io.FileReader;
import java.io.FileWriter;
import java.util.Scanner;
import java.io.IOException;
class MyException extends Exception {
    public String toString() {
        return "WrongCoordinatesException";
    }
}
class trying {
    public static void main(String[] args){
        open();
    }
    public static void open() {      
        char sp;
        int count=0;
        int xc;
        int yc;
        int len;
        String col;
        String fig;
        String cor;
        String str;
        try {
            FileReader fin = new FileReader("inventory.txt");
            Scanner src = new Scanner(fin);
            while (src.hasNext()) {
                if (src.hasNextLine()) {
                    str = src.nextLine();
                    len=str.length();
                    if (len != 9){
                        System.out.println("In line "+count+" input type is false");
                        System.exit(0);
                    } else {
                        col = str.substring(0, 2);
                        fig = str.substring(3, 5);
                        cor = str.substring(6, 9);
                        if (str.charAt(2)==' ' && str.charAt(5)==' ' && str.charAt(7)==' ' ) {
                            xc = Integer.parseInt(String.valueOf(cor.charAt(0)));
                            yc = Integer.parseInt(String.valueOf(cor.charAt(2)));
                            try {
                                if(xc < 1 || xc > 8 || yc < 1 || yc > 8) {
                                    throw new MyException(); 
                                }else{
                                    System.out.println("all is successfull");
                                }
                            }catch (MyException e) {
                                System.out.println("catch Exception --> " + e);
                            }
                        } else {
                            System.out.println("In line "+count+" please add spaces right");
                            System.exit(0);
                        }
                    }
                }
            }
            fin.close();
        } catch (Exception e) {
            System.out.println("Catch Exception ---> filenotfound");
        }   }

}

