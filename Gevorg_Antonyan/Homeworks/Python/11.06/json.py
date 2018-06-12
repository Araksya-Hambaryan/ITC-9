#!/bin/python
######don't add examples with symbols in key or value######
import sys
import re

obj = open('./text.txt')
text = obj.read()
text = text.replace(' ', '')
text = text.replace('\n', '')

def primeryjson(text1):
    if text1[0] != '{' or text1[-1] != '}':
        print('invalid json')
        exit()
    text1 = text1[1:-1]

    for i in range(0, len(text1)):
        tmp = None
        if text1[i] == '[':
            x = i + 1
            count = len(text1)
            for j in range(x, count):
                if text1[j] == '[':
                    i = j
                else:
                    if text1[j] == ']':
                        symbol = 0
                        for k in range(i, j):
                            tmp = tmp + text1[k]
                            symbol = k
                        text1 = text1 - tmp
                        text1[symbol] = '0'
                        tmp = tmp[1:]
                        arr = tmp.split(',')
                        size = len(arr)
                        for m in range(0, size):
                            search1 = re.search('[A-Za-z0-9]+', arr[m])
                            search2 = re.search('[0-9]+', arr[m])
                            if search1 == None and search2 == None:
                                print('invalid json')
                                exit()
    element = text1.split(',')
    for i in range(0, len(element)):
        search = re.search('"[A-Za-z0-9]+":"[A-Za-z0-9]+"', arr[i])
        search0 = re.search('"[A-Za-z0-9]+":[0-9]+', arr[i])
        if search == None and search0 == None:
            print('invalid json')
            exit()


def jsonInJson(text):
    if text[0] != '{' or text[-1] != '}':
        print('invalid json')
        exit()
    text = text[1:-1]

    for i in range(0, len(text)):
        tmp = None
        if text[i] == '{':
            x = i + 1
            count = len(text)
            for j in range(x, count):
                if text[j] == '{':
                    i = j
                else:
                    if text[j] == ']':
                        symbol = 0
                        for k in range(i, j + 1):
                            tmp1 = tmp1 + text[k]
                            primeryjson(tmp1)
                            symbol = k
                        text = text - tmp1
                        text[symbol] = '0'

jsonInJson(text)
print('valid json')                            


#i = 1  
#line = text.readline()
#while line:
#    size = len(line)
#    count=0
#    count1=0
#    count2=0
#    count3=0
#    for j in range(0,size):
#        if line[j] == '"':
#            count=count+1
#        if line[j] == ':':
#            count1=count1+1
##        if line[j]+line[j+1] == '":':
##            count2=count2+1
#        if line[j] == ',':
#            count3=count3+1
#    if count%2 > 0:
#        print("invalid json in line", i)
#        break
#    if count1 != count/2:
#        print("invalid json in line", i)
#        break
#    if count1 != count2:
#        print("invalid json in line", i)
#        break
#    if count3 != (count2-1):
#        print("invalid json in line", i)
#        break
#    if line[0] != '{':
#        print("invalid json in line", i)
#        break
#    if line[-1] != '}':
#        print("invalid json in line", i)
#        break
#    if line[1] != '"':
#        print("invalid json in line", i)
#        break
#    i=i+1
#    line = text.readline()
#text.close()
