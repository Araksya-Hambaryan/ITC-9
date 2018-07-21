package itc9;
import itc9.*;
import org.testng.Assert;
import org.testng.annotations.Test;
import org.testng.annotations.BeforeMethod;
public class ChessTest {
    @Test (expectedExceptions = CoordinateException.class)
    public void testCoord1() throws CoordinateException {
            Main.validCoord("666");
    }
    
    @Test (expectedExceptions = CoordinateException.class)
    public void testCoord2() throws CoordinateException {
            Main.validCoord("This is Sparta!");
    }
    
    @Test (expectedExceptions = CoordinateException.class)
    public void testCoord3() throws CoordinateException {
            Main.validCoord("A12");
    }
    
    @Test
    public void testCount() {
        Assert.assertEquals(Main.changeCount(true,0),1);
		Assert.assertEquals(Main.changeCount(true,5),0);
		Assert.assertEquals(Main.changeCount(false,0),0);
		Assert.assertEquals(Main.changeCount(false,7),1);
		Assert.assertEquals(Main.changeCount(true,0),1);
		Assert.assertEquals(Main.changeCount(true,0),1);
    }
}
