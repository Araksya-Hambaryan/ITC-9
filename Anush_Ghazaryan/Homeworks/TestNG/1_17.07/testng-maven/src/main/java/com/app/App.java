package com.app;


import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.Iterator;
import org.json.simple.JSONArray;
import org.json.simple.JSONObject;
import org.json.simple.parser.JSONParser;
import org.json.simple.parser.ParseException;


    public class App
    {

        public static void main( String[] args )
        {
            try {
                JSONParser parser = new JSONParser();
                JSONArray users = (JSONArray) parser.parse(new FileReader("file.json"));
                JSONObject user = getObject(users,"Anahit");
                getNameOrSurname(user, "name");

                System.out.println(user);

            } catch (IOException e) {
                System.out.println(e);
            } catch (ParseException e) {
                System.out.println(e);
            }
        }

        public static JSONArray getJSONArray() throws IOException, ParseException {
            JSONParser parser = new JSONParser();
            JSONArray users = new JSONArray();;
            users = (JSONArray) parser.parse(new FileReader("file.json"));
            return users;
        }
        public static JSONObject getObject(JSONArray array, String name) {
            for (Object object : array ) {
                if (((JSONObject)(object)).get("name").equals( name)) {
                    return (JSONObject)object;
                }
            }
            return null;
        }

        public static String getNameOrSurname(JSONObject object, String nameOrSurname) {
            if (nameOrSurname == "name") {
                System.out.println("name : " + object.get(nameOrSurname));
                return (String)object.get(nameOrSurname);
            } else if (nameOrSurname == "Surname") {
                System.out.println("surname : " + object.get(nameOrSurname));
                return (String)object.get(nameOrSurname);
            }else {
                System.out.println("Something went Wrong");
                return "";
            }

        }


    }

