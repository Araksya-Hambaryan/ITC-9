import unittest
import Calc

class TestCalc(unittest.TestCase):

#---------add_function------------------
    def testAddNegativeNumbers(self):
        result = Calc.add(-100,-100)
        self.assertEqual(-200, result)
    
    def testAddPosAndNegNumbers(self):
        result = Calc.add(-100,100)
        self.assertEqual(0, result)
    
    def testAddGreatNumbers(self):
        result = Calc.add(100000000000000000000000,100000000000000000000000000000000)
        self.assertEqual(100000000100000000000000000000000, result)

    def testAddStrings(self):
        result = Calc.add('aaaa', 'bbbb')
        self.assertEqual('Error', result)
    
    def testAddNumberAndStr(self):
        result = Calc.add('1aa,."///aa1', 10)
        self.assertEqual('Error', result)
    
#---------sub_function---------------------
    def testSubNegativeNumbers(self):
        result = Calc.sub(-100,-100)
        self.assertEqual(0, result)
    
    def testSubPosAndNegNumbers(self):
        result = Calc.sub(-100,100)
        self.assertEqual(-200, result)
    
    def testSubGreatNumbers(self):
        result = Calc.sub(100000000000000000000000,100000000000000000000000000000000)
        self.assertEqual(-99999999900000000000000000000000, result)

    def testSubStrings(self):
        result = Calc.sub('aaaa', 'bbbb')
        self.assertEqual('Error', result)
    
    def testSubStrAndNumber(self):
        result = Calc.sub('1aa,."///aa1', 10)
        self.assertEqual('Error', result)
    
    def testSubNumberAndStr(self):
        result = Calc.sub(10, 'asdfsagfd')
        self.assertEqual('Error', result)

#--------------mul_function----------------

    def testMulNegativeNumbers(self):
        result = Calc.mul(-10,-10)
        self.assertEqual(100, result)
    
    def testMulPosAndNegNumbers(self):
        result = Calc.mul(-10,10)
        self.assertEqual(-100, result)
    
    def testMulNegAndZero(self):
        result = Calc.mul(-10,0)
        self.assertEqual(0, result)
    
    def testMulPosAndZero(self):
        result = Calc.mul(0,10)
        self.assertEqual(0, result)

    def testMulGreatNumbers(self):
        result = Calc.mul(10000000000000000000000000000000000000000000000000000000000000000,100000000000000000000000000000000)
        self.assertEqual(1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000, result)

    def testMulStrings(self):
        result = Calc.mul('aaaa', 'bbbb')
        self.assertEqual('Error', result)
    
    def testMulStrAndNumber(self):
        result = Calc.mul('1aa,."///aa1', 10)
        self.assertEqual('Error', result)
    
    def testMulNumberAndStr(self):
        result = Calc.mul(10, 'asdfsagfd')
        self.assertEqual('Error', result)

#--------------div_function------------------
    
    def testDivNegativeNumbers(self):
        result = Calc.div(-10,-10)
        self.assertEqual(1, result)
    
    def testDivPosAndNegNumbers(self):
        result = Calc.div(-10,10)
        self.assertEqual(-1, result)
    
    def testDivByZero(self):
        result = Calc.div(10,0)
        self.assertEqual('Error', result)
    
    def testDivZeroByNumber(self):
        result = Calc.div(0,10)
        self.assertEqual(0, result)

    def testDivGreatNumbers(self):
        result = Calc.div(10000000000000000000000000000000000000000,10000000000000000000000000)
        self.assertEqual(1000000000000000, result)

    def testDivStrings(self):
        result = Calc.div('aaaa', 'bbbb')
        self.assertEqual('Error', result)
    
    def testDivStrAndNumber(self):
        result = Calc.div('1aa,."///aa1', 10)
        self.assertEqual('Error', result)
    
    def testDivNumberAndStr(self):
        result = Calc.div(10, 'asdfsagfd')
        self.assertEqual('Error', result)

