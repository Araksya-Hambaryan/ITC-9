import com.phone.Android;
import com.phone.OS;
import com.phone.OperatingSystemFactory;

public class Main {

    public static void main(String[] args) {

        OperatingSystemFactory osf = new OperatingSystemFactory();

        OS obj = osf.getInstance("OpenPlatform");
       // OS obj = osf.getInstance("ClosedPlatform");
       // OS obj = osf.getInstance("Other");


        obj.spec();


    }
}
