def writeInFile():
    contentOfFile = open("text.txt", "w")
    json = raw_input("Enter the json: ")
    contentOfFile.write(json)
    contentOfFile.close()


def readFromFile():
    contentOfFile = open("text.txt", "r")
    jsonString = contentOfFile.read()
    contentOfFile.close()
    return jsonString

def checkBrackets(jsonString):
    if jsonString[0] == "{" and jsonString[-1] == "}":
        return True
    return False

def checkCountsOfKeysAndValuesIsEqual(keys, values):
    if len(keys) == len(values):
        return True
    return False

def getKeysAndValue(jsonString, keys, values):
    countOfLetter = 1                                         # count of key or value letter
    jsonString = jsonString[1:]                               # delete first  bracket
    jsonString = jsonString[:-1]                              # delete last bracket
    jsonString += ","
    keysString = ""                    
    valuesString = ""
    for i in jsonString:
        if ":" == i:                                          # if i-th symbol is <"> then that is end of key 
            keysString += jsonString[:countOfLetter]
            jsonString = jsonString[countOfLetter:]
            countOfLetter = 0
        if "," == i:                                          # if i-th symbol is <,> then that is end of value 
            valuesString += jsonString[:countOfLetter]
            jsonString = jsonString[countOfLetter:]
            countOfLetter = 0 
        countOfLetter += 1                              
    keysArr = keysString.split(':')                           # split(":') create new list without <:> symbol
    valuesArr = valuesString.split(',')
    keysArr = keysArr[:-1]
    valuesArr = valuesArr[:-1]
    for i in keysArr:
        keys.append(i)
    for i in valuesArr:
        if i != "":
            values.append(i)
    
def verifyKeysRepeating(keys):
    length = len(keys)
    for i in range(0, length - 1, 1):
        if keys[i]== keys[i + 1]:
            return False
    return True

def validateKey(listOfKeys):
    length=len(listOfKeys)
    for i in range(0, length, 1):
        if '"' != listOfKeys[i][:1] or '"' != listOfKeys[i][-1:]:
            return False
    return True

def validateValue(listOfValues):
    length=len(listOfValues)
    for i in range(0, length, 1):
        if ('"' == listOfValues[i][:1] and '"' == listOfValues[i][-1:]):
            return True
        print  type(listOfValues[i])
        if ('"' != listOfValues[i][:1] and '"' != listOfValues[i][-1:]) and "int" == type(listOfValues[i]):
            return True
    return False

def isJson(jsonString, keys, values):
    if False == checkBrackets(jsonString):
        print "Incorect json, there is not bracket(s)!"
        return False
    if False == checkCountsOfKeysAndValuesIsEqual(keys, values):
        print "Incorect json, count of keys and values is not equal!"
        return False
    if False == validateKey(keys):
        print "Incorect json, key(s) is not valid"
        return False
    if False == validateValue(values):
        print "Incorect json, value(s) is not valid"
        return False
    if False == verifyKeysRepeating(keys):
        print "Incorect json, Keys is repeated!"
        return False
    return True
               
    
def main():
    writeInFile()
    jsonStr = readFromFile()
    listOfKeys = [] 
    listOfValues = []
    getKeysAndValue(jsonStr, listOfKeys, listOfValues)
    if True == isJson(jsonStr, listOfKeys, listOfValues):
        print "Corect Json!"
        return

main()
