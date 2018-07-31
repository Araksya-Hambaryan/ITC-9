package project.itc9.cookmaster;

import android.content.Intent;
import android.support.design.widget.TabLayout;
import android.support.v4.view.ViewPager;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.view.WindowManager;
import android.widget.Button;


public class WelcomeActivity extends AppCompatActivity implements View.OnClickListener {

    private int[] layouts = {R.layout.first_slide, R.layout.second_slide, R.layout.third_slide};
    private Button BtnSkip;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        if (new PreferenceManager(this).checkPreference()) {
            loadHome();
        }
        getWindow().addFlags(WindowManager.LayoutParams.FLAG_TRANSLUCENT_STATUS);

        setContentView(R.layout.activity_welcome);

        ViewPager mPager = findViewById(R.id.viewPager);
        MPagerAdapter mPagerAdapter = new MPagerAdapter(layouts, this);
        mPager.setAdapter(mPagerAdapter);

        TabLayout tabLayout = findViewById(R.id.tab_layout);
        tabLayout.setupWithViewPager(mPager, true);

        BtnSkip = findViewById(R.id.btnskip);
        BtnSkip.setOnClickListener(this);

        mPager.addOnPageChangeListener(new ViewPager.OnPageChangeListener() {
            @Override
            public void onPageScrolled(int i, float v, int i1) {
            }

            @Override
            public void onPageSelected(int position) {
                if (position == layouts.length - 1) {
                    BtnSkip.setText(R.string.start);
                }
            }

            @Override
            public void onPageScrollStateChanged(int i) {

            }
        });
    }

    @Override
    public void onClick(View view) {
        loadHome();
        new PreferenceManager(this).writePrefernce();
    }

    private void loadHome() {
        startActivity(new Intent(this, LoginForgotPasswordActivity.class));
    }
}
