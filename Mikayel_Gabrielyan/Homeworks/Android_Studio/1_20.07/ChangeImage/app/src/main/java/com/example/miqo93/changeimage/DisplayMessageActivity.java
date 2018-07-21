package com.example.miqo93.changeimage;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class DisplayMessageActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_display_message);

       TextView mTextview = (TextView)findViewById(R.id.textView);
        mTextview.setText(getIntent().getStringExtra("mytext"));
    }
}
