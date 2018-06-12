#!/bin/python


import sys
import re

text = open('text.txt', 'r')
obj = text.read()


obj = obj.replace('\n', '')
obj = obj.replace(' ', '')
print(obj)


arr = obj.split(',')
size = len(arr)

print(arr[1])
num1 = re.search('"A-Za-z0-9":"A-Za-z0-9"', arr[1])
num2 = re.search('"[A-Z_a-z0-9]+":[0-9]+$', arr[1])
if num1 == None:
    print("true")
else:
    print("fals")
