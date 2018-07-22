package com.example.anush.myapplicationfinal;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.SeekBar;
import android.widget.TextView;



    public class MainActivity extends AppCompatActivity  {



        private SeekBar redSeekBarVar, greenSeekBarVar, blueSeekBarVar;

        @Override
        protected void onCreate(Bundle savedInstanceState) {
            super.onCreate(savedInstanceState);
            setContentView(R.layout.activity_main);

            redSeekBarVar = (SeekBar) findViewById(R.id.redSeekBar);
            greenSeekBarVar = (SeekBar) findViewById(R.id.greenSeekBar);
            blueSeekBarVar = (SeekBar) findViewById(R.id.blueSeekBar);
            updateColor();

            redSeekBarVar.setOnSeekBarChangeListener(seekBarChangeListener);
            greenSeekBarVar.setOnSeekBarChangeListener(seekBarChangeListener);
            blueSeekBarVar.setOnSeekBarChangeListener(seekBarChangeListener);

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
            TextView m_textView = (TextView) findViewById(R.id.text_view1);
            redValue = redSeekBarVar.getProgress();
            greenValue = greenSeekBarVar.getProgress();
            blueValue = blueSeekBarVar.getProgress();
            redSeekBarVar.setBackgroundColor(redValue * 0x10000);
            greenSeekBarVar.setBackgroundColor(greenValue * 0x100);
            blueSeekBarVar.setBackgroundColor(blueValue);
            m_textView.setBackgroundColor(0xff000000 + redValue * 0x10000 + greenValue * 0x100 + blueValue);
        }

    }

