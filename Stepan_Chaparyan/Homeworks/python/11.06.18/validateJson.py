import re

jsonString = ""

def readFile():
    jsonFile = open("data.json", "r")
    jsonString = jsonFile.read()
    jsonFile.close()
    return jsonString

jsonString = readFile()
print jsonString

def checkBrackets(jsonString):
    if jsonString[0] == "{" and jsonString[len(jsonString)-2] == "}":
    	jsonString = jsonString[1:-2]
        return jsonString
    return False

jsonString = checkBrackets(jsonString)
print jsonString

def removeSpaces(jsonString):
    jsonString = jsonString.replace(" ", "")
    jsonString = jsonString.replace("\n", "")
    return jsonString

jsonString = removeSpaces(jsonString)
print jsonString

def split():
    elements = jsonString.split(',')
    print elements[0]
    print elements[1]
    keys = elements[0].split(':')
    print keys[0]
    print keys[1]
    keys = []

# to be continue

split()


