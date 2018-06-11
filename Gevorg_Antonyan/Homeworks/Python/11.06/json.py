#!/bin/python

import sys
text = open('text.txt')
i = 1  
line = text.readline()
while line:
    size = len(line)
    count=0
    count1=0
    count2=0
    count3=0
    for j in range(0,size):
        if line[j] == '"':
            count=count+1
        if line[j] == ':':
            count1=count1+1
#        if line[j]+line[j+1] == '":':
#            count2=count2+1
        if line[j] == ',':
            count3=count3+1
    if count%2 > 0:
        print("invalid json in line", i)
        break
    if count1 != count/2:
        print("invalid json in line", i)
        break
    if count1 != count2:
        print("invalid json in line", i)
        break
    if count3 != (count2-1):
        print("invalid json in line", i)
        break
    if line[0] != '{':
        print("invalid json in line", i)
        break
    if line[-1] != '}':
        print("invalid json in line", i)
        break
    if line[1] != '"':
        print("invalid json in line", i)
        break
    i=i+1
    line = text.readline()
text.close()
