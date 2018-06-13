#!bin/python
import sys
import re

def primeryListPosition(text, pos1, pos2):

    for i in range(pos1, pos2):
        if text[i] == '[':
            pos1 = i + 1
            primeryListPosition(text, pos1, pos2)
        if text[i] == ']':
            pos1 = pos1 - 1
            checkPrimeryList(text, pos1, i)      
    checkPrimeryJson(text, pos1, pos2)    
    

def primeryJsonPosition(text, pos):
#    if char(text):
    if text != '0':
        for i in range(pos, len(text)):
            if text[i] == '{':
                pos = i + 1 
                primeryJsonPosition(text, pos)
            if text[i] == '}':
                pos = pos - 1
                primeryListPosition(text, pos, i)          
        print("text is ", text)                                       #########################
        print('invalid json 1')
        return False
    else:
        print('valid json')
        exit()                                                      ################################
        return True                                                 
#    else:
#    return False

def checkPrimeryList(text, pos1, pos2):
    pos2 = pos2 - len(text) + 1
    tmp = text[pos1:pos2] 
    text = text.replace(tmp, '0')
    arr = tmp.split(',')
    size = len(arr)
    for m in range(0, size):
        search1 = re.search('[A-Za-z0-9]+', arr[m]) 
        search2 = re.search('[0-9]+', arr[m])
        if search1 == None and search2 == None:
            print('invalid json 2')
            return False
    primeryJsonPosition(text, 0)

def checkPrimeryJson(text, pos1, pos2):
    pos2 = len(text) - pos2 - 1   
    print("after replace text ", text)
    tmp = text[pos1:-pos2]
    print("tmp is ", tmp)                                      #####################) 
    text = text.replace(tmp, '0')
    
    print("after replace text ", text)
    print("after replace TMP ", tmp)
    tmp = tmp[1:-1]
    arr = tmp.split(',')
    size = len(arr)
    print("arr is ", arr)                                     ##########################
    for i in range(0, size):
        search = re.search('"[A-Za-z0-9]+":"[A-Za-z0-9]+"', arr[i])
        search0 = re.search('"[A-Za-z0-9]+":[0-9]+', arr[i])
        if search == None and search0 == None:
            print('invalid json 3')
            return False
        else:
            print('valid json')
#            exit()                                          ###############################
            return True
    primeryJsonPosition(text, 0)
    

#def char(text):
#    size = len(text)
#    count = 0
#    count1 = 0
#    count2 = 0
#    count3 = 0
#    count4 = 0
#    for j in range(0,size):
#        if text[j] == '"':
#            count=count + 1
#        if text[j] == '{':
#            count1=count1 + 1
#        if text[j] == '}':
#            count=count2 + 1
#        if text[j] == '[':
#            count1=count3 + 1
#        if text[j] == ']':
#            count1=count4 + 1
#
#    if count%2 > 0:
#        print("invalid json")
#        return False
#    if count1 != count2:
#        print("invalid json")
#        return False
#    if count3 != count3:
#        print("invalid json")
#        return False
#    return True


def main():
    obj = open('./text.txt')
    text = obj.read()
    text = text.replace(' ', '')
    text = text.replace('\n', '')
    primeryJsonPosition(text, 0)
    
main()









