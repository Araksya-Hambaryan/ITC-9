
import math

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

    if op is 1 :
	result=num1+num2
	print('%d + %d = %d ' %( num1, num2, result))
    elif op is 2 :
	result=num1-num2
	print('%d - %d = %d ' %( num1, num2, result))
    elif op is 3 :
	result=num1*num2
	print('%d * %d = %d ' %( num1, num2, result))
    elif op is 4 :
	if num2 != 0 :
	    result=num1/num2
	    print('%d / %d = %d ' %( num1, num2, result))
	else :
	    print("The Number cannot be divided by 0 ")
    elif op is 5 :
	result=math.pow(num1,num2)
	print('%d ^ %d = %d ' %( num1, num2, result))

def main():
    calc()
    
main()
