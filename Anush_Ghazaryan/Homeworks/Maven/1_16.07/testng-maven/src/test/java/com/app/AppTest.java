package com.app;

import org.json.simple.JSONObject;
import org.json.simple.JSONArray;
import java.io.IOException;
import org.json.simple.parser.ParseException;
import static org.junit.Assert.*;
import org.testng.annotations.*;


public class AppTest {

    App app;
    JSONObject obj = new JSONObject();
    int dependecy=0;

    @BeforeClass
    public void init() {

        app = new App();
        obj = new JSONObject();
        obj.put("name","Anahit");
        obj.put("surname","Karyan");
        JSONArray homeworks = new JSONArray();
        homeworks.add("Java");
        homeworks.add("Python");
        homeworks.add("Maven");
        obj.put("homeworks", homeworks);
    }

    @Test
    public void testGetObject() {

        try {
            assertEquals(obj, app.getObject(app.getJSONArray(), "Anahit"));
        } catch (IOException e) {
            System.out.println(e);
        } catch (ParseException e) {
            System.out.println(e);
        }
    }

    @Test
    public void testGetNameOrSurname() {
        assertEquals("Anahit", app.getNameOrSurname(obj,"name"));
    }



    @Test
    public void initEnvironmentTest() {
        System.out.println(this.dependecy);
        dependecy += 1000;
    }

    @Test(dependsOnMethods={"initTest"})
    public void testmethod() {
        System.out.println(this.dependecy);
    }

    @Test(enabled = false)
    public void testsetProperty() {
        System.out.println("Test Method is ignored");
    }

    @Test
    public void testString(String firstName) {
        System.out.println(" testing String " + firstName);
        assert "Miriam".equals(firstName);
    }

    @BeforeMethod
    public void setUp() {
        System.out.println("@BeforeMethod");
    }

    @AfterMethod
    public void tearDown() {
        System.out.println("@AfterMethod");
    }

    @BeforeGroups
    public void beforeGroups() {
        System.out.println("BeforeGroups");
    }

    @AfterGroups
    public void afterGroups() {
        System.out.println("@AfterGroups");
    }

    @BeforeTest
    public void beforeTest() {
        System.out.println("@BeforeTest");
    }

    @AfterTest
    public void afterTest() {
        System.out.println("@AfterTest");
    }

    @AfterClass
    public void afterClass() {
        System.out.println("@AfterClass");
    }

    @BeforeSuite
    public void beforeSuite() {
        System.out.println("@BeforeSuite");
    }

    @AfterSuite
    public void afterSuite() {
        System.out.println("@AfterSuite");
    }
}
