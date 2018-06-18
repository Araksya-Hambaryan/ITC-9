
# Checking json program in Python
import ast
import re

def readFile():
    jsonFile = open("data.json", "r")
    jsonString = jsonFile.read()
    jsonFile.close()
    return jsonString;

def checkJson(jsonString):
    #remove spaces and new lines
    jsonString = jsonString.replace(" ", "")
    jsonString = jsonString.replace("\n", "")
    #checking and remove first and last breckets
    if jsonString[0] != "{" or jsonString[len(jsonString)-1] != "}":
        return False;
    jsonString = jsonString[1:-1]
    keys = []
    #get a list of json pairs 
    pairs =  jsonString.split(",")
    for pair in pairs:
        #get list of key and value 
        pairList = pair.split(":")
        if len(pairList) != 2:
            return False;
        key = pairList[0]
        keys.append(key)
        #checking key's quotes
        if key[0] != '"' or key[len(key)-1] != '"':
            return False;
        #chekings is value string or number or list
        value = pairList[1]
        if (value[0] == '"' and value[len(value)-1] == '"') != True and (value[0] == '[' and value[len(value)-1] == ']') != True and value.isnumeric() != True:
            return False;
    #checking duplicate keys
    uniqueKeys = list(set(keys))
    if len(uniqueKeys) != len(keys):
        return False;
    return True;

def main():
    print (checkJson(readFile()))
    return;

main()
