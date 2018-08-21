package instigatemobile.com.cookmaster;

import android.support.test.rule.ActivityTestRule;
import android.support.test.runner.AndroidJUnit4;

import org.junit.Before;
import org.junit.Rule;
import org.junit.Test;
import org.junit.runner.RunWith;

import instigatemobile.com.cookmaster.activities.LoginForgotPasswordActivity;


@RunWith(AndroidJUnit4.class)
public class LoginPageTest {
    private LoginPageFactory loginPageFactory;
    @Rule
    public ActivityTestRule<LoginForgotPasswordActivity> mActivityRule =
            new ActivityTestRule<>(LoginForgotPasswordActivity.class);

    @Before
    public void setup() {
        loginPageFactory = new LoginPageFactory();
    }

    @Test
    public void verifyLoginPage() {
        loginPageFactory.findAllElements();
    }

    @Test
    public void enterCorrectEmailAndPassword() {
        loginPageFactory.enterEmailAndPassword("student@gmail.com", "student");
        loginPageFactory.clickSignInBtn();
        loginPageFactory.findAllElements();
        loginPageFactory.isNotShowSignInBtn();
    }

    @Test
    public void enterInorrectEmailAndPassword() {
        loginPageFactory.enterEmailAndPassword("studentgmail.com", "stud");
        loginPageFactory.clickSignInBtn();
        loginPageFactory.findAllElements();
    }

    @Test
    public void enterInorrectEmail() {
        loginPageFactory.enterEmailAndPassword("studentgmail.com", "student");
        loginPageFactory.clickSignInBtn();
        loginPageFactory.findAllElements();
    }

    @Test
    public void enterInorrectPassword() {
        loginPageFactory.enterEmailAndPassword("student@gmail.com", "stud");
        loginPageFactory.clickSignInBtn();
        loginPageFactory.findAllElements();
    }

    @Test
    public void moveAnotherPage() {
        loginPageFactory.clickForgotPasswordBtn();
        loginPageFactory.isNotShowSignInBtn();
    }
}
