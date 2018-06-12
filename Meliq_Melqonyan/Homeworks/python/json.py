import re

path = './file.txt'

def validOrInvalid(obj):
    obj = obj.replace(' ', '')
    obj = obj.replace('\n', '')
   # if obj[1] == '{' and obj[-1] == '}':
    obj = obj[1:-1]
   # else:
    #    return 0
    arr = obj.split(',')
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
    file = open(path, 'r')
    temp = file.read()

    if validOrInvalid(temp):
        print('Json valid')
    else:
        print('Json invalid')

main()
