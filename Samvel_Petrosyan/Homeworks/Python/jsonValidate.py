def inputJsonStringInFile():
    fileName = open("text.txt", "w")
    jsonString = raw_input("Enter Json:" )
    fileName.write(jsonString)
    fileName.close()

def getJsonStringFromFile() :
    fileName = open("text.txt", "r")
    jsonString = fileName.read()
    fileName.close()
    return jsonString

def checkBrackets(jsonString):
    if jsonString[0] == "{" and jsonString[-1] == "}":
        return True
    return False

def checkKey(keyList):
    length = len(keyList)
    for i in range(0,length,1):
        if keyList[i][0] == '"' and keyList[i][-1] == '"':
            return True
    return False

def checkValue(valueList)
    length = len(valueList)
    for i in range(0,length,1):
        if valueList[i][0] == '"' and valueList[i][-1] == '"':
            return True
        if (valueList[i][0] != '"' and valueList[i][-1] != '"') and type(valueList[i]) == "int" :
            return True
    return False

def checkCountKeyValueList(keyList,valueList):
    if len(keyList) == len(valueList):
        return True
    return False

def checkRepeatKey(keyList):
    length = len(keyList)
    for i in range(0,length-1,1):
        if keyList[i] == keyList[i+1]
        return False
    return True

def getKeysAndValues(jsonString,key,value):
    if False == checkBrackets(jsonString):
        print "Incorect json,Brakets!"
        return False
    if False == checkCountKeyValueList(keys, values):
        print "Incorect json, key and value is not equal!"
        return False
    if False == chekKey:
        print "Incorect json, key is not valid"
        return False
    if False == chekValue:
        print "Incorect json, value is not valid"
        return False
    if False == chekRepeatkey:
        print"Incorect json, Keys is repeated!"
        return False
    return True
                        

    inputJsonStringInFile()
    print "json: "+getJsonStringFromFile()
