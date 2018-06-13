
import math
def Add(num1,num2):
    res=num1+num2
    print('%d + %d = %d ' %( num1, num2, res))


def Sub(num1,num2):
    res=num1-num2
    print('%d - %d = %d ' %( num1, num2, res))
    

def Mul(num1,num2):
    res=num1*num2
    print('%d * %d = %d ' %( num1, num2, res))


def Div(num1,num2):
    if num2 != 0 :
        res=num1/num2
        print('%d / %d = %d ' %( num1, num2, res))

    else:
        print("The Number Cannot be divided by 0")

def Pow(num1,num2):
    res=math.pow(num1,num2)
    print('%d ^ %d = %d ' %( num1, num2, res))


def calc():
    num1 = int(input('Input 1st Number: '))
    num2 = int(input('Input 2nd Number: '))
    print("Operations")
    print("1. + ")
    print("2. - ")
    print("3. * ")
    print("4. / ")
    print("5. ^ ")
    try :

        op = input('Choose an operation: ')
    except NameError :
	print("There is no such an operator.Try again!")

    if op == 1 :
        Add(num1,num2)
    elif op == 2 :
	Sub(num1,num2)
    elif op == 3 :
	Mul(num1,num2)
    elif op == 4 :
	    Div(num1,num2)
    elif op == 5 :
        Pow(num1,num2)
def main():
    calc()
    
main()
