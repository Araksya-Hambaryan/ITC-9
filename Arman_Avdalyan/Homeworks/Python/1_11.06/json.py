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

def checkArrays(obj):
    while True:
        tmp = obj[obj.find('['):obj.find('],"')+1]
        if tmp == '':
            tmp = obj[obj.find('['):obj.find(']}')+1]
        if tmp == '':
            return obj
        tmp1 = tmp
        tmp = tmp.replace('[', '')
        tmp = tmp.replace(']', '')
        tmpArr = tmp.split(',')
        obj = obj.replace(tmp1, '0')
        for item in tmpArr:
            if not re.search('^"[A-Za-z0-9]+"$', item) and not re.search('^[0-9]+$', item):
                return 0
    return obj

def checkValidity(obj):
    if obj.count('{') != obj.count('}') or obj.count('[') != obj.count(']'):
        return 0
    obj = obj.replace(' ', '')
    obj = obj.replace('\n', '')
    if obj.find('}"') != -1 or obj.find('""') != -1:
        return 0
    keys = []
    obj = obj[1:-1]
    obj = obj.replace('{}', '0')
    arr = re.findall(r'\{[^)]*\}', obj)
    if len(arr) != 0:
        tmp = ''.join(arr)
        checkValidity(tmp)
    obj = checkArrays(obj)
    if obj == 0:
        return 0
    arr = obj.split(',')
    for item in arr:
        key = re.search('"(.+?)"+?', item)
        if key == None:
            return 0
        key = key.group(1)
        keys.append(key)
        if not re.search('"[A-Za-z0-9]+":"[A-Za-z0-9]+"', item) and not re.search('"[A-Za-z0-9]+":[0-9]+', item):
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
        myFile.close()
        return

    if checkValidity(obj):
        print('Json is valid: ')
    else:
        print('Json is invalid: ')
    myFile.close()

main()
