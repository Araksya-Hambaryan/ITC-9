package com.mycompany.app;

import junit.framework.Test;
import org.testng.annotations.BeforeMethod;
import org.testng.annotations.AfterMethod;
import org.testng.annotations.BeforeClass;

public class AppTest {



    @Test
        public static void test1() {
            Bord bord = new Bord();
            char [][] newBord = bord.creatBordDef();
            Assert.assertNotEquals(newBord[0][0], 'R', "-------------");
        }
}
 
