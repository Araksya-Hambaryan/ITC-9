# Checking json program in Python

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
    #checking first and last breckets
    if jsonString[0] != "{" or jsonString[len(jsonString)-1] != "}":
        return False;
    jsonString = jsonString[1:-1]
    keys = []
    for pair in jsonString.split(","):
        pairList = pair.split(":")
        if len(pairList) != 2:
            return False
        key = pairList[0]
        keys.append(key)
        #checking key's quotes
        if key[0] != '"' or key[len(key)-1] != '"':
            return False;
        value = pairList[1]
        if type(value) =='str':
            if value[0] != '"' or value[len(key)-1] != '"':
                return False;
           
    #checking duplicate keys
    uniqueKeys = list(set(keys))
    if uniqueKeys != keys:
        print "duplicates found"
    print "nothing found"
    return;

def main():
    print checkJson(readFile())
    return;

main()
