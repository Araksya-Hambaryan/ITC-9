import math
import sys
def printSquare(size,sim):
    line = size*sim
    for i in range(size):
        print (line)

def printTriangle(size,sim):
	count = size
	size = 1
	for i in range(count,0,-1):
		line = i*' ' + size*sim
		print (line)
		size += 1

def circle(i):
    i += 1
    from math import sqrt
    result = ""
    midden = i / 2
    for a in range(i):
        for b in range(i):
            c = sqrt((midden - a)**2 + (midden - b)**2)
            if midden > c:
                result += "#"
            else:
                result += " "
        result += "\n"
    print(result)
size = int(input('Enter square size:'))
printSquare(size,'* ')
print
size = int(input('Enter triangle size:'))
printTriangle(size,'* ')
print
size = int(input('Enter circle radius:'))
circle(size)



