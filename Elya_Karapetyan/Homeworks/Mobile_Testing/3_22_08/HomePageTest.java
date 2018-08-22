package com.instigatemobile.grapes;
import android.support.test.rule.ActivityTestRule;
import android.support.test.runner.AndroidJUnit4;

import com.instigatemobile.grapes.activities.LogInActivity;
import com.instigatemobile.grapes.activities.MainActivity;
import com.instigatemobile.grapes.activities.PreviewActivity;

import org.junit.Before;
import org.junit.Rule;
import org.junit.Test;
import org.junit.runner.RunWith;

import static android.support.test.espresso.action.ViewActions.click;
import static android.support.test.espresso.assertion.ViewAssertions.matches;
import static android.support.test.espresso.matcher.ViewMatchers.isDisplayed;

@RunWith(AndroidJUnit4.class)
public class HomePageTest {
    private HomePageFactory homePageFactory;

    @Rule
    public ActivityTestRule<MainActivity> mActivityRule =
            new ActivityTestRule<>(MainActivity.class);

    @Before
    public void setup() {
        homePageFactory = new HomePageFactory();
    }

//    @Before
//    public void signIn() {
//        Utils.signIn();
//    }

    @Test
    public void disabledAllElements() {
        homePageFactory.getCategorySpiner().check(matches(isDisplayed()));
        homePageFactory.getFilterSpiner().check(matches(isDisplayed()));
        homePageFactory.getAddButton().check(matches(isDisplayed()));
    }

    @Test
    public void clickCategorySpiner() {
        homePageFactory.getCategorySpiner().perform(click());
        //homePageFactory.getCategorySpiner()
    }

    @Test
    public void clickFilterSpiner() {
        homePageFactory.getFilterSpiner().perform(click());
    }

    @Test
    public void clickAddButton() {
        homePageFactory.getAddButton().perform(click());
    }

}
