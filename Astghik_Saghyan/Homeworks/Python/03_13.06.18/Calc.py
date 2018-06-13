def printOperationList():
    print("Operations.")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    print("5. Pow")
    print("6. Modulo(%)")

def add(x, y):
    return x + y

def subtract(x, y):
    return x - y

def multiply(x, y):
    return x * y

def divide(x, y):
    try:
    	res = x / y
    except ZeroDivisionError:
	res = 0
    print("You are devided numer in 0 ")
    return res

def pow(x, y):
	return x ** y

def modulo(x, y):
	return x % y

def calculate():
    printOperationList()
    try:
        operation = input('Please choose operation: ')
    except NameError:
        print('You have not typed a valid operator ')
        operation = 0
        again()
    if operation > 0 and operation < 7:
        num1 = int(input('Please enter the first number: '))
        num2 = int(input('Please enter the second number: '))
        if operation == 1:
            print(add(num1,num2))
        elif operation == 2:
            print(subtract(num1,num2))
        elif operation == 3:
            print(multiply(num1,num2))
        elif operation == 4:
            print(divide(num1,num2))
	    again()
        elif operation == 5:
            print(pow(num1,num2))
        elif operation == 6:
            print(modulo(num1,num2))
    else:
        print('You have not typed a valid operator')
    again()

def again():
    calcAgain = input('''
    Do you want to calculate again?
    Please type 1 for YES or 0 for NO.
    ''')
    if calcAgain == 1:
        calculate()
    elif calcAgain == 0:
        print('See you later.')
        return
    else:
        again()

def main():
    calculate()

if __name__ == "__main__":
    main()
