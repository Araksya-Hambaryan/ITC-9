package com.itc.myCustomLib;

import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Paths;

public class FileProcessor 
{
    public static String readFile(String fileName, String jsonText) throws IOException {
        jsonText = new String(Files.readAllBytes(Paths.get(fileName)));
	return jsonText;
    }
    public static boolean compareTwoString(String firstStr, String scondStr) {
	return (firstStr.equals(scondStr));
    }
}
