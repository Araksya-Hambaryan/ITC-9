package com.example.linux.myseekbar;
import android.os.Bundle;
import android.widget.TextView;
import android.support.constraint.ConstraintLayout;
import android.support.v7.app.AppCompatActivity;
import android.widget.SeekBar;

public class MainActivity extends AppCompatActivity {

    private SeekBar mRedSeekBar, mGreenSeekBar, mBlueSeekBar;
    private ConstraintLayout mScreenLayout;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        mScreenLayout = (ConstraintLayout) findViewById(R.id.constrainLayout);
        mRedSeekBar = (SeekBar) findViewById(R.id.seekBar_Red);
        mGreenSeekBar = (SeekBar) findViewById(R.id.seekBar_Green);
        mBlueSeekBar = (SeekBar) findViewById(R.id.seekBar_Blue);
        updateBackground();

        mRedSeekBar.setOnSeekBarChangeListener(seekBarChangeListener);
        mGreenSeekBar.setOnSeekBarChangeListener(seekBarChangeListener);
        mBlueSeekBar.setOnSeekBarChangeListener(seekBarChangeListener);

    }

    private SeekBar.OnSeekBarChangeListener seekBarChangeListener = new SeekBar.OnSeekBarChangeListener() {
        @Override
        public void onProgressChanged(SeekBar seekBar, int progress, boolean fromUser) {
            updateBackground();
        }

        @Override
        public void onStartTrackingTouch(SeekBar seekBar) {

        }

        @Override
        public void onStopTrackingTouch(SeekBar seekBar) {

        }
    };

    private void updateBackground() {
        int redValue, greenValue, blueValue;
        redValue = mRedSeekBar.getProgress();
        greenValue = mGreenSeekBar.getProgress();
        blueValue = mBlueSeekBar.getProgress();
        TextView tv1 = (TextView) findViewById(R.id.text_view1);
        tv1.setBackgroundColor(0xff000000 + redValue * 0x10000 + greenValue * 0x100
                + blueValue);
    }

}