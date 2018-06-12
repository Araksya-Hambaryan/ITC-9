#!/bin/python

import sys
import re
def change_json():
    text = open('text.txt', 'r')
    obj = text.read()
    obj = obj.replace('\n', '')
    obj = obj.replace(' ', '')
    if obj[0] == '{' and obj[-1] == '}':
	obj = obj[1:-1]
    else:    
	return "invalid json"
    line = obj.split(',')
    for i in range(0, len(line)):
	#print(line[i])
        regex = re.search('"[\w\d]+":"[\w\d]+"', line[i])
    	if regex == None:
    	    return "invalid json"
    return "valid json"


print(change_json())
