#This function adds two numbers 

def add(x, y):
    if type(x) != int or type(y) != int:
	return 'Error'
    else:
        return x + y

# This function subtracts two numbers 
def sub(x, y):
    if type(x) != int or type(y) != int:
        return 'Error'
    else:
        return x - y

# This function multiplies two numbers
def mul(x, y):
    if type(x) != int or type(y) != int:
        return 'Error'
    else:
        return x * y

# This function divides two numbers
def div(x, y):
    if type(x) != int or type(y) != int or y == 0:
        return 'Error'
    else:
        return x / y

#print("Select operation.")
#print("1.Add")
#print("2.Subtract")
#print("3.Multiply")
#print("4.Divide")

# Take input from the user 
#choice = input("Enter choice(1/2/3/4):")

#num1 = input("Enter first number: ")
#num1 = (int)(num1)
#if type(num1) != int:
#    print "Enter integer"
#else: 
#    num1 = int(num1)

#num2 = int(input("Enter second number: "))

#if choice == 1:
#    print(add(num1,num2))

#elif choice == 2:
#    print(subtract(num1,num2))

#elif choice == 3:
#    print(multiply(num1,num2))

#elif choice == 4:
#    print(divide(num1,num2))
#else:
#    print("Invalid input")
