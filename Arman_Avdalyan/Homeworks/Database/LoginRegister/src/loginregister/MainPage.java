package loginregister;

import java.awt.HeadlessException;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JOptionPane;

import java.io.File;
import java.io.IOException;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.ParserConfigurationException;
import org.w3c.dom.Document;
import org.w3c.dom.NodeList;
import org.w3c.dom.Node;
import org.w3c.dom.Element;
import org.xml.sax.SAXException;

public class MainPage extends javax.swing.JFrame implements ActionListener {

    public static boolean isSql = true;
    private final LoginPanel login = new LoginPanel(this);
    private final RegisterPanel register = new RegisterPanel(this);

    public MainPage() {
        initComponents();
        rbtnSql.setSelected(true);
        buttonGroup1.add(rbtnSql);
        buttonGroup1.add(rbtnMongo);
        btnLogin.addActionListener(this);
        btnRegister.addActionListener(this);
        rbtnSql.addActionListener(this);
        rbtnMongo.addActionListener(this);
        fillDatabase();
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        buttonGroup1 = new javax.swing.ButtonGroup();
        mainPanel = new javax.swing.JPanel();
        btnLogin = new javax.swing.JButton();
        btnRegister = new javax.swing.JButton();
        rbtnSql = new javax.swing.JRadioButton();
        rbtnMongo = new javax.swing.JRadioButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        btnLogin.setText("Login");
        btnLogin.setActionCommand("LogIn");
        btnLogin.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnLoginActionPerformed(evt);
            }
        });

        btnRegister.setText("Register");

        rbtnSql.setText("PostgreSQL");

        rbtnMongo.setText("MongoDB");

        javax.swing.GroupLayout mainPanelLayout = new javax.swing.GroupLayout(mainPanel);
        mainPanel.setLayout(mainPanelLayout);
        mainPanelLayout.setHorizontalGroup(
            mainPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, mainPanelLayout.createSequentialGroup()
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addGroup(mainPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(rbtnMongo)
                    .addComponent(rbtnSql))
                .addGap(148, 148, 148))
            .addGroup(mainPanelLayout.createSequentialGroup()
                .addGap(97, 97, 97)
                .addGroup(mainPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(btnRegister, javax.swing.GroupLayout.PREFERRED_SIZE, 200, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btnLogin, javax.swing.GroupLayout.PREFERRED_SIZE, 200, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addContainerGap(103, Short.MAX_VALUE))
        );
        mainPanelLayout.setVerticalGroup(
            mainPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(mainPanelLayout.createSequentialGroup()
                .addGap(30, 30, 30)
                .addComponent(rbtnMongo)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(rbtnSql)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 30, Short.MAX_VALUE)
                .addComponent(btnLogin, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(18, 18, 18)
                .addComponent(btnRegister, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(48, 48, 48))
        );

        btnLogin.getAccessibleContext().setAccessibleName("Register");
        btnLogin.getAccessibleContext().setAccessibleDescription("");

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(mainPanel, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(mainPanel, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void btnLoginActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnLoginActionPerformed

    }//GEN-LAST:event_btnLoginActionPerformed

    private void fillDatabase() {
        try {
            File inputFile = new File("/home/arman/NetBeansProjects/LoginRegister/res/UserList.xml");
            DocumentBuilderFactory dbFactory = DocumentBuilderFactory.newInstance();
            DocumentBuilder dBuilder = dbFactory.newDocumentBuilder();
            Document doc = dBuilder.parse(inputFile);
            doc.getDocumentElement().normalize();
            DatabaseManager databaseManager = new MongoManager();
            NodeList nList = doc.getElementsByTagName("user");
            for (int temp = 0; temp < nList.getLength(); temp++) {
                Node nNode = nList.item(temp);
                Element eElement = (Element) nNode;
                String name = eElement.getElementsByTagName("name").item(0).getTextContent();
                String userName = eElement.getElementsByTagName("username").item(0).getTextContent();
                String password = eElement.getElementsByTagName("password").item(0).getTextContent();
                if (!databaseManager.checkUser(userName, password)) {
                    databaseManager.createUser(name, userName, password);
                }
            }
        } catch (IOException | ParserConfigurationException | SAXException e) {
            System.out.println("Dom parser error" + e.getMessage());
        }
    }

    public static void main(String args[]) {
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new MainPage().setVisible(true);
            }
        });
    }


    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton btnLogin;
    private javax.swing.JButton btnRegister;
    private javax.swing.ButtonGroup buttonGroup1;
    private javax.swing.JPanel mainPanel;
    private javax.swing.JRadioButton rbtnMongo;
    private javax.swing.JRadioButton rbtnSql;
    // End of variables declaration//GEN-END:variables

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == register.getSignInButton()) {
            createUser();
        }
        if (e.getSource() == login.getLoginButton()) {
            checkUser();
        }
        if (e.getSource() == register.getBackButton()
                || e.getSource() == login.getBackButton()) {
            this.setContentPane(mainPanel);
            this.validate();
        }
        if (e.getSource() == btnLogin) {
            this.setContentPane(login);
            this.validate();
        }
        if (e.getSource() == btnRegister) {
            this.setContentPane(register);
            this.validate();
        }
        if (e.getSource() == rbtnSql) {
            isSql = true;
        }
        if (e.getSource() == rbtnMongo) {
            isSql = false;
        }
    }

    private void checkUser() throws HeadlessException {
        String userName = login.getUsername();
        String password = login.getPassword();
        DatabaseManager databaseManager = DatabaseManager.getInstance();
        if (userName != null && password != null) {
            if (databaseManager.checkUser(userName, password)) {
                JOptionPane.showMessageDialog(null, "User loged in:", "InfoBox: " + "", JOptionPane.INFORMATION_MESSAGE);
                this.setContentPane(mainPanel);
                this.validate();
            } else {
                JOptionPane.showMessageDialog(null, "No such user:", "InfoBox: " + "", JOptionPane.INFORMATION_MESSAGE);
            }

        } else {
            JOptionPane.showMessageDialog(null, "Empty username or password:", "InfoBox: " + "", JOptionPane.INFORMATION_MESSAGE);
        }
    }

    private void createUser() throws HeadlessException {
        String name = register.getName();
        String userName = register.getUsername();
        String password = register.getPassword();
        DatabaseManager databaseManager = DatabaseManager.getInstance();
        if (userName != null && password != null) {
            if (databaseManager.checkUser(userName, password)) {
                JOptionPane.showMessageDialog(null, "User alrady exists", "InfoBox: " + "", JOptionPane.INFORMATION_MESSAGE);
            } else {
                if (databaseManager.createUser(name, userName, password)) {
                    JOptionPane.showMessageDialog(null, "User successfully added:", "InfoBox: " + "", JOptionPane.INFORMATION_MESSAGE);
                    this.setContentPane(mainPanel);
                    this.validate();
                }
            }
        } else {
            JOptionPane.showMessageDialog(null, "Empty name, username or password:", "InfoBox: " + "", JOptionPane.INFORMATION_MESSAGE);
        }
    }
}
