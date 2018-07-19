package com.itc.mvn;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class JsonParser {
    public static String readFile(String fileName, String jsonText) throws IOException {
        jsonText = new String(Files.readAllBytes(Paths.get(fileName)));
        return jsonText;
    }

    public static boolean compareTwoString(String firstStr, String scondStr) {
        return (firstStr.equals(scondStr));
    }
}
