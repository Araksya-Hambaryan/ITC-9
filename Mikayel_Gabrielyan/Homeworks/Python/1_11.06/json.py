import re

def check(myStr1, myStr2):
    if myStr1[0]=='{' and myStr1[-2]=='}':
        arr = myStr2.split(' , ')
        for i in range(0,len(arr)):
            print (arr[i])
            searchObj = re.search('"[a-zA-Z0-9]":"[a-zA-Z0-9]"',arr[i])
            print (searchObj)
            if searchObj:
                print ("its True")
            else:
                print ("Its False")
                return False
        return True
    return False

def main():
    tmpStr = open('file.txt', 'r')
    data = tmpStr.readline()
    string = ""
    for i in range(1,len(data) - 2):
        string += data[i]
    if (check(data, string)):
        print ("Jsonn is valid")
    else:
        print ("Json is invalid")
    tmpStr.close()

main()
