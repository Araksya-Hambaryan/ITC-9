import unittest
import Calc

class TestAdd(unittest.TestCase):
    
    def testNegativeNumbers(self):
        result = Calc.add(-100,-100)
        self.assertEqual(-200, result)
    
    def testPosAndNegNumbers(self):
        result = Calc.add(-100,100)
        self.assertEqual(0, result)
    
    def testMaxNumber(self):
        result = Calc.add(100000000000000000000000,100000000000000000000000000000000)
        self.assertEqual(100000000100000000000000000000000, result)

    def testStrings(self):
        result = Calc.add('aaaa', 'bbbb')
        self.assertEqual('Error', result)
    
    def testNumberAndStr(self):
        result = Calc.add('1aa,."///aa1', 10)
        self.assertEqual('Error', result)


class TestSub(unittest.TestCase):
    
    def testNegativeNumbers(self):
        result = Calc.sub(-100,-100)
        self.assertEqual(0, result)
    
    def testPosAndNegNumbers(self):
        result = Calc.sub(-100,100)
        self.assertEqual(-200, result)
    
    def testMaxNumber(self):
        result = Calc.sub(100000000000000000000000,100000000000000000000000000000000)
        self.assertEqual(-99999999900000000000000000000000, result)

    def testStrings(self):
        result = Calc.sub('aaaa', 'bbbb')
        self.assertEqual('Error', result)
    
    def testStrAndNumber(self):
        result = Calc.sub('1aa,."///aa1', 10)
        self.assertEqual('Error', result)
    
    def testNumberAndStr(self):
        result = Calc.sub(10, 'asdfsagfd')
        self.assertEqual('Error', result)

class TestMul(unittest.TestCase):
    
    def testNegativeNumbers(self):
        result = Calc.mul(-10,-10)
        self.assertEqual(100, result)
    
    def testPosAndNegNumbers(self):
        result = Calc.mul(-10,10)
        self.assertEqual(-100, result)
    
    def testNegAndZero(self):
        result = Calc.mul(-10,0)
        self.assertEqual(0, result)
    
    def testPosAndZero(self):
        result = Calc.mul(0,10)
        self.assertEqual(0, result)

    def testMaxNumber(self):
        result = Calc.mul(10000000000000000000000000000000000000000000000000000000000000000,100000000000000000000000000000000)
        self.assertEqual(1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000, result)

    def testStrings(self):
        result = Calc.mul('aaaa', 'bbbb')
        self.assertEqual('Error', result)
    
    def testStrAndNumber(self):
        result = Calc.mul('1aa,."///aa1', 10)
        self.assertEqual('Error', result)
    
    def testNumberAndStr(self):
        result = Calc.mul(10, 'asdfsagfd')
        self.assertEqual('Error', result)

class TestDiv(unittest.TestCase):
    
    def testNegativeNumbers(self):
        result = Calc.div(-10,-10)
        self.assertEqual(1, result)
    
    def testPosAndNegNumbers(self):
        result = Calc.div(-10,10)
        self.assertEqual(-1, result)
    
    def testDivByZero(self):
        result = Calc.div(10,0)
        self.assertEqual('Error', result)
    
    def testDivZero(self):
        result = Calc.div(0,10)
        self.assertEqual(0, result)

    def testMaxNumber(self):
        result = Calc.div(10000000000000000000000000000000000000000,10000000000000000000000000)
        self.assertEqual(1000000000000000, result)

    def testStrings(self):
        result = Calc.div('aaaa', 'bbbb')
        self.assertEqual('Error', result)
    
    def testStrAndNumber(self):
        result = Calc.div('1aa,."///aa1', 10)
        self.assertEqual('Error', result)
    
    def testNumberAndStr(self):
        result = Calc.div(10, 'asdfsagfd')
        self.assertEqual('Error', result)

