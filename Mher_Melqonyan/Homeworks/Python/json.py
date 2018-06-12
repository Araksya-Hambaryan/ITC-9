import re
with open("test.txt", "r") as ins:
    arr = []
    for line in ins:
        line = line.replace("\n", "")
        line = line.replace(" ", "")
        arr.append(line)
lenA=len(arr)-1
if arr[0] == '{' and arr[lenA] == '}':
    for i in range (1, lenA):
        elem = arr[i]
        elem = elem.split(":")
        if len(elem) == 2:
            if i == lenA -1:
                first=elem[0]
                sec=elem[1]
                if first[0] == '"' and first[-1] == '"':
                    if sec[0] == '"' and sec[-1] == '"' or sec[0] == '[' and sec[-1] == ']' or sec.isnumeric():
                        pass
                    else:
                        print("not Json")
                        exit(0)
                else:
                    print("not Json")
                    exit(0)
            else:
                first=elem[0]
                sec=elem[1]
                secNew=sec[0 : -1]
                if first[0] == '"' and first[-1] == '"':
                    if sec[0] == '"' and sec[-2] == '"' and sec[-1] == ',' or sec[0] == '[' and sec[-2] == ']' and sec[-1] == ',' or secNew.isnumeric() and sec[-1] == ',':
                        pass
                    else:
                        print("not Json")
                        exit(0)
                else:
                    print("not Json")
                    exit(0)

else:
    exit(0)
    print("not Json")
print("sucessful Json")



