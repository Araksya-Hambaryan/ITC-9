import unittest
import Calc

class TestAdd(unittest.TestCase):
    def test_add_8_2(self):
        res = Calc.add(800000000,2)
        self.assertEqual(800000002, res)
    def test_add_8_0(self):
        res = Calc.add(8,0)
        self.assertEqual(8, res)
    def test_add_8_1(self):
        res = Calc.add(8,-1)
        self.assertEqual(7, res)
class TestSub(unittest.TestCase):
    def test_sub_8_2(self):
        res = Calc.subtract(8,2)
        self.assertEqual(6, res)
    def test_sub_8_3(self):
        res = Calc.subtract(8,0)
        self.assertEqual(8, res)
    def test_sub_8_1(self):
        res = Calc.subtract(8,-1)
        self.assertEqual(9, res)
class TestMult(unittest.TestCase):
    def test_mult_8_2(self):
        res = Calc.multiply(800000000,2)
        self.assertEqual(1600000000, res)
    def test_mult_8_3(self):
        res = Calc.multiply(8,0)
        self.assertEqual(0, res)
    def test_mult_8_1(self):
        res = Calc.multiply(8,-1)
        self.assertEqual(-8, res)
class TestDiv(unittest.TestCase):
    def test_div_8_2(self):
        res = Calc.divide(8,2)
        self.assertEqual(4, res)
    def test_div_8_0(self):
        res = Calc.divide(8,0)
        self.assertEqual(0, res)
    def test_div_8_1(self):
        res = Calc.divide(8,-1)
        self.assertEqual(-8, res)
class TestPow(unittest.TestCase):
    def test_pow_8_2(self):
        res = Calc.pow(8,2)
        self.assertEqual(64, res)
    def test_pow_8_0(self):
        res = Calc.pow(8,0)
        self.assertEqual(1, res)
    def test_pow_8_1(self):
        res = Calc.pow(8,-1)
        self.assertEqual(0.125, res)
class TestMod(unittest.TestCase):
    def test_mod_8_2(self):
        res = Calc.modulo(8,2)
        self.assertEqual(0, res)
    def test_mod_8_5(self):
        res = Calc.modulo(8,5)
        self.assertEqual(3, res)
    def test_mod_8_1(self):
        res = Calc.modulo(8,-1)
        self.assertEqual(0, res)
