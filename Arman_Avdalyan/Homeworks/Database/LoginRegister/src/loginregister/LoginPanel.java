package loginregister;

public class LoginPanel extends javax.swing.JPanel {

    public LoginPanel(MainPage frame) {
        initComponents();
        btnLogIn.addActionListener(frame);
        btnBack.addActionListener(frame);
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        usernameLabel = new javax.swing.JLabel();
        passwordLabel = new javax.swing.JLabel();
        loginUsernameField = new javax.swing.JTextField();
        btnLogIn = new javax.swing.JButton();
        passwordField = new javax.swing.JPasswordField();
        btnBack = new javax.swing.JButton();

        usernameLabel.setText("username");

        passwordLabel.setText("password");

        loginUsernameField.setCursor(new java.awt.Cursor(java.awt.Cursor.TEXT_CURSOR));
        loginUsernameField.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                loginUsernameFieldActionPerformed(evt);
            }
        });

        btnLogIn.setText("LogIn");

        btnBack.setText("Back");

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(this);
        this.setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                .addGap(68, 68, 68)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(btnBack, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(btnLogIn, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(usernameLabel)
                            .addComponent(passwordLabel))
                        .addGap(39, 39, 39)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(passwordField, javax.swing.GroupLayout.DEFAULT_SIZE, 155, Short.MAX_VALUE)
                            .addComponent(loginUsernameField))))
                .addGap(68, 68, 68))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                .addContainerGap(82, Short.MAX_VALUE)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(usernameLabel)
                    .addComponent(loginUsernameField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(29, 29, 29)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(passwordField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(passwordLabel))
                .addGap(29, 29, 29)
                .addComponent(btnLogIn)
                .addGap(18, 18, 18)
                .addComponent(btnBack)
                .addGap(30, 30, 30))
        );
    }// </editor-fold>//GEN-END:initComponents

    private void loginUsernameFieldActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_loginUsernameFieldActionPerformed

    }//GEN-LAST:event_loginUsernameFieldActionPerformed

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton btnBack;
    private javax.swing.JButton btnLogIn;
    private javax.swing.JTextField loginUsernameField;
    private javax.swing.JPasswordField passwordField;
    private javax.swing.JLabel passwordLabel;
    private javax.swing.JLabel usernameLabel;
    // End of variables declaration//GEN-END:variables

    public javax.swing.JButton getLoginButton() {
        return btnLogIn;
    }

    public javax.swing.JButton getBackButton() {
        return btnBack;
    }

    public String getUsername() {
        return loginUsernameField.getText();
    }

    public String getPassword() {
        return String.valueOf(passwordField.getPassword());
    }
}
