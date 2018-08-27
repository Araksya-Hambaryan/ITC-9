package com.instigatemobile.grapes;

import android.content.Context;
import android.support.test.InstrumentationRegistry;
import android.support.test.rule.ActivityTestRule;
import android.support.test.runner.AndroidJUnit4;
import android.view.View;
import android.widget.ActionMenuView;

import com.instigatemobile.grapes.activities.PreviewActivity;

import org.hamcrest.CoreMatchers;
import org.junit.Before;
import org.junit.Rule;
import org.junit.Test;
import org.junit.runner.RunWith;

import static android.support.test.espresso.Espresso.onView;
import static android.support.test.espresso.action.ViewActions.click;
import static android.support.test.espresso.action.ViewActions.closeSoftKeyboard;
import static android.support.test.espresso.action.ViewActions.typeText;
import static android.support.test.espresso.assertion.ViewAssertions.matches;
import static android.support.test.espresso.contrib.DrawerActions.openDrawer;
import static android.support.test.espresso.matcher.ViewMatchers.isDisplayed;
import static android.support.test.espresso.matcher.ViewMatchers.withContentDescription;
import static android.support.test.espresso.matcher.ViewMatchers.withId;
import static android.support.test.espresso.matcher.ViewMatchers.withText;
import static org.hamcrest.CoreMatchers.allOf;
import static org.hamcrest.CoreMatchers.is;
import static org.hamcrest.core.IsNot.not;
import static org.junit.Assert.*;

/**
 * Instrumented test, which will execute on an Android device.
 *
 * @see <a href="http://d.android.com/tools/testing">Testing documentation</a>
 */
@RunWith(AndroidJUnit4.class)
public class ExampleInstrumentedTest {
    @Rule
    public ActivityTestRule<PreviewActivity> mActivityRule =
            new ActivityTestRule<>(PreviewActivity.class);

   @Before
   public void loginPage () {
       onView(withId(R.id.btn_skip)).perform(click());
       onView(withId(R.id.nickname)).perform(typeText("Grapes"), closeSoftKeyboard());
       onView(withId(R.id.submit)).perform(click());

   }

    @Test
    public void validateActiveNodesPageTitle() {
        onView(withContentDescription("Другие параметры")).perform(click());
        onView(withText("Active Nodes")).perform(click());
        onView(withText("Active Nodes")).check(matches(isDisplayed()));
    }
}
