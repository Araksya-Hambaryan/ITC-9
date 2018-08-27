package instigatemobile.com.cookmaster;

import android.support.test.espresso.ViewInteraction;
import android.support.test.espresso.action.ViewActions;

import static android.support.test.espresso.Espresso.onView;
import static android.support.test.espresso.action.ViewActions.click;
import static android.support.test.espresso.action.ViewActions.closeSoftKeyboard;
import static android.support.test.espresso.assertion.ViewAssertions.matches;
import static android.support.test.espresso.matcher.ViewMatchers.isDisplayed;
import static android.support.test.espresso.matcher.ViewMatchers.withId;
import static org.hamcrest.core.IsNot.not;

public class LoginPageFactory {
    private ViewInteraction m_logo;
    private ViewInteraction m_emailTitle;
    private ViewInteraction m_email;
    private ViewInteraction m_passwordTitle;
    private ViewInteraction m_password;
    private ViewInteraction m_signInBtn;
    private ViewInteraction m_forgotPassword;


     LoginPageFactory() {
        m_logo = onView(withId(R.id.logo));
        m_emailTitle = onView(withId(R.id.email_address_txt));
        m_email = onView(withId(R.id.input_email));
        m_passwordTitle = onView(withId(R.id.tv_password));
        m_password = onView(withId(R.id.input_password));
        m_signInBtn = onView(withId(R.id.btn_login));
        m_forgotPassword = onView(withId(R.id.forgot_pass_btn));
    }

    public void findAllElements() {
        m_logo.check(matches(isDisplayed()));
        m_emailTitle.check(matches(isDisplayed()));
        m_email.check(matches(isDisplayed()));
        m_passwordTitle.check(matches(isDisplayed()));
        m_password.check(matches(isDisplayed()));
        m_signInBtn.check(matches(isDisplayed()));
        m_forgotPassword.check(matches(isDisplayed()));
    }

    public void isNotShowSignInBtn() {
         m_signInBtn.check(matches(not(isDisplayed())));
    }

    public void enterEmailAndPassword(String email, String password) {
        m_email.perform(ViewActions.clearText()).perform(ViewActions.typeText(email),closeSoftKeyboard());
        m_password.perform(ViewActions.clearText()).perform(ViewActions.typeText(password),closeSoftKeyboard());
    }

    public void clickSignInBtn() {
        m_signInBtn.perform(click());
    }

    public void clickForgotPasswordBtn() {
        m_forgotPassword.perform(click());
    }
}
