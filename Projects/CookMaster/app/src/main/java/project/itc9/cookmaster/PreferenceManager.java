package project.itc9.cookmaster;

import android.content.Context;
import android.content.SharedPreferences;

public class PreferenceManager {

    private Context context;
    private SharedPreferences sharedPreferences;

    public PreferenceManager(Context context) {
        this.context = context;
        getSharedPreference();
    }

    private void getSharedPreference() {
        sharedPreferences = context.getSharedPreferences(context.getString(R.string.my_preference), Context.MODE_PRIVATE);
    }

    public void writePrefernce() {
        SharedPreferences.Editor editor = sharedPreferences.edit();
        editor.putString(context.getString(R.string.my_preference_key), "INIT_OK");
        editor.apply();
    }

    public boolean checkPreference() {
        boolean status;
        if (sharedPreferences.getString(context.getString(R.string.my_preference_key), "null").equals("null")) {
            status = false;
        } else {
            status = true;
        }
        return status;
    }
}
