import re
import sys

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

def disconnectArrayFromValuesString(valuesString):
    array = ""
    lenValueStr = len(valuesString) 
    for i in range(0,lenValueStr-2,1):
        if ',' == valuesString[i] and '[' == valuesString[i+1]:
            tmpIndex = i
            i += 2
            while i != lenValueStr - 2:
                if ']' != valuesString[i]:
                    array += valuesString[i-1]
                    i += 1
            array += valuesString[i-1] + ']'+ ','
            i = tmpIndex
    return array

def getKeysAndValue(jsonString, keys, values):
    countOfLetter = 1                                         # count of key or value letter
    jsonString = jsonString[1:]                               # delete first  bracket
    jsonString = jsonString[:-1]                              # delete last bracket
    jsonString += ","
    keysString = ""                    
    valuesString = ""
    index = 0
    for i in jsonString:
        index += 1
        #if '{' == i:
        #    jsonString = '{' + jsonString[index:]                               
        #    getKeysAndValue(jsonString, keys, values)
        if ':' == i:                                          # if i-th symbol is <"> then that is end of key 
            keysString += jsonString[:countOfLetter]
            jsonString = jsonString[countOfLetter:]
            countOfLetter = 0
        if ',' == i:                                          # if i-th symbol is <,> then that is end of value 
            valuesString += jsonString[:countOfLetter]
            jsonString = jsonString[countOfLetter:]
            countOfLetter = 0 
        countOfLetter += 1                  
    keysArr = keysString.split(':')                           # split(":') create new list without <:> symbol
    array = disconnectArrayFromValuesString(valuesString)
    if 0 != len(array):
        valuesString = valuesString.replace(array, '0')           # write 0 insrend of array in value string
        valuesString += ','
    valuesArr = valuesString.split(',')
    keysArr = keysArr[:-1]
    valuesArr = valuesArr[:-1]
    for i in keysArr:
        keys.append(i)
    for i in valuesArr:
        if i != "":
            values.append(i)
    for i in values:
        print (i)
    
def verifyKeysRepeating(keys):
    length = len(keys)
    for i in range(0, length - 1, 1):
        if keys[i]== keys[i + 1]:
            return False
    return True

def validateKey(listOfKeys):
    length=len(listOfKeys)
    print listOfKeys
    if 2 == len (listOfKeys[0]):
        return False 
    for i in range(0, length, 1):
        if '"' != listOfKeys[i][:1] or '"' != listOfKeys[i][-1:]:
            return False
        for j in range(0, len(listOfKeys[i]), 1):
            if " " == listOfKeys[i][j]:
                return False
    return True

def validateValue(listOfValues):
    length=len(listOfValues)
    if 2 == len (listOfValues[0]):
        return False 
    for i in range(0, length, 1):
        if ('"' == listOfValues[i][:1] and '"' == listOfValues[i][-1:]):
            return True
        if ('"' != listOfValues[i][:1] and '"' != listOfValues[i][-1:]) and listOfValues[i].isdigit():
            return True
        if ('[' == listOfValues[i][:1] and ']' == listOfValues[i][-1:]):
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
    tmpJsonStr = jsonStr
    tmpJsonStr.replace(' ', '')
    if -1 != tmpJsonStr.find('[]'):
        print "Incorect json, The list can not empty!"
        return
    else:
        listOfKeys = [] 
        listOfValues = []
        getKeysAndValue(jsonStr, listOfKeys, listOfValues)
        if True == isJson(jsonStr, listOfKeys, listOfValues):
            print "Corect Json!"
            return

main()

