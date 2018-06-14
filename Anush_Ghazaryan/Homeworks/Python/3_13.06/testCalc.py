import unittest
import calculator

class TestCal(unittest.TestCase):
        def add_Func(self):
            res = calculator.Add(20,8)
            self.assertEqual(28,res)
        def sub_Func(self):
            res = calculator.Sub(28,8)
            self.assertEqual(20,res)
        def mul_Func(self):
            res = calculator.Mul(5,5)
            self.assertEqual(25,res)
        def div_Func(self):
            res = calculator.Div(25,5)
            self.assertEqual(5,res)
        def pow_Func(self):
            res = calculator.Pow(2,2)
            self.assertEqual(4,res)

if __name__ == '__main__':
    unittest.main()
