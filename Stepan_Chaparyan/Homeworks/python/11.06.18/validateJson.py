import re

def readFile():
    jsonFile = open("data.json", "r")
    jsonString = jsonFile.read()
    jsonFile.close()
    return jsonString


def checkBrackets(jsonString):
    if jsonString[0] == "{" and jsonString[-1] == "}":
        return True
    return False



print readFile()
print checkBrackets(readFile())
