import re

path = './json.txt'

def uniqueKey(keys):
    size = len(keys)
    for i in range(0, size):
        for j in range(i + 1, size):
            if keys[i] == keys[j]:
                print('Key "', keys[i], '" is not unique: ')
                return 0
    return 1

def checkValidity(obj):
    keys = []
    obj = obj.replace(' ', '')
    obj = obj.replace('\n', '')
    obj = obj[1:-1]

    #-------separate json arrays (this elements [....])
    tmp = obj[obj.find("[")+1:obj.find("]")]
    tmpArr = tmp.split(',')
    obj = re.sub(r'\[[^)]*\]', '0', obj)
    size = len(tmpArr)
    
    #-------check item which contains array ["a", "b"]-------
    for i in range(0, size):
        if not re.search('"[A-Za-z0-9_]+"|[0-9]+', tmpArr[i]):
            return 0
    
    #-------check json--------------------------------------
    arr = obj.split(',')
    size = len(arr)
    for i in range(0, size):
        result1 = re.search('"[A-Za-z0-9]+":"[A-Za-z0-9_]+"', arr[i])
        result2 = re.search('"[A-Z_a-z0-9]+":[0-9]+$', arr[i])
        key = re.search('"(.+?)"+?', arr[i])
        if key == None:
            return 0
        key = key.group(1)
        keys.append(key)
        if result1 == None and result2 == None:
            print('Invalid item is ', arr[i])
            return 0
    if not uniqueKey(keys):
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