import unittest
import Calc

class TestAdd(unittest.TestCase):
    def test_add_possitives(self):
        res = Calc.add(3,5)
        self.assertEqual(8, res)
    def test_add_negatives(self):
        res = Calc.add(-3,-5)
        self.assertEqual(-8, res)
    def test_add_possitive_and_negative(self):
        res = Calc.add(3,-5)
        self.assertEqual(-2, res)
    def test_add_big_nums(self):
        res = Calc.add(333355,555533)
        self.assertEqual(888888, res)
    def test_add_notEqual(self):
        res = Calc.add(-3,-5)
        self.assertNotEqual(60, res)
    def test_add_notNone(self):
        res = Calc.add(3,-5)
	self.assertIsNotNone(res) 


class TestSubtract(unittest.TestCase):
    def test_sub_possitives(self):
        res = Calc.sub(5,3)
        self.assertEqual(2, res)
    def test_sub_negatives(self):
        res = Calc.sub(-3,-5)
        self.assertEqual(2, res)
    def test_sub_possitive_and_negative(self):
        res = Calc.sub(3,-5)
        self.assertEqual(8, res)
    def test_sub_big_nums(self):
        res = Calc.sub(555588,333333)
        self.assertEqual(222255, res)
    def test_sub_notEqual(self):
        res = Calc.sub(-3,5)
        self.assertNotEqual(60, res)
    def test_sub_notNone(self):
        res = Calc.add(3,-5)
	self.assertIsNotNone(res) 


class TestMultiply(unittest.TestCase):
    def test_mul_possitives(self):
        res = Calc.mul(3,5)
        self.assertEqual(15, res)
    def test_mul_negatives(self):
        res = Calc.mul(-3,-5)
        self.assertEqual(15, res)
    def test_mul_possitive_and_negative(self):
        res = Calc.mul(3,-5)
        self.assertEqual(-15, res)
    def test_mul_big_nums(self):
        res = Calc.mul(5555,100000)
        self.assertEqual(555500000, res)
    def test_mul_notEqual(self):
        res = Calc.mul(-3,-5)
        self.assertNotEqual(60, res)
    def test_mul_notNone(self):
        res = Calc.mul(3,-5)
	self.assertIsNotNone(res)

def div(x,y):
    try:
        return x/y
    except ZeroDivisionError:
        print("Division by zero")

class TestDivide(unittest.TestCase):

    def test_div_possitives(self):
        res = Calc.div(15,5)
        self.assertEqual(3, res)
    def test_div_negatives(self):
        res = Calc.div(-15,-5)
        self.assertEqual(3, res)
    def test_div_possitive_and_negative(self):
        res = Calc.div(15,-5)
        self.assertEqual(-3, res)
    def test_div_small_to_big_nums(self):
        res = Calc.div(555,100000)
        self.assertEqual(0, res)
    def test_div_notEqual(self):
        res = Calc.div(-3,-5)
        self.assertNotEqual(60, res)
    def test_div_Zro(self):
        res = Calc.div(0,5)
        self.assertEqual(0, res)
    def test_zero_division(self):
        try:
            div(10,0)
        except ZeroDivisionError:
            self.fail("ZeroDivisionError")

if __name__ == '__main__':
    unittest.main()

