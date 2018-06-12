def printOperationList():
    print("Operations.")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    print("5. Pow")
    print("6. Modulo(%)")

def calculate():
    printOperationList()
    try:
        operation = input('Please choose operation: ')
    except NameError:
        print('You ve not typed a valid operator ')
        operation = 0
        again()
    if operation > 0 and operation < 7:
        num1 = int(input('Please enter the first number: '))
        num2 = int(input('Please enter the second number: '))
        if operation == 1:
            res = num1 + num2
            print(str(num1) + " + " + str(num2) + " = " + str(res))
        elif operation == 2:
            res = num1 - num2
            print(str(num1) + " - " + str(num2) + " = " + str(res))
        elif operation == 3:
            res = num1 * num2
            print(str(num1) + " * " + str(num2) + " = " + str(res))
        elif operation == 4:
            try:
                res = num1 / num2
            except ZeroDivisionError:
                print('You are devided numer in 0 ')
                again()
            print(str(num1) + " / " + str(num2) + " = " + str(res))
        elif operation == 5:
            res = num1 ** num2
            print(str(num1) + " ^ " + str(num2) + " = " + str(res))
        elif operation == 6:
            res = num1 % num2
            print(str(num1) + " % " + str(num2) + " = " + str(res))
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

calculate()
