package com.itc.jsonDiff;

import com.itc.myCustomLib.FileProcessor;
import org.json.simple.JSONObject;
import org.json.simple.parser.JSONParser;
import org.json.*;
import java.io.IOException;

public class App {
    public static void main(String[] args) throws IOException {
		String firstJson = " ";
		String firstPath = "../json-diff/resurses/firstJson.txt"; 
		firstJson = FileProcessor.readFile(firstPath, firstJson);
		String secondJson = " ";
		String secondPath = "../json-diff/resurses/secondJson.txt"; 
		secondJson = FileProcessor.readFile(secondPath, secondJson);
		//JSONObject firstObj = new JSONObject(firstJson);
		//JSONObject secondObj = new JSONObject(secondJson);
		if (FileProcessor.compareTwoString(firstJson, secondJson)) {
			System.out.println("\n\nString is equales!\n\n");
		} else {
			System.out.println("\n\nString is not equales!\n\n");
		}
	}
}
