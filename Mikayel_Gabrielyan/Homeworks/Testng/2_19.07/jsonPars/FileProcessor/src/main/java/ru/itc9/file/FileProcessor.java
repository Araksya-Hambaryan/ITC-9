package ru.itc9.file;

import com.itc.mvn.JsonParser;
import java.io.IOException;

public class FileProcessor {
    public static void main(String[] args) throws IOException {
        String firstJson = " ";
        String firstPath = "../json-diff/resurses/firstJson.txt";
        firstJson = JsonParser.readFile(firstPath, firstJson);
        String secondJson = " ";
        String secondPath = "../json-diff/resurses/secondJson.txt";
        secondJson = JsonParser.readFile(secondPath, secondJson);
    }
}