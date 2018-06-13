import unittest
import calculator

class TestCalc(unittest.TestCase):
    def test_sum(self):
        self.assertEqual(5, calculator.Add(3,2))
        self.assertEqual(5, calculator.Add(3.5,1.5))
    def test_sub(self):
        self.assertEqual(5, calculator.Sub(3,-2))
        self.assertEqual(5, calculator.Sub(6.5,1.5))
    def test_mul(self):
        self.assertEqual(5, calculator.Mul(2.5,2))
        self.assertEqual(5, calculator.Mul(5,1))
    def test_div(self):
        self.assertEqual(5, calculator.Div(5,1))
        self.assertEqual(None, calculator.Div(5,0))    
        self.assertEqual(2, calculator.Div(5,2.5))
    def test_pow(self):
        self.assertEqual(121, calculator.Pow(11,2))
        self.assertEqual(1, calculator.Pow(5,0))



if __name__ == '__main__':
    unittest.main()
