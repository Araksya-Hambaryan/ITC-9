package com.instigatemobile.grapes;

import android.support.test.espresso.ViewInteraction;

import static android.support.test.espresso.Espresso.onView;
import static android.support.test.espresso.matcher.ViewMatchers.withId;

public class HomePageFactory {
    private ViewInteraction m_categorySpiner;
    private ViewInteraction m_filterSpiner;
    private ViewInteraction m_addButton;

    public HomePageFactory() {
        m_categorySpiner = onView(withId(R.id.categories));
        m_filterSpiner = onView(withId(R.id.sort_by));
        m_addButton = onView(withId(R.id.add_file_button));
    }

    public ViewInteraction getCategorySpiner() {
        return m_categorySpiner;
    }

    public ViewInteraction getFilterSpiner() {
        return m_filterSpiner;
    }

    public ViewInteraction getAddButton() {
        return m_addButton;
    }



}
