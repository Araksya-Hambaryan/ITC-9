def gumarum(x, y):
    return x + y

def hanum(x, y):
    return x - y

def bajanum(x, y):
    if y == 0:
        print("0i vra hnaravor che bajanel")
    
    return x/y

def bazmapatkum(x, y):
    return x * y

def mnacord(x, y):
	return x % y

def astichan(x, y):
	return x ** y

def gorcoxutyunner():
    print("Hashvichn uni hetevyal gorcoxutyunner@")
    print("+gumarum")
    print("-hanum")
    print("/bajanum")
    print("*bazmapatkum")
    print("%mnacord")
    print("**astichan")



def calculator():
   
        num1 = int(input("Nermuceq 1in tiv@. "))
        num2 = int(input("Nermuceq 2rd tiv@. "))
        gorcoxutyun = input("Nermuceq gorcoxutyun.")

        if gorcoxutyun == "+":
            print(gumarum(num1,num2))
        elif gorcoxutyun == "*":
            print(bazmapatkum(num1,num2))
        elif gorcoxutyun == "-":
            print(hanum(num1,num2))
        elif gorcoxutyun == "/":
            print(bajanum(num1,num2))
        elif gorcoxutyun == "**":
            print(astichan(num1,num2))
        elif gorcoxutyun == "%":
            print(mnacord(num1,num2))
        else:
            print('Hashvich@ chuni aydpisi gorcoxutyun.')

gorcoxutyunner()
calculator()

