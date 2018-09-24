import org.testng.annotations.BeforeMethod;
import org.testng.annotations.Test;

public class ForgotPasswordPageTest {

    //    ForgotPasswordPageFactory pageFactory = LoginPageFactory.getInstance().clickOnForgotPasswordButton(); //TODO
    ForgotPasswordPageFactory pageFactory = ForgotPasswordPageFactory.getInstance();

    @BeforeMethod
    public void setUp() {
        pageFactory.goToForgotPasswordPage();
    }

    @Test
    public void validatePageStructure() {
        pageFactory.getLogo().isDisplayed();
        pageFactory.getForgotPAsswortText().isDisplayed();
        pageFactory.getEnterEmailText().isDisplayed();
        pageFactory.getEmailInputField().isDisplayed();
        pageFactory.getErrorMessageField().isDisplayed();
        pageFactory.getSendButton().isDisplayed();
    }
}
