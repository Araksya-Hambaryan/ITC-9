import re
# ./json.txt

path = './json.txt'

def isUniqueKey(keys):
    size = len(keys)
    for i in range(0, size):
        for j in range(i + 1, size):
            if keys[i] == keys[j]:
                print('Key "', keys[i], '" repeating: ')
                return 0
    return 1


def checkValidity(obj):
    obj = obj.replace(' ', '')
    obj = obj.replace('\n', '')
    obj = obj[1:-1]
    arr = obj.split(',')
    size = len(arr)
    keys = []
    for i in range(0, size):
        result1 = re.search('"[A-Za-z0-9\_]+":"[A-Za-z0-9\_]+"', arr[i])
        result2 = re.search('"[_A-Z_a-z_0-9_]+":[0-9]+$', arr[i])
        key = re.search('"(.+?)"+?', arr[i]).group(1)
        keys.append(key)
        if result1 == None and result2 == None:
            print('Invalid item is ', arr[i])
            return 0
    if not isUniqueKey(keys):
        return 0
    return 1

def main():
    try:
        myFile = open(path, 'r')
        obj = myFile.read()
    except FileNotFoundError:
        myFile = open(path, 'w')
        print('\nPlease open json.txt file from current folder and write there json object: \n')
        return
    
    if checkValidity(obj):
        print('Json is valid: ')
    else:
        print('Json is invalid: ')

main()
