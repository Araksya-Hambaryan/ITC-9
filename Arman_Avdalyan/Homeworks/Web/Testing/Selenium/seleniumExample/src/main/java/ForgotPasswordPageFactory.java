import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver;
import org.openqa.selenium.support.ui.ExpectedConditions;
import org.openqa.selenium.support.ui.WebDriverWait;

public class ForgotPasswordPageFactory {
    private static ForgotPasswordPageFactory instance;
    private WebDriver driver = new ChromeDriver();
//    private WebDriver driver = Helper.setUpDriver(CustomConstant.URL_OF_COOK);
    private WebElement logo;
    private WebElement forgotPAsswortText;
    private WebElement enterEmailText;
    private WebElement emailInputField;
    private WebElement errorMessageField;
    private WebElement sendButton;

    private String LOGO_XPATH = "//*[@id=\"root\"]/div/div/div/div/div/div[1]/img";
    private String FORGOT_PASSWORD_TEXT_XPATH = "//*[@id=\"root\"]/div/div/div/div/div/div[2]";
    private String ENTER_EMAIL_TEXT_XPATH = "//*[@id=\"root\"]/div/div/div/div/div/form/div[1]/label";
    private String EMAIL_INPUT_FIELD_XPATH = "//*[@id=\"email\"]";
    private String ERROR_MESSAGE_FIELD_XPATH = "//*[@id=\"root\"]/div/div/div/div/div/form/div[1]/div/div";
    private String SEND_BUTTON_XPATH = "//*[@id=\"btn\"]/button";

    public static ForgotPasswordPageFactory getInstance() {
        if(instance == null) {
            instance = new ForgotPasswordPageFactory();
        }
        return instance;
    }

    private ForgotPasswordPageFactory() {
        driver.get("localhost:3000");
//        driver.manage().window().maximize();
        logo = driver.findElement(By.xpath(LOGO_XPATH));
        forgotPAsswortText = driver.findElement(By.xpath(FORGOT_PASSWORD_TEXT_XPATH));
        enterEmailText = driver.findElement(By.xpath(ENTER_EMAIL_TEXT_XPATH));
        emailInputField = driver.findElement(By.xpath(EMAIL_INPUT_FIELD_XPATH));
        errorMessageField = driver.findElement(By.xpath(ERROR_MESSAGE_FIELD_XPATH));
        sendButton = driver.findElement(By.xpath(SEND_BUTTON_XPATH));
    }

    public WebElement getLogo() {
        return logo;
    }

    public WebElement getForgotPAsswortText() {
        return forgotPAsswortText;
    }

    public WebElement getEnterEmailText() {
        return enterEmailText;
    }

    public WebElement getEmailInputField() {
        return emailInputField;
    }

    public WebElement getErrorMessageField() {
        return errorMessageField;
    }

    public WebElement getSendButton() {
        return sendButton;
    }

    public void typeEmail(String email) {
        emailInputField.sendKeys(email);
    }

    public void clickOnSendButton() {
        sendButton.click();
    }

    public ForgotPasswordPageFactory goToForgotPasswordPage() {
        WebElement forgotPasswordButton = driver.
                findElement(By.xpath("//*[@id=\"root\"]/div/div/div/div/div/form/a")); //TODO MOVE THIS ALL IN LOGIN PAGE
        WebDriverWait wait = new WebDriverWait(driver, 10);
        wait.until(ExpectedConditions.elementToBeClickable(forgotPasswordButton));
        return ForgotPasswordPageFactory.getInstance(); //TODO move to login page
    }
}