package com.example.miqo93.seekbar;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.SeekBar;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private SeekBar m_redSeekBar, m_greenSeekBar, m_blueSeekBar;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        m_redSeekBar = (SeekBar) findViewById(R.id.redSeekBar);
        m_greenSeekBar = (SeekBar) findViewById(R.id.greenSeekBar);
        m_blueSeekBar = (SeekBar) findViewById(R.id.blueSeekBar);
        updateColor();

        m_redSeekBar.setOnSeekBarChangeListener(seekBarChangeListener);
        m_greenSeekBar.setOnSeekBarChangeListener(seekBarChangeListener);
        m_blueSeekBar.setOnSeekBarChangeListener(seekBarChangeListener);

    }

    private SeekBar.OnSeekBarChangeListener seekBarChangeListener = new SeekBar.OnSeekBarChangeListener() {
        @Override
        public void onProgressChanged(SeekBar seekBar, int progress, boolean fromUser) {
            updateColor();
        }

        @Override
        public void onStartTrackingTouch(SeekBar seekBar) {

        }

        @Override
        public void onStopTrackingTouch(SeekBar seekBar) {

        }
    };

    private void updateColor() {
        int redValue, greenValue, blueValue;
        TextView m_textView = (TextView) findViewById(R.id.textView);
        redValue = m_redSeekBar.getProgress();
        greenValue = m_greenSeekBar.getProgress();
        blueValue = m_blueSeekBar.getProgress();
        m_redSeekBar.setBackgroundColor(redValue * 0x10000);
        m_greenSeekBar.setBackgroundColor(greenValue * 0x100);
        m_blueSeekBar.setBackgroundColor(blueValue);
        m_textView.setBackgroundColor(0xff000000 + redValue * 0x10000 + greenValue * 0x100 + blueValue);
    }

}