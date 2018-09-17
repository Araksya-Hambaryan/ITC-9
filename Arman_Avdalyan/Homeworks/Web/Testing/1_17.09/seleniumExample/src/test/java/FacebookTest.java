import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;
import org.openqa.selenium.support.ui.Select;

public class FacebookTest {
    public static void main(String[] args) {
        WebDriver driver = new ChromeDriver();
        driver.get("http://www.facebook.com");
        driver.manage().window().maximize();
        driver.findElement(By.xpath("//*[@id=\"u_0_c\"]")).sendKeys("Arman");
        driver.findElement(By.xpath("//*[@id=\"u_0_e\"]")).sendKeys("Avdalyan");
        driver.findElement(By.xpath("//*[@id=\"u_0_h\"]")).sendKeys("testMail@gmail.com");
        driver.findElement(By.xpath("//*[@id=\"u_0_k\"]")).click();
        driver.findElement(By.xpath("//*[@id=\"u_0_k\"]")).sendKeys("testMail@gmail.com");
        driver.findElement(By.xpath("//*[@id=\"u_0_o\"]")).sendKeys("testPassword");

        Select sellDay = new Select(driver.findElement(By.xpath("//*[@id=\"day\"]")));
        sellDay.selectByValue("2");
        Select sellMonth = new Select(driver.findElement(By.xpath("//*[@id=\"month\"]")));
        sellMonth.selectByValue("9");
        Select sellYear = new Select(driver.findElement(By.xpath("//*[@id=\"year\"]")));
        sellYear.selectByValue("1999");

        driver.findElement(By.xpath("//*[@id=\"u_0_a\"]")).click();
        driver.findElement(By.xpath("//*[@id=\"u_0_u\"]")).click();
        try {
            Thread.sleep(5000); //temporary
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        driver.findElement(By.xpath("//*[@id=\"u_0_9\"]/div/div[2]")).isDisplayed();

    }
}





