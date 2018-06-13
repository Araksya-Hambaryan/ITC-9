#!/bin/python
import sys
import re

text = open('text.txt', 'r')
obj = text.read()
obj = obj.replace('\n', '')
obj = obj.replace(' ', '')

def check_json(obj):
    if obj[0] == '{' and obj[-1] == '}':
        obj = obj[1:-1]
    else:
        return 0
    line = obj.split(',')
    for i in range(0, len(line)):
        #print(line[i])
        regex = re.search('"[\w\d]+":"[\w\d]+"', line[i])
        if regex == None:
            return 0
    return 1

print(check_json(obj))
