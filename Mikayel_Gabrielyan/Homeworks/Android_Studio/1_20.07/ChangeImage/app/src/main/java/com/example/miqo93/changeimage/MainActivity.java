package com.example.miqo93.changeimage;

import android.content.Intent;
import android.support.constraint.ConstraintLayout;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.SeekBar;

public class MainActivity extends AppCompatActivity {

    private Button m_firstButton, m_secondButton, m_saveButton;
    private ImageView m_imageView;
    private EditText m_editText;
    private CheckBox m_checkBox;
    private RelativeLayout m_relativeLayout;



    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        m_relativeLayout = (RelativeLayout) findViewById(R.id.relativeLayout);
        m_firstButton = (Button) findViewById(R.id.firstButton);
        m_secondButton = (Button) findViewById(R.id.secondButton);
        m_saveButton = (Button) findViewById(R.id.saveButton);
        m_imageView = (ImageView) findViewById(R.id.imageView);
        m_editText = (EditText) findViewById(R.id.editText);
        m_checkBox = (CheckBox) findViewById(R.id.checkBox);

        m_firstButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                m_imageView.setImageResource(R.drawable.first);
            }
        });

        m_secondButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                m_imageView.setImageResource(R.drawable.second);
            }
        });

        m_saveButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {

                String text = m_editText.getText().toString();
                Intent m_intent = new Intent(MainActivity.this, DisplayMessageActivity.class);
                m_intent.putExtra("mytext",text);
                startActivity(m_intent);
            }
        });
    }

}
