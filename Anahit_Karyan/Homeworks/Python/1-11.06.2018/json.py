import re

def stugum(myStr1, myStr2):
    if myStr1[0]=='{' and myStr1[-2]=='}':
        arr = myStr2.split(' , ')
        for i in range(0,len(arr)):
            print (arr[i])
            objPntrum = re.search('"[a-zA-Z0-9]":"[a-zA-Z0-9]"',arr[i])
            print (objPntrum)
            if objPntrum:
                print ("True")
            else:
                print ("False")
                return False
        return True
    return False

def main():
    tmpStr = open('json.txt', 'r')
    data = tmpStr.readline()
    string = ""
    for i in range(1,len(data) - 2):
        string += data[i]
    if (stugum(data, string)):
        print ("valid json")
    else:
        print ("invalid json:")
    tmpStr.close()

main()
