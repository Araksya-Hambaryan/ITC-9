package project.itc9.cookmaster;

import android.app.ProgressDialog;
import android.content.Intent;
import android.os.Bundle;
import android.support.annotation.NonNull;
import android.support.v4.app.Fragment;
import android.support.v4.app.FragmentManager;
import android.support.v4.app.FragmentTransaction;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import com.google.firebase.auth.AuthResult;
import com.google.firebase.auth.FirebaseAuth;


/**
 * A simple {@link Fragment} subclass.
 */
public class LoginFragment extends Fragment  implements  View.OnClickListener {
    private FirebaseAuth mAuth;
    private static final String TAG = "LoginFragment";

    EditText mEmailText;
    EditText mPasswordText;
    Button mSigninButton;
    Button mForgotButton;

    public LoginFragment() {
    }

    @Override
    public View onCreateView(@NonNull LayoutInflater inflater, ViewGroup container,
                             Bundle savedInstanceState) {
        View view = inflater.inflate(R.layout.fragment_login, container, false);
        mAuth=FirebaseAuth.getInstance();
        initElements(view);
        setOnClickListeners();
        return view;
    }

    private void initElements(View view) {
        mEmailText = view.findViewById(R.id.input_email);
        mPasswordText = view.findViewById(R.id.input_password);
        mSigninButton = view.findViewById(R.id.btn_login);
        mForgotButton = view.findViewById(R.id.forgot_pass_btn);
    }

    private void setOnClickListeners() {
        mSigninButton.setOnClickListener(this);
        mForgotButton.setOnClickListener(this);
    }

    private void goForgotPasswordPage() {
        ForgotPasswordFragment forgotPasswordFragment = new ForgotPasswordFragment();
        FragmentManager manager = getActivity().getSupportFragmentManager();
        FragmentTransaction transaction = manager.beginTransaction();
        transaction.replace(R.id.m_container, forgotPasswordFragment);
        transaction.addToBackStack("LOGIN_FRAGMENT");
        transaction.commit();
    }

    @Override
    public void onClick(View view) {
        int btn_id = view.getId();
        switch (btn_id) {
            case R.id.forgot_pass_btn:
                goForgotPasswordPage();
                break;
            case R.id.btn_login:
                login(mEmailText.getText().toString(), mPasswordText.getText().toString());
        }

    }
    public void login(String email, String password) {
        Log.d(TAG, "Login");

        if (!validate()) {
            onLoginFailed();
            return;
        }

        mSigninButton.setEnabled(false);

        final ProgressDialog progressDialog = new ProgressDialog(getActivity(), ProgressDialog.THEME_HOLO_DARK);
        progressDialog.setProgressStyle(ProgressDialog.STYLE_SPINNER);
        progressDialog.setIndeterminate(true);
        progressDialog.setTitle("Please wait");
        progressDialog.setMessage("Authenticating...");
        progressDialog.show();

        new android.os.Handler().postDelayed(
                new Runnable() {
                    public void run() {
                        onLoginSuccess();
                        progressDialog.dismiss();
                    }
                }, 3000);
        mAuth.signInWithEmailAndPassword(email, password).addOnCompleteListener(new OnCompleteListener<AuthResult>() {
            @Override
            public void onComplete(@NonNull Task<AuthResult> task) {
                if(task.isSuccessful()) {
                    Intent intent = new Intent(getActivity(), HomePageActivity.class);
                    startActivity(intent);
                } else {
                    onLoginFailed();
                }
            }
        });

    }

    public void onLoginSuccess() {
        mSigninButton.setEnabled(true);
    }

    public void onLoginFailed() {
        Toast.makeText(getActivity(), "Login failed", Toast.LENGTH_LONG).show();
        mSigninButton.setEnabled(true);
    }

    public boolean validate() {
        boolean valid = true;
        String email = mEmailText.getText().toString();
        String password = mPasswordText.getText().toString();

        if (email.isEmpty() || !android.util.Patterns.EMAIL_ADDRESS.matcher(email).matches()) {
            mEmailText.setError("enter a valid email address");
            valid = false;
        } else {
            mEmailText.setError(null);
        }

        if (password.isEmpty() || password.length() < 6 || password.length() > 13) {
            mPasswordText.setError("between 6 and 12 alphanumeric characters");
            valid = false;
        } else {
            mPasswordText.setError(null);
        }
        return valid;
    }
}
