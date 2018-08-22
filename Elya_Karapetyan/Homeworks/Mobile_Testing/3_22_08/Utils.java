package com.instigatemobile.grapes;

import android.icu.util.ValueIterator;
import android.support.test.espresso.ViewInteraction;
import android.support.test.espresso.action.ViewActions;

import static android.support.test.espresso.Espresso.onView;
import static android.support.test.espresso.action.ViewActions.click;
import static android.support.test.espresso.action.ViewActions.closeSoftKeyboard;
import static android.support.test.espresso.matcher.ViewMatchers.withId;
import static android.support.test.espresso.matcher.ViewMatchers.withText;

public class Utils {

    public static void signIn() {
//        ViewInteraction m_skipBtn = onView(withId(R.id.btn_skip));
//        m_skipBtn.perform(click());
        ViewInteraction m_nickname = onView(withId(R.id.nick_name));
        m_nickname.perform(ViewActions.clearText()).perform(ViewActions.typeText("Nikname"),closeSoftKeyboard());
        ViewInteraction m_submitBtn = onView(withId(R.id.submit));
        m_submitBtn.perform(click());


    }
}
