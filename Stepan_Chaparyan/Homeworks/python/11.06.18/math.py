def printSquare():
    size = input("Enter number: ")
    inner_size = (size - 2)
    print '\n'
    print ('*' * size)
    for i in range(inner_size):
        print ('*' + ' ' * inner_size + '*')
    print ('*' * size)
    print '\n'
    return;
 
def printTriangle():
    size = input("Enter number: ")
    for i in range(1,size+1):
        print ((size-i)*' '+i*'* ')
    print '\n'
    return;
 

def printCircle(rad, ch='*'):
    xscale = 4.2

    #Maximum diameter, plus a little padding
    width = 3 + int(0.5 + xscale * rad)

    rad2 = rad ** 2
    for y in range(-rad, rad + 1):
        #Find width at this height
        x = int(0.5 + xscale * (rad2 - y ** 2) ** 0.5)
        s = ch * x
        print s.center(width)

printCircle(3, '@')
#printSquare();
#printTriangle();
