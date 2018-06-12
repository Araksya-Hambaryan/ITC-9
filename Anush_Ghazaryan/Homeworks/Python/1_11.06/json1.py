#!/bin/python

import re

def OpenFile():

    filePath = './json'
    jsonFile=open(filePath,'r')
    jFile=jsonFile.read()

def Valid(jFile):
    jFile = jFile.replace(' ', '')
    jFile = jFile.replace('\n', '')
    jFile = jFile[1:-1]
    arr = jFile.split(',')
    size = len(arr)
    print(size)
    print(arr[0])
    print('arr[1]')
    for i in range(0,size):
        r1 = re.search('"[A-Za-z0-9]+":"[A-Za-z0-9_]+"', arr[i])
        r2 = re.search('"[A-Z_a-z0-9]+":[0-9]+$', arr[i])
        if r1 == None and r2 == None:
            return 0
    return 1

def main():
    OpenFile()
    Valid(jFile)
    if Valid(jFile):
        print('Valid')
    else:
	print('Invalid')

main()
