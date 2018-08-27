package com.instigatemobile.grapes;

import android.support.test.espresso.ViewInteraction;

import static android.support.test.espresso.Espresso.onView;
import static android.support.test.espresso.action.ViewActions.click;
import static android.support.test.espresso.matcher.ViewMatchers.withId;
import static android.support.test.espresso.matcher.ViewMatchers.withText;

public class HomePageFactory {
    private ViewInteraction m_categorySpiner;
    private ViewInteraction m_filterSpiner;
    private ViewInteraction m_addButton;
    private ViewInteraction m_chooseFileDialog;
    private ViewInteraction m_all;
    private ViewInteraction m_pictures;
    private ViewInteraction m_videos;
    private ViewInteraction m_musics;
    private ViewInteraction m_books;
    private ViewInteraction m_other;

    HomePageFactory() {
        m_categorySpiner = onView(withId(R.id.categories));
        m_filterSpiner = onView(withId(R.id.sort_by));
        m_addButton = onView(withId(R.id.add_file_button));
        m_chooseFileDialog = onView(withText("Choose Drive"));
        m_all = onView(withText("All"));
        m_pictures = onView(withText("Pictures"));
        m_videos = onView(withText("Videos"));
        m_musics = onView(withText("Musics"));
        m_books = onView(withText("Books"));
        m_other = onView(withText("Other"));
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

    public ViewInteraction getChooseFileDialog() {
        return m_chooseFileDialog;
    }

    public ViewInteraction getAll() {
        return m_all;
    }

    public ViewInteraction getPictures() {
        return m_pictures;
    }

    public ViewInteraction getVideos() {
        return m_videos;
    }

    public ViewInteraction getMusics() {
        return m_musics;
    }

    public ViewInteraction getBooks() {
        return m_books;
    }

    public ViewInteraction getOther() {
        return m_other;
    }

    public void clickedCategorySpiner() {
        m_categorySpiner.perform(click());
    }

    public void clickedFilterSpiner() {
        m_filterSpiner.perform(click());
    }

    public void clickedAddButton() {
        m_addButton.perform(click());
    }
}
