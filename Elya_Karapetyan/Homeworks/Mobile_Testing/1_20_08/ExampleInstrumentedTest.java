package instigatemobile.com.cookmaster;

import android.support.test.espresso.action.ViewActions;
import android.support.test.rule.ActivityTestRule;
import android.support.test.runner.AndroidJUnit4;

import org.junit.Rule;
import org.junit.Test;
import org.junit.runner.RunWith;

import instigatemobile.com.cookmaster.activities.LoginForgotPasswordActivity;

import static android.support.test.espresso.Espresso.onView;
import static android.support.test.espresso.action.ViewActions.click;
import static android.support.test.espresso.action.ViewActions.closeSoftKeyboard;
import static android.support.test.espresso.assertion.ViewAssertions.matches;
import static android.support.test.espresso.matcher.ViewMatchers.isDisplayed;
import static android.support.test.espresso.matcher.ViewMatchers.withId;
import static org.junit.Assert.*;

@RunWith(AndroidJUnit4.class)
public class ExampleInstrumentedTest {
    @Rule
    public ActivityTestRule<LoginForgotPasswordActivity> mActivityRule =
            new ActivityTestRule<>(LoginForgotPasswordActivity.class);

    @Test
    public void  displayedAllElements() {
        onView(withId(R.id.logo)).check(matches(isDisplayed()));
        onView(withId(R.id.email_address_txt)).check(matches(isDisplayed()));
        onView(withId(R.id.tv_password)).check(matches(isDisplayed()));
        onView(withId(R.id.input_email)).check(matches(isDisplayed()));
        onView(withId(R.id.input_password)).check(matches(isDisplayed()));
        onView(withId(R.id.btn_login)).check(matches(isDisplayed()));
        onView(withId(R.id.forgot_pass_btn)).check(matches(isDisplayed()));
    }

    @Test
    public void enterCorrectEmailAndPassword() {
        onView(withId(R.id.input_email)).perform(ViewActions.clearText())
                .perform(ViewActions.typeText("student@gmail.com"),closeSoftKeyboard());

        onView(withId(R.id.input_password)).perform(ViewActions.clearText())
                .perform(ViewActions.typeText("student"),closeSoftKeyboard());
        onView(withId(R.id.btn_login)).perform(click());
        onView(withId(R.id.forgot_pass_title)).check(matches(isDisplayed()));
        onView(withId(R.id.menu_today)).check(matches(isDisplayed()));
    }

    @Test
    public void enterInorrectEmailAndPassword() {
        onView(withId(R.id.input_email)).perform(ViewActions.clearText())
                .perform(ViewActions.typeText("student@gmail"),closeSoftKeyboard());

        onView(withId(R.id.input_password)).perform(ViewActions.clearText())
                .perform(ViewActions.typeText("stu"),closeSoftKeyboard());
        onView(withId(R.id.btn_login)).perform(click());
        onView(withId(R.id.logo)).check(matches(isDisplayed()));
    }

    @Test
    public void enterInorrectEmail() {
        onView(withId(R.id.input_email)).perform(ViewActions.clearText())
                .perform(ViewActions.typeText("student@gmail"),closeSoftKeyboard());

        onView(withId(R.id.input_password)).perform(ViewActions.clearText())
                .perform(ViewActions.typeText("student"),closeSoftKeyboard());
        onView(withId(R.id.btn_login)).perform(click());
        onView(withId(R.id.logo)).check(matches(isDisplayed()));
    }

    @Test
    public void enterInorrectPassword() {
        onView(withId(R.id.input_email)).perform(ViewActions.clearText())
                .perform(ViewActions.typeText("student@gmail.com"), closeSoftKeyboard());

        onView(withId(R.id.input_password)).perform(ViewActions.clearText())
                .perform(ViewActions.typeText("stu"), closeSoftKeyboard());
        onView(withId(R.id.btn_login)).perform(click());
        onView(withId(R.id.logo)).check(matches(isDisplayed()));
    }

    @Test
    public void goToForgotPasswordPage() {
        onView(withId(R.id.forgot_pass_btn)).perform(click());
        onView(withId(R.id.forgot_pass_title)).check(matches(isDisplayed()));
    }
}
