import re

def checkValidity():
    txt = open("json.txt", "r")
    lines = []
    invalid = 0

    for line in txt:
        lines.append(line)

    length = len(lines)

    if lines[0][:-1] != "{" or lines[length-1][:-1] != "}":
        print (lines[length-1])
        print ("Bad json!")
        invalid = 1
    else:
        lines[length-1] += ','

        for i in range(1, length-2):
            result = re.search('"[A-Za-z0-9]+" : [0-9]+,', lines[i])
            if result == None or result.group() != lines[i][4:-1]:
                    print ("Bad json!")
                    invalid = 1

    if invalid == 0:
        print ("Good json!")

def main():
    checkValidity()

main()
