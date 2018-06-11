def tri():
    char="*"
    space=" "
    spCh=" *"
    num=input( )
    num=int(num)
    if  3 <= num <= 30:
        for x in range(0,num):
            if x == 0:
                print(space*(num+1)+char)
            elif x == num-1:
                print(spCh*(num+1))
            else:
                angle=space*(num-x)+char+(x*2+1)*space+char
                print(angle)
    else:
        print("Invalid input :(")

def quat():
    char="* "
    space="  "
    num=input( )
    num=int(num)
    if  3 <= num <= 30:
        angle=char+space*(num-2)+char
        for x in range(0,num):
            if x == 0 or x == num-1:
                print(char*num)
            else:
                print(angle)
    else:
        print("input is invalid : (")

print("For triangle input 1")
print("For square input 2")
inp=input( )
inp=int(inp)
if inp == 1:
    tri()
elif inp ==2:
    quat()
else:
    print("good bye")
